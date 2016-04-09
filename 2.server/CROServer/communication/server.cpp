#include "channel/userchannel.h"
#include "channel/messagereceivechannel.h"
#include "manager/usermanager.h"
#include "server.h"

Server::Server()
{
}

void Server::startServer()
{
    openSocket();
    initChannels();
    UserManager::instance()->loadAllUser();

    connect(WebsocketCom::instance(), SIGNAL(disconnected(QWebSocket*)),
            this, SLOT(onDisconneced(QWebSocket*)));
    connect(WebsocketCom::instance(), SIGNAL(newMsgReceived(QWebSocket*,QByteArray)),
            mMsgReceivedChannel, SLOT(onReceivedNewByteArray(QWebSocket*,QByteArray)));
}

void Server::onDisconneced(QWebSocket *socket)
{
    foreach (BaseChannel *channel, mChannels) {
        channel->onDisconnect(socket);
    }
}

void Server::initChannels()
{
    mUserChannel = new UserChannel();
    mChannels.insert(ChannelType::USER_CHANNEL, mUserChannel);

    foreach (BaseChannel *channel, mChannels.values()) {
        channel->start();
    }

    mMsgReceivedChannel = new MessageReceiveChannel(&mChannels);
}

void Server::openSocket()
{
    int port = 1234;
    WebsocketCom::instance()->initWebsocket(1234);
    qDebug() << "CRO websocket listens at " << port;
    if(WebsocketCom::instance()->startWebsocketServer()) {
        qDebug() << "CRO websocket listen ok";
    } else {
        qDebug() << "CRO websocket listen faild";
    }
}
