#include <QCoreApplication>
#include <QDebug>

#include "pgdao/dbmanager.h"
#include "pgdao/userdao.h"
#include "communication/server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DbManager::getInstance()->setParameters("127.0.0.1",
                                            5432,
                                            "postgres",
                                            "123456",
                                            "cro");

//    UserDAO userDao;
//    QList<User> list;
//    bool isOk;
//    QString errMsg;

//    userDao.getAllUser(list, isOk, errMsg);
//    if(isOk) {
//       qDebug() << "get user: " << list.size();
//       qDebug() << QString::fromStdString(list.at(0).username());
//    } else {
//        qDebug() << "error: " << errMsg;
//    }

    qDebug() << "Server starting...";
    Server server;
    server.startServer();

    return a.exec();
}
