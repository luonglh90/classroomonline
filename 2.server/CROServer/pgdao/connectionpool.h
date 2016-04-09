#ifndef CONNECTIONPOOL_H
#define CONNECTIONPOOL_H

#include <QHash>
#include <QMutex>
#include <QString>
class QSqlDatabase;

class ConnectionPool
{
private:
    QHash<QString, long> mLocked, mUnlocked;
    QMutex mLocker;
    QString mHost ;
    int mPort ;
    QString mUser;
    QString mPwd;
    QString mSchema;
    int mPoolSize ;
    long mExpirationTime;
    bool mCacheConnection;
    void checkConnection();
protected:
    QSqlDatabase create();
    bool validate (QSqlDatabase db);
    void expire (QSqlDatabase db);
    QString mConnectionName;

public:
    ConnectionPool(QString host, int port, QString user, QString pwd, QString schema, int size, long expirationTime);
    ~ConnectionPool();
    QSqlDatabase acquire ();
    QString release(QSqlDatabase db);
    void setCache(bool enable);
    bool isConnectedToNetwork();
    void clearPool();
};

#endif // CONNECTIONPOOL_H
