#ifndef SOCKETUTILS_H
#define SOCKETUTILS_H

#include <QtWebSockets/QWebSocketServer>
#include <QtWebSockets/QWebSocket>

#include "../../msg/cpp/ResponseLogin.pb.h"

using namespace METRO::CRO::MESSAGES;

class SocketUtils
{
public:
    SocketUtils();
    static int getUnitIp(QWebSocket* socket);
    static void sendIpcMsg(QWebSocket* socket, IpcMessage ipc);
    static void sendResponseLogin(QWebSocket *socket, ResponseLogin msg);
};

#endif // SOCKETUTILS_H
