#ifndef MESSAGESENDER_H
#define MESSAGESENDER_H

#include <QObject>
#include "../../msg/cpp/IpcMessage.pb.h"

using namespace METRO::CRO::MESSAGES;

class MessageSender : public QObject
{
    Q_OBJECT
public:
    static MessageSender *instance();
    void sendIpcMessage(int socketuid, google::protobuf::Message* msg);

signals:
    void requestSendToSocketClient(int socketuid, QByteArray data);
public slots:

private:
    explicit MessageSender(QObject *parent = 0);
    static MessageSender* mInstance;
};

#endif // MESSAGESENDER_H
