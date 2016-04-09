#ifndef WEBSOCKETCOM_H
#define WEBSOCKETCOM_H

#include <QObject>

class WebsocketCom : public QObject
{
    Q_OBJECT
public:
    explicit WebsocketCom(QObject *parent = 0);

signals:

public slots:
};

#endif // WEBSOCKETCOM_H