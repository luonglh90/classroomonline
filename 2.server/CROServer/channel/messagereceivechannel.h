#ifndef MESSAGERECEIVECHANNEL_H
#define MESSAGERECEIVECHANNEL_H

#include <QObject>
#include "base/enums.h"
#include "channel/basechannel.h"

class Router;

class MessageReceiveChannel : public QObject
{
public:
    MessageReceiveChannel(QMap<ChannelType, BaseChannel*>* channels);

public slots:
    void onReceivedNewByteArray(QWebSocket *socket, QByteArray);
protected:
    Router *mRouter;
};

#endif // MESSAGERECEIVECHANNEL_H
