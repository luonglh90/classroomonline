#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include "dbmanager.h"
#include "classinfodao.h"

ClassInfoDAO::ClassInfoDAO()
{
    GETALL = "SELECT * FROM class.classinfo;";
}

void ClassInfoDAO::getAllClassInfo(QList<ClassroomCpp> &listClass, bool &isOk, QString &errMsg)
{
    QSqlDatabase con = DbManager::getInstance()->acquire();
    if (con.isOpen()) {
        QSqlQuery query(con);
        bool result = query.exec(GETALL);
        if(result) {
            qDebug() << "ok";
            isOk = true;
            while(query.next()) {
                ClassroomCpp classroom;
                ClassroomInfo info;

                info.set_u_id(std::to_string(query.value("id").toInt()));
                info.set_cate_id(std::to_string(query.value("cate_id").toInt()));
                info.set_name(query.value("name").toString().toStdString());
                info.set_description(query.value("description").toString().toStdString());
                info.set_imgurl(query.value("imgurl").toString().toStdString());
                info.set_time_open(std::to_string(query.value("time_open").toInt()));
                info.set_time_close(std::to_string(query.value("time_close").toInt()));

                classroom.info = info;
                classroom.teacher_userName = query.value("teacher_username").toString();

                listClass.append(classroom);
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
