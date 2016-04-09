#include "dbmanager.h"
#include <QSqlDatabase>
#include <QUuid>
#include <QSqlQuery>
#include <QSqlError>

DbManager* DbManager::instance;
bool  DbManager::instantiated = false;
DbManager::DbManager()
{
    instance = NULL;
}

void DbManager::setParameters(QString host, int port, QString user, QString pwd, QString schema, int poolSize, long expire)
{
    mHost = host;
    mPort = port;
    mUser = user;
    mPwd = pwd;
    mSchema = schema;
    isConnectionLost = false;
    pool = new ConnectionPool(mHost, mPort, mUser, mPwd, mSchema, poolSize, expire);
}

void DbManager::cleanUp()
{
    if (pool)
    {
        delete pool;
        pool = 0;
    }
    if (instance)
    {
        delete instance ;
        instance = 0;
    }
}

DbManager *DbManager::getInstance()
{
    if (!instantiated)
    {
        instance = new DbManager();
        instantiated = true;
    }
    return instance;
}

QSqlDatabase DbManager::acquire()
{
    if(isConnectionLost){
        QSqlDatabase con;
        return con;
    }
    return pool->acquire();
}

QString DbManager::release(QSqlDatabase db)
{
    return pool->release(db);
}

void DbManager::setCacheConnection(bool enable)
{
    pool->setCache(enable);
}

QSqlDatabase DbManager::getConnectionWithParam(QString host,int port,QString user,QString pass,QString db){

    QString connectionName = QUuid::createUuid().toString();
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QPSQL", connectionName);
    db1.setConnectOptions("connect_timeout=10");
    db1.setHostName(host);
    db1.setUserName(user);
    db1.setPassword(pass);
    db1.setDatabaseName(db);
    db1.setPort(port);
    db1.open();
    return db1;
}

void DbManager::execQueryByOther(QString queryString){
    QSqlDatabase con = DbManager::getInstance()->acquire();
    QSqlQuery query (con);
    bool result = query.exec(queryString);
    DbManager::getInstance()->release(con);
}

void DbManager::setConnectionLost()
{
    if(!isConnectionLost)
        isConnectionLost = true;
}

void DbManager::setConnectionRevive()
{
    if(isConnectionLost)
        isConnectionLost = false;
}

void DbManager::clearPool()
{
    pool->clearPool();
}
