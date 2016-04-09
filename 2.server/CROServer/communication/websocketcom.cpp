#include <QDebug>
#include "utils/socketutils.h"
#include "communication/websocketcom.h"

WebsocketCom *WebsocketCom::mInstance = nullptr;

WebsocketCom *WebsocketCom::instance()
{
    if(!mInstance) {
        mInstance = new WebsocketCom(0);
    }

    return mInstance;
}

bool WebsocketCom::startWebsocketServer()
{
    mWebSocketServer = new QWebSocketServer(QStringLiteral("CRO Server"),
                                              QWebSocketServer::NonSecureMode,
                                              this);
    if (mWebSocketServer->listen(QHostAddress::Any, mPort)){
        qDebug() << "Chat Server listening on port" << mPort;
        connect(mWebSocketServer, &QWebSocketServer::newConnection,
                this, &WebsocketCom::onNewConnection);

        return true;
    } else {
        return false;
    }
}

// private slots
void WebsocketCom::onNewConnection()
{
    qDebug() << "New client connect";
    QWebSocket *clientSocket = mWebSocketServer->nextPendingConnection();
    if(clientSocket) {
        qDebug() << "ip: " << clientSocket->peerAddress().toString();
        connect(clientSocket, &QWebSocket::disconnected, this, &WebsocketCom::onDisconnected);
        mHashClients.insert(SocketUtils::getUnitIp(clientSocket), clientSocket);
    } else {
        qDebug() << "but it not valid";
    }
}

void WebsocketCom::onDisconnected()
{
    qDebug() << "Client disconnected";
    QWebSocket *clientSocket = qobject_cast<QWebSocket *>(sender());
    if (clientSocket)
    {
        qDebug() << "ip: " << clientSocket->peerAddress().toString();
        mHashClients.remove(SocketUtils::getUnitIp(clientSocket));
        clientSocket->deleteLater();
    }
}

WebsocketCom::WebsocketCom(QObject *parent) : QObject(parent),
    mWebSocketServer(nullptr)
{

}
