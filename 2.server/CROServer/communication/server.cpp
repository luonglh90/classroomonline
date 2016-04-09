#include "utils/messagesender.h"
#include "channel/userchannel.h"
#include "channel/messagereceivechannel.h"
#include "manager/usermanager.h"
#include "manager/classinfomanager.h"
#include "server.h"

Server::Server()
{
}

void Server::startServer()
{
    openSocket();
    initChannels();
    UserManager::instance()->loadAllUser();
    ClassInfoManager::instance()->loadAllCategory();
    ClassInfoManager::instance()->loadAllClassroomInfo();

    connect(WebsocketCom::instance(), SIGNAL(disconnected(int)),
            this, SLOT(onDisconneced(int)));
    connect(WebsocketCom::instance(), SIGNAL(newMsgReceived(int,QByteArray)),
            mMsgReceivedChannel, SLOT(onReceivedNewByteArray(int,QByteArray)));
    connect(MessageSender::instance(), SIGNAL(requestSendToSocketClient(int,QByteArray)),
            WebsocketCom::instance(), SLOT(onRequestSendToSocketClient(int,QByteArray)));
}

void Server::onDisconneced(int socketuid)
{
    foreach (BaseChannel *channel, mChannels) {
        channel->onDisconnect(socketuid);
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
