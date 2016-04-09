#ifndef WEBSOCKETCOM_H
#define WEBSOCKETCOM_H

#include <QObject>
#include <QtWebSockets/QWebSocketServer>
#include <QtWebSockets/QWebSocket>
#include <QHash>

class WebsocketCom : public QObject
{
    Q_OBJECT
public:
    static WebsocketCom *instance();
    void initWebsocket(int port) {
        this->mPort = port;
    }
    bool startWebsocketServer();

signals:
    void newMsgReceived(int uid, QByteArray byteArray);
    void disconnected(int socketuid);
public slots:
    void onRequestSendToSocketClient(int uid, QByteArray data);
private slots:

    void onBinaryMessageReceived(const QByteArray &message);
    void onNewConnection();
    void onDisconnected();
private:
    explicit WebsocketCom(QObject *parent = 0);
    static WebsocketCom *mInstance;

    // websocket
    QWebSocketServer *mWebSocketServer;
    int mPort;
    QHash<int, QWebSocket*> mHashClients;
};

#endif // WEBSOCKETCOM_H
