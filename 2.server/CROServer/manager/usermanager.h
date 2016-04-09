#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <QObject>
#include <QMap>
#include <QHash>
#include "../../msg/cpp/User.pb.h"
#include "../../msg/cpp/Enums.pb.h"

using namespace METRO::CRO::MESSAGES;

class UserManager : public QObject
{
    Q_OBJECT
public:
    static UserManager *instance();
    void loadAllUser();

    bool checkUserLogin(QString username, QString password);
    void initInfoToUser(int socketUid, QString userName);
    void userLogOff(int socketUid);

signals:
    void requestSendToSocketClient(int socketuid, QByteArray data);
private:
    UserManager();
    static UserManager *mInstance;

    QHash<int, QString> mHashOnlineUser;
    QMap<QString, User> mMapAllUser;
};

#endif // USERMANAGER_H
