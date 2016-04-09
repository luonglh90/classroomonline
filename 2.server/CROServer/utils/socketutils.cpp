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
