#include <QMutexLocker>
#include <QDateTime>
#include <time.h>
#include <QSqlDatabase>
#include <QUuid>
#include <QDebug>
#include <QStringList>
#include <QCoreApplication>
#include <QtNetwork/QNetworkInterface>

#include "connectionpool.h"

ConnectionPool::ConnectionPool(QString host, int port, QString user, QString pwd, QString schema, int size, long expirationTime) :
    mHost(host), mPort(port), mUser(user), mPwd(pwd), mSchema(schema), mPoolSize(size), mExpirationTime(expirationTime), mCacheConnection(true)
{
    mConnectionName = "VB1MServer";
}

ConnectionPool::~ConnectionPool()
{
    for(QHash<QString,long>::iterator it = mLocked.begin(); it != mLocked.end(); it++)
    {
        QSqlDatabase db = QSqlDatabase::database(it.key(), false);
        if (db.isOpen())
            db.close();
    }
    for(QHash<QString,long>::iterator it = mUnlocked.begin(); it != mUnlocked.end(); it++)
    {
        QSqlDatabase db = QSqlDatabase::database(it.key(), false);
        if (db.isOpen())
            db.close();
    }
    mLocked.clear();
    mUnlocked.clear();
}

QSqlDatabase ConnectionPool::acquire()
{
    if(!mCacheConnection)
        return create();
    QMutexLocker mutextLocker (&mLocker);
    QSqlDatabase connection;
    checkConnection();
    //    qDebug()<<"trc khi acquire"<<mUnlocked.size()<<mLocked.size()<<QSqlDatabase::connectionNames().count();
    if (mUnlocked.size() > 0)
    {
        QString conn = mUnlocked.keys().first();
        connection = QSqlDatabase::database(conn);
        mLocked.insert(conn, time(NULL));
        mUnlocked.remove(conn);
        //        qDebug() << "+++++++++++Number of connections used: " << mLocked.size() << " ++++++++++++++++++++++";
        //        isSet = true;
        return connection;
    }
    /*check pool size*/
    if (mUnlocked.size()+mLocked.size() < mPoolSize)
    {
        connection = create();
    }
    return connection;
}

QString ConnectionPool::release(QSqlDatabase db)
{
    if(!mCacheConnection)
    {
        db.close();
        return "";
    }
    QMutexLocker mutexLocker (&mLocker);
    mLocked.remove(db.connectionName());
    mUnlocked.insert(db.connectionName(), time(NULL));
    return "";
}

QSqlDatabase ConnectionPool::create()
{
    if(!mCacheConnection)
    {
        QSqlDatabase db = QSqlDatabase::database(mConnectionName);
        db.open();
        return db;
    }
    QString connectionName = QUuid::createUuid().toString();
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", connectionName);
    db.setConnectOptions("connect_timeout=10");
    db.setHostName(mHost);
    db.setPort(mPort);
    db.setUserName(mUser);
    db.setPassword(mPwd);
    db.setDatabaseName(mSchema);
    if (!db.open() && !QCoreApplication::closingDown())
    {
        qDebug() << "Attemping to create new database connection...";
    }
    if (db.isOpen())
        mLocked.insert(connectionName, time(NULL));
    return db;
}

bool ConnectionPool::validate(QSqlDatabase db)
{
    return (db.isOpen());
}

void ConnectionPool::expire(QSqlDatabase db)
{
    if (db.isOpen())
    {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.databaseName());
}

void ConnectionPool::setCache(bool enable)
{
    mCacheConnection = enable;
    if(!mCacheConnection)
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", mConnectionName);
        db.setConnectOptions("connect_timeout=10");
        db.setHostName(mHost);
        db.setPort(mPort);
        db.setUserName(mUser);
        db.setPassword(mPwd);
        db.setDatabaseName(mSchema);
    }
}

void ConnectionPool::checkConnection(){
    QSqlDatabase connection;
    //    foreach(QString conn, QSqlDatabase::connectionNames()){
    //        if(!mUnlocked.keys().contains(conn) && !mLocked.keys().contains(conn)){
    //            connection = QSqlDatabase::database(conn);
    //            bool isValid = connection.isValid();
    //            bool isExpired = false;
    //            bool isClosed = !connection.isOpen();

    //            if (connection.isOpenError() || isExpired || isClosed || !isValid)
    //            {
    //                mUnlocked.remove(conn);
    //                mLocked.remove(conn);
    //                QSqlDatabase::removeDatabase(conn);
    //                qDebug () << QString("Connection %1 is timeout or invalid. Cleanup operation is performed").arg(conn);
    //            }
    //        }
    //    }

    if (mUnlocked.size() > 0)
    {
        QList<QString> connNames = mUnlocked.keys();
        foreach(QString conn, connNames)
        {
            connection = QSqlDatabase::database(conn);
            bool isValid = connection.isValid();
            bool isExpired = false;
            bool isClosed = !connection.isOpen();

            if (connection.isOpenError() || isExpired || isClosed || !isValid)
            {
                mUnlocked.remove(conn);
                mLocked.remove(conn);
                QSqlDatabase::removeDatabase(conn);
//                qDebug () << QString("Connection %1 is timeout or invalid. Cleanup operation is performed").arg(conn);
            }
        }
    }
}

bool ConnectionPool::isConnectedToNetwork()
{
    QList<QNetworkInterface> ifaces = QNetworkInterface::allInterfaces();
    bool result = false;

    for (int i = 0; i < ifaces.count(); i++)
    {
        QNetworkInterface iface = ifaces.at(i);
        if ( iface.flags().testFlag(QNetworkInterface::IsUp)
             && !iface.flags().testFlag(QNetworkInterface::IsLoopBack) )
        {

#ifdef DEBUG
            // details of connection
            qDebug() << "name:" << iface.name() << endl
                     << "ip addresses:" << endl
                     << "mac:" << iface.hardwareAddress() << endl;
#endif

            // this loop is important
            for (int j=0; j<iface.addressEntries().count(); j++)
            {
#ifdef DEBUG
                qDebug() << iface.addressEntries().at(j).ip().toString()
                         << " / " << iface.addressEntries().at(j).netmask().toString() << endl;
#endif

                // we have an interface that is up, and has an ip address
                // therefore the link is present

                // we will only enable this check on first positive,
                // all later results are incorrect
                if (result == false)
                    result = true;
            }
        }

    }
    return result;
}

void ConnectionPool::clearPool()
{

//    qDebug() << "===============================";
//    qDebug() << "Clear Pool";
//    qDebug() << "===============================";
    if (mUnlocked.size() > 0)
    {
        QList<QString> connNames = mUnlocked.keys();
        foreach(QString conn, connNames)
        {
            mUnlocked.remove(conn);
            QSqlDatabase::removeDatabase(conn);
//            qDebug () << QString("Connection %1 is timeout or invalid. Cleanup operation is performed").arg(conn);
        }
    }
    if (mLocked.size() > 0)
    {
        QList<QString> connNames = mLocked.keys();
        foreach(QString conn, connNames)
        {
            mLocked.remove(conn);
            QSqlDatabase::removeDatabase(conn);
//            qDebug () << QString("Connection %1 is timeout or invalid. Cleanup operation is performed").arg(conn);
        }
    }
}
