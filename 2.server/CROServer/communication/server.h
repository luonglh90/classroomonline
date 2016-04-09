#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include "base/enums.h"
#include "channel/basechannel.h"

class UserChannel;

class Server : public QObject
{
public:
    Server();
    void initChannels();

private:
    QMap<ChannelType, BaseChannel*> mChannels;
    UserChannel *mUserChannel;
};

#endif // SERVER_H
