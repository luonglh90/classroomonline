#ifndef USERCHANNEL_H
#define USERCHANNEL_H

#include <QObject>
#include "../../msg/cpp/RequestLogin.pb.h"
#include "channel/basechannel.h"

using namespace METRO::CRO::MESSAGES;

class UserChannel : public BaseChannel
{
    Q_OBJECT
public:
    explicit UserChannel();

    void processRequestLogin(int uid, METRO::CRO::MESSAGES::RequestLogin *msg);
signals:

public slots:

protected:
    // BaseChannel interface
    void readMessage(IpcSocketEvelope *ipcevelope);
    void onDisconnect(QWebSocket *socket);
};

#endif // USERCHANNEL_H
