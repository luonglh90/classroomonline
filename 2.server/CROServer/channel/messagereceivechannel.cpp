#include "channel/router.h"
#include "messagereceivechannel.h"

MessageReceiveChannel::MessageReceiveChannel(QMap<ChannelType, BaseChannel *> *channels)
{
    mRouter = new Router(channels);
}

void MessageReceiveChannel::onReceivedNewByteArray(int sockuid, QByteArray bytearray)
{
    IpcMessage *ipc = new IpcMessage();
    ipc->ParseFromArray(bytearray.constData(), bytearray.size());
    IpcSocketEvelope *ipcevelope = new IpcSocketEvelope(sockuid, ipc);

    mRouter->routeMessage2Channel(ipcevelope);
}
