#include "channel/router.h"
#include "messagereceivechannel.h"

MessageReceiveChannel::MessageReceiveChannel(QMap<ChannelType, BaseChannel *> *channels)
{
    mRouter = new Router(channels);
}

void MessageReceiveChannel::onReceivedNewByteArray(QWebSocket *socket, QByteArray bytearray)
{
    IpcMessage *ipc = IpcMessage::ParseFromArray(bytearray.constData(), bytearray.size());
    IpcSocketEvelope *ipcevelope = new IpcSocketEvelope(socket, ipc);

    mRouter->routeMessage2Channel(ipcevelope);
}
