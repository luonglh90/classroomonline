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
    if (mMapMsgId2ChannelId.contains(msg->ipcmsg->id()))
    {
        BaseChannel* channel = mMapChannelType2Channel->value(mMapMsgId2ChannelId[msg->ipcmsg->id()]);
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
    registerMessageWithChannel(REQUEST_VIEW_CATEGORY_DETAIL_MSG, ChannelType::CLASS_CHANNEL);
    registerMessageWithChannel(CLASS_ONLINE_ACTION_MSG, ChannelType::CLASS_ONLINE_CHANNEL);
    registerMessageWithChannel(BOARD_CHANGE_SETTING_MSG, ChannelType::CLASS_ONLINE_CHANNEL);
    registerMessageWithChannel(BOARD_DRAW_LINE_MSG, ChannelType::CLASS_ONLINE_CHANNEL);
    registerMessageWithChannel(BOARD_ERASE_MSG, ChannelType::CLASS_ONLINE_CHANNEL);
}


