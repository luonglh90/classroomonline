#include "channel/userchannel.h"
#include "server.h"

Server::Server()
{

}

void Server::initChannels()
{
    mUserChannel = new UserChannel();
    mChannels.insert(ChannelType::USER_CHANNEL, mUserChannel);

    foreach (BaseChannel *channel, mChannels.values()) {
        channel->start();
    }


}
