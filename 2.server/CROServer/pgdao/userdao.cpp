#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include "dbmanager.h"
#include "userdao.h"

UserDAO::UserDAO()
{
    GETALL = "SELECT * FROM \"user\".\"user\";";
}

void UserDAO::getAllUser(QList<User> &listUser, bool &isOk, QString &errMsg)
{
    QSqlDatabase con = DbManager::getInstance()->acquire();
    if (con.isOpen()) {
        QSqlQuery query(con);
        bool result = query.exec(GETALL);
        if(result) {
            qDebug() << "ok";
            isOk = true;
            while(query.next()) {
                User user;
                user.set_username(query.value("username").toString().toStdString());
                user.set_email(query.value("emailaddr").toString().toStdString());
                user.set_fullname(query.value("username").toString().toStdString());
                user.set_yearofborn(query.value("bornofyear").toInt());
                user.set_password(query.value("passwd").toString().toStdString());
                user.set_imgurl(query.value("imgurl").toString().toStdString());

                listUser.append(user);
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
