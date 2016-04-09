#include <QDebug>
#include "pgdao/userdao.h"
#include "manager/usermanager.h"

UserManager* UserManager::mInstance = nullptr;

UserManager *UserManager::instance()
{
    if(!mInstance) {
        mInstance = new UserManager();
    }

    return mInstance;
}

void UserManager::loadAllUser()
{
    UserDAO userDao;
    QList<User> list;
    bool isOk;
    QString errMsg;

    userDao.getAllUser(list, isOk, errMsg);
    if(isOk) {
       qDebug() << "get user: " << list.size();
       foreach (const User &user, list) {
           mMapAllUser.insert(QString::fromStdString(user.username()),
                              user);
       }
    } else {
        qDebug() << "error: " << errMsg;
    }
}

bool UserManager::checkUserLogin(QString username, QString password)
{
    if(mMapAllUser.contains(username)) {
        return mMapAllUser[username].username() == password.toStdString();
    } else {
        return false;
    }
}

void UserManager::initInfoToUser(int socketUid, QString userName)
{
    if(!mHashOnlineUser.contains(socketUid)) {
        mHashOnlineUser.insert(socketUid, userName);
    }
}

void UserManager::userLogOff(int socketUid)
{
    if(mHashOnlineUser.contains(socketUid)) {
        mHashOnlineUser.remove(socketUid);
    }
}

UserManager::UserManager()
{

}
