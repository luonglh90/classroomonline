#ifndef SOCKETUTILS_H
#define SOCKETUTILS_H

#include <QtWebSockets/QWebSocketServer>
#include <QtWebSockets/QWebSocket>

class SocketUtils
{
public:
    SocketUtils();
    static int getUnitIp(QWebSocket* socket);
};

#endif // SOCKETUTILS_H
