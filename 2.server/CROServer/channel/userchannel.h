#ifndef USERCHANNEL_H
#define USERCHANNEL_H

#include <QObject>
#include "channel/basechannel.h"

class UserChannel : public BaseChannel
{
    Q_OBJECT
public:
    explicit UserChannel();

signals:

public slots:

protected:
    // QThread interface
    void run();
    // BaseChannel interface
    void readMessage(IpcSocketEvelope *ipcevelope);
    void onDisconnect(QWebSocket *socket);
};

#endif // USERCHANNEL_H
