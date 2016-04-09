#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <QObject>
#include <QMap>
#include <QHash>
#include "../../msg/cpp/User.pb.h"
#include "../../msg/cpp/ClassOnlineAction.pb.h"
#include "../../msg/cpp/Enums.pb.h"

using namespace METRO::CRO::MESSAGES;

class UserManager : public QObject
{
    Q_OBJECT
public:
    static UserManager *instance();
    void loadAllUser();
    User getUserByUserName(QString userName);
    bool checkUserOnline(int uid);
    User getUserOnlineByUid(int uid);
    int getSocketuidOnlineByUsername(QString userName);

    bool checkUserLogin(QString username, QString password);
    void userLogOff(int socketuid);
    void initUserInfo(int sockuid, QString userName);

    void boardcastMsgActionToOnlineUsers(ClassOnlineAction *msg);
    void boardcastMsgActionToOnlineUsersExcept(ClassOnlineAction *msg, int exceptUid);
signals:
    void requestSendToSocketClient(int socketuid, QByteArray data);
private:
    UserManager();
    void sendInitUser(int sockuid, QString userName);
    static UserManager *mInstance;

    QHash<int, QString> mHashUserOnline;
    QMap<QString, User> mMapAllUser;
};

#endif // USERMANAGER_H
