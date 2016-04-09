#include <sstream>
#include "../../msg/cpp/ipcmessagetype.h"
#include "socketutils.h"

SocketUtils::SocketUtils()
{

}

int SocketUtils::getUnitIp(QWebSocket *socket)
{
    if(socket) {
        return socket->peerAddress().toIPv4Address();
    } else return -1;
}

void SocketUtils::sendIpcMsg(QWebSocket *socket, IpcMessage ipc)
{
    std::ostringstream out;
    ipc.SerializeToOstream(&out);
    QByteArray byteArray(out.str().c_str());
    socket->sendBinaryMessage(byteArray);
}

QByteArray SocketUtils::convertMsgToByteArray(IpcMessage* ipc)
{
    std::ostringstream out;
    ipc->SerializeToOstream(&out);
    return QByteArray(out.str().c_str());
}
