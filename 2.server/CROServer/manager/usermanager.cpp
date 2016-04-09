#include <QDebug>
#include "../../msg/cpp/UserInit.pb.h"
#include "base/cmmdefs.h"
#include "pgdao/userdao.h"
#include "utils/socketutils.h"
#include "utils/messagesender.h"
#include "manager/classinfomanager.h"
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

void UserManager::userLogOff(int socketuid)
{
    if(mHashUserOnline.contains(socketuid)) {
        mHashUserOnline.remove(socketuid);
    }
}

void UserManager::initUserInfo(int sockuid, QString userName)
{
    if(!mHashUserOnline.contains(sockuid)) {
        mHashUserOnline.insert(sockuid, userName);
    }

    sendInitUser(sockuid, userName);
}

UserManager::UserManager()
{

}

void UserManager::sendInitUser(int sockuid, QString userName)
{
    if(mMapAllUser.contains(userName)) {
        UserInit msg;
        // user info
        User *user = msg.mutable_userinfo();
        (*user) = mMapAllUser.value(userName);
        // category
        QList<ClassCategory> listCategories = ClassInfoManager::instance()->getListCategories();
        for(const ClassCategory &category : listCategories) {
            ClassCategory *cate = msg.add_categories();
            (*cate) = category;
        }

        MessageSender::instance()->sendIpcMessage(sockuid, &msg);
    }
}
