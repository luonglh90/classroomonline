#include <QCoreApplication>
#include <QDebug>

#include "communication/websocketcom.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Server starting...";
    int port = 1234;
    WebsocketCom::instance()->initWebsocket(1234);
    qDebug() << "CRO websocket listens at " << port;
    if(WebsocketCom::instance()->startWebsocketServer()) {
        qDebug() << "CRO websocket listen ok";
    } else {
        qDebug() << "CRO websocket listen faild";
    }

    return a.exec();
}
