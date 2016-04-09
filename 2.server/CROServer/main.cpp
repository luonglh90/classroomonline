#include <QCoreApplication>
#include <QDebug>

#include "communication/server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Server starting...";
    Server server;
    server.startServer();

    return a.exec();
}
