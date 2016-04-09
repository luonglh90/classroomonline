#include "base/cmmdefs.h"
#include "utils/socketutils.h"
#include "utils/ipcmsghelper.h"
#include "messagesender.h"

MessageSender *MessageSender::mInstance = nullptr;

MessageSender *MessageSender::instance()
{
    if(!mInstance) {
        mInstance = new MessageSender();
    }

    return mInstance;
}

void MessageSender::sendIpcMessage(int socketuid, google::protobuf::Message *msg)
{
    // send msg;
    IpcMessage *ipc = IpcMsgHelper::createIpcMessage(msg);
    QByteArray array = SocketUtils::convertMsgToByteArray(ipc);
    emit requestSendToSocketClient(socketuid, QByteArray(array));
    _DELETE_PTR(ipc);
}

MessageSender::MessageSender(QObject *parent) : QObject(parent)
{

}
