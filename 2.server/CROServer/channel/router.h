#ifndef ROUTER_H
#define ROUTER_H

#include <QMap>

#include "base/enums.h"
#include "channel/basechannel.h"

/**
 * @brief Route message to compatible channel
 */

class Router
{
public:
    Router(QMap<ChannelType, BaseChannel*> *channels);
    void routeMessage2Channel(IpcSocketEvelope* msg);

private:
    void init();
    void registerMessageWithChannel(int messageId, ChannelType channelType);
    void unregisterMessageWithChannel(int messageId, ChannelType channelType);

    QMap<ChannelType, BaseChannel*> *mMapChannelType2Channel;
    QMap<int, ChannelType> mMapMsgId2ChannelId;
};


#endif // ROUTER_H
