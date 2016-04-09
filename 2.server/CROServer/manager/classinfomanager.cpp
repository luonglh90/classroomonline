#include <QDebug>
#include "../../msg/cpp/ClassroomInfoOfCategory.pb.h"
#include "pgdao/classcategorydao.h"
#include "pgdao/classinfodao.h"
#include "utils/messagesender.h"
#include "usermanager.h"
#include "classinfomanager.h"

ClassInfoManager *ClassInfoManager::mInstance = nullptr;

ClassInfoManager::ClassInfoManager(QObject *parent) : QObject(parent)
{

}

ClassInfoManager *ClassInfoManager::instance()
{
    if(!mInstance) {
        mInstance = new ClassInfoManager();
    }

    return mInstance;
}

void ClassInfoManager::loadAllCategory()
{
    ClassCategoryDAO categoryDAO;
    QList<ClassCategory> list;
    bool isOk;
    QString errMsg;

    categoryDAO.getAllClassCategory(list, isOk, errMsg);
    if(isOk) {
        qDebug() << "get class category: " << list.size();
        foreach (const ClassCategory &category, list) {
            mHashClassCategory.insert(category.u_id(),
                                      category);
        }
    } else {
        qDebug() << "error: " << errMsg;
    }
}

void ClassInfoManager::loadAllClassroomInfo()
{
    ClassInfoDAO classDAO;
    QList<ClassroomCpp> list;
    bool isOk;
    QString errMsg;

    classDAO.getAllClassInfo(list, isOk, errMsg);
    if(isOk) {
        qDebug() << "get class: " << list.size();
        foreach (const ClassroomCpp &classInfo, list) {
            User user = UserManager::instance()->getUserByUserName(classInfo.teacher_userName);
            ClassroomInfo info = classInfo.info;
            User *teacher = info.mutable_teacher();
            (*teacher) = user;

            mHashClassroomInfo.insert(info.u_id(),
                                      info);
        }
    } else {
        qDebug() << "error: " << errMsg;
    }
}

void ClassInfoManager::sendClassroomOfCategory(int socketuid, int cate_id)
{
    QList<ClassroomInfo> listOfClasses;
    for(ClassroomInfo &info : mHashClassroomInfo.values()) {
        if(info.cate_id() == cate_id) {
            listOfClasses.append(info);
        }
    }
    ClassroomInfoOfCategory msg;
    msg.set_cate_id(cate_id);
    for(ClassroomInfo &info : listOfClasses) {
        ClassroomInfo *data = msg.add_listofclasses();
        (*data) = info;
    }

    MessageSender::instance()->sendIpcMessage(socketuid, &msg);
}
