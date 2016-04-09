#ifndef MESSAGERECEIVECHANNEL_H
#define MESSAGERECEIVECHANNEL_H

#include <QObject>
#include "base/enums.h"
#include "channel/basechannel.h"

class Router;

class MessageReceiveChannel : public QObject
{
    Q_OBJECT
public:
    MessageReceiveChannel(QMap<ChannelType, BaseChannel*>* channels);

public slots:
    void onReceivedNewByteArray(int sockuid, QByteArray bytearray);
protected:
    Router *mRouter;
};

#endif // MESSAGERECEIVECHANNEL_H
