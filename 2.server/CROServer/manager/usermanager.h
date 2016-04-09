#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <QMap>
#include "../../msg/cpp/User.pb.h"
#include "../../msg/cpp/Enums.pb.h"

using namespace METRO::CRO::MESSAGES;

class UserManager
{
public:
    static UserManager *instance();
    void loadAllUser();

    bool checkUserLogin(QString username, QString password);

private:
    UserManager();
    static UserManager *mInstance;

    QMap<QString, User> mMapAllUser;
};

#endif // USERMANAGER_H
