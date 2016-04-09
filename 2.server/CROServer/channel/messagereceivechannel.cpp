#include "channel/router.h"
#include "messagereceivechannel.h"

MessageReceiveChannel::MessageReceiveChannel(QMap<ChannelType, BaseChannel *> *channels)
{
    mRouter = new Router(channels);
}
