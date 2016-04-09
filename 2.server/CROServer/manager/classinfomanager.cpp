#include <QDebug>
#include "pgdao/classcategorydao.h"
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
