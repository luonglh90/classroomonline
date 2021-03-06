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

User UserManager::getUserByUserName(QString userName)
{
    if(mMapAllUser.contains(userName)) {
        return mMapAllUser.value(userName);
    } else {
        return User();
    }
}

bool UserManager::checkUserOnline(int uid) {
    return mHashUserOnline.contains(uid);
}

User UserManager::getUserOnlineByUid(int uid) {
    User user;
    if(mHashUserOnline.contains(uid)) {
        QString username = mHashUserOnline.value(uid);
        if(mMapAllUser.contains(username)) {
            return mMapAllUser.value(username);
        }
    }

    return user;
}

int UserManager::getSocketuidOnlineByUsername(QString userName)
{
    int uid = -1;
    for(QString value : mHashUserOnline.values()) {
        if(value.compare(userName) == 0) {
            uid = mHashUserOnline.key(value);
            break;
        }
    }
    return uid;
}

bool UserManager::checkUserLogin(QString username, QString password)
{
    if(mMapAllUser.contains(username)) {
        QString pass = QString::fromStdString(mMapAllUser[username].password());
        return pass.compare(password) == 0;
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

void UserManager::boardcastMsgActionToOnlineUsers(ClassOnlineAction *msg)
{
    for(int uid : mHashUserOnline.keys()) {
        msg->set_targetusername(mHashUserOnline[uid].toStdString());
        MessageSender::instance()->sendIpcMessage(uid, msg);
    }
}

void UserManager::boardcastMsgActionToOnlineUsersExcept(ClassOnlineAction *msg, int exceptUid)
{
    for(int uid : mHashUserOnline.keys()) {
        if(uid != exceptUid) {
            msg->set_targetusername(mHashUserOnline[uid].toStdString());
            MessageSender::instance()->sendIpcMessage(uid, msg);
        }
    }
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
        // owner class
//        QList<ClassroomInfo> listOwnerClasses = ClassInfoManager::instance()->getOwnerClasses(userName);
//        for(const ClassroomInfo &classInfo : listOwnerClasses) {
//            ClassroomInfo *info = msg.add_ownerclass();
//            (*info) = classInfo;
//        }
//        qDebug() << "owner class size: " << msg.ownerclass_size();

        MessageSender::instance()->sendIpcMessage(sockuid, &msg);
    }
}
