#include <sstream>
#include "../../msg/cpp/ipcmessagetype.h"
#include "utils/socketutils.h"

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

void SocketUtils::sendResponseLogin(QWebSocket *socket, ResponseLogin msg)
{
    IpcMessage ipc;
    ipc.set_msgid((int)RESPONSE_LOGIN_MSG);
    ResponseLogin* ipcExt = ipc.MutableExtension(ResponseLogin::message);
    (*ipcExt) = msg;
    sendIpcMsg(socket, ipc);
}
