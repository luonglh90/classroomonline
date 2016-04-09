#ifndef SOCKETUTILS_H
#define SOCKETUTILS_H

#include <QtWebSockets/QWebSocketServer>
#include <QtWebSockets/QWebSocket>

#include "../../msg/cpp/IpcMessage.pb.h"
#include "../../msg/cpp/ResponseLogin.pb.h"
#include "../../msg/cpp/RequestLogin.pb.h"

using namespace METRO::CRO::MESSAGES;

class SocketUtils
{
public:
    SocketUtils();
    static int getUnitIp(QWebSocket* socket);
    static void sendIpcMsg(QWebSocket* socket, IpcMessage ipc);

    static QByteArray convertMsgToByteArray(IpcMessage *ipc);
};

#endif // SOCKETUTILS_H
