#ifndef STRUCTS_H
#define STRUCTS_H

#include <QtWebSockets/QWebSocketServer>
#include <QtWebSockets/QWebSocket>

struct WrapWebsocket {
    WrapWebsocket () {
        this->uid = -1;
        this->mSocket = nullptr;
    }

    WrapWebsocket (int id, QWebSocket *socket) {
        this->uid = id;
        this->mSocket = socket;
    }

    int uid;
    QWebSocket *mSocket;
};

#endif // STRUCTS_H
