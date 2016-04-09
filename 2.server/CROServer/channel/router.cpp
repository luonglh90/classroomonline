#include "router.h"

#include "base/cmmdefs.h"
#include "base/enums.h"
#include "../../msg/cpp/ipcmessagetype.h"

using namespace METRO::CRO::MESSAGES;

Router::Router(QMap<ChannelType, BaseChannel*> *channels)
{
    mMapChannelType2Channel = channels;
    init();
}

void Router::routeMessage2Channel(IpcSocketEvelope *msg)
{
    if (mMapMsgId2ChannelId.contains(msg->ipcmsg->msgid()))
    {
        BaseChannel* channel = mMapChannelType2Channel->value(mMapMsgId2ChannelId[msg->ipcmsg->msgid()]);
        channel->enqueueMessage(msg);
    }
    else
    {
        _DELETE_PTR(msg->ipcmsg);
        _DELETE_PTR(msg);
    }
}

void Router::registerMessageWithChannel(int messageId, ChannelType channelType)
{
    mMapMsgId2ChannelId.insert(messageId, channelType);
}

void Router::unregisterMessageWithChannel(int messageId, ChannelType channelType)
{
    Q_UNUSED (channelType)
    mMapMsgId2ChannelId.remove(messageId);
}

void Router::init()
{
    registerMessageWithChannel(REQUEST_LOGIN_MSG, ChannelType::USER_CHANNEL);
}


