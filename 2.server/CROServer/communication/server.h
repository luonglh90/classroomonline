#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include "base/enums.h"
#include "channel/basechannel.h"
#include "websocketcom.h"

class UserChannel;
class MessageReceiveChannel;

class Server : public QObject
{
    Q_OBJECT
public:
    Server();
    void startServer();

private slots:
    void onDisconneced(int socketuid);

private:
    void initChannels();
    void openSocket();

    QMap<ChannelType, BaseChannel*> mChannels;
    UserChannel *mUserChannel;
    MessageReceiveChannel *mMsgReceivedChannel;
};

#endif // SERVER_H
