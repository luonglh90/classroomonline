#include <QDebug>
#include "pgdao/classcategorydao.h"
#include "pgdao/classinfodao.h"
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
