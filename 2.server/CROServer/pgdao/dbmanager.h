#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QString>
#include "connectionpool.h"
class DbManager : public QObject
{
    Q_OBJECT

public slots:
    void setConnectionLost();
    void setConnectionRevive();
    void clearPool();
public:
    static DbManager* getInstance ();
    QSqlDatabase acquire();
    QString release(QSqlDatabase db);
    void setParameters(QString host, int port, QString user, QString pwd, QString schema, int poolSize = 10, long expire = 30000);
    QString getHost()
    {
        return mHost;
    }
    int getPort ()
    {
        return mPort;
    }
    QString getUserName ()
    {
        return mUser;
    }
    QString getPassword ()
    {
        return mPwd;
    }
    QString getSchema ()
    {
        return mSchema;
    }
    void cleanUp ();
    void setCacheConnection(bool enable);
    QSqlDatabase getConnectionWithParam(QString host, int port, QString user, QString pass, QString db);
    void execQueryByOther(QString queryString);
private:
    static DbManager* instance;
    static bool instantiated;
    QString mHost;
    int mPort;
    QString mUser;
    QString mPwd;
    QString mSchema;
    bool isConnectionLost;
    DbManager();
    ConnectionPool* pool;
};

#endif // DBMANAGER_H
