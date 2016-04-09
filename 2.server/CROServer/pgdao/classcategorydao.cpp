#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include "dbmanager.h"
#include "classcategorydao.h"

ClassCategoryDAO::ClassCategoryDAO()
{
    GETALL = "SELECT * FROM class.classcategory;";
}

void ClassCategoryDAO::getAllClassCategory(QList<ClassCategory> &listCategory, bool &isOk, QString &errMsg)
{
    QSqlDatabase con = DbManager::getInstance()->acquire();
    if (con.isOpen()) {
        QSqlQuery query(con);
        bool result = query.exec(GETALL);
        if(result) {
            qDebug() << "ok";
            isOk = true;
            while(query.next()) {
                ClassCategory category;

                category.set_u_id(std::to_string(query.value("id").toInt()));
                category.set_name(query.value("name").toString().toStdString());
                category.set_description(query.value("description").toString().toStdString());
                category.set_imgurl(query.value("imgurl").toString().toStdString());

                listCategory.append(category);
            }
        } else {
            isOk = false;
            errMsg.append("error: ").append(query.lastError().text());
        }
        DbManager::getInstance()->release(con);
    } else {
        isOk = false;
        errMsg = "open connection error";
    }
}
