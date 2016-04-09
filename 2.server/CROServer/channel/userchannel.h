#ifndef USERCHANNEL_H
#define USERCHANNEL_H

#include <QObject>
#include "channel/basechannel.h"

class UserChannel : public BaseChannel
{
    Q_OBJECT
public:
    explicit UserChannel(QObject *parent = 0);

signals:

public slots:

protected:
    // QThread interface
    void run();
    // BaseChannel interface
    void readMessage(IpcSocketEvelope *ipcevelope);
};

#endif // USERCHANNEL_H
