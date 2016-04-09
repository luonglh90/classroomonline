/****************************************************************************
**
** Copyright (C) 2014 Kurt Pattyn <pattyn.kurt@gmail.com>.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtWebSockets module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "echoclient.h"
#include "../../2.server/CROServer/utils/socketutils.h"
#include "../../2.server/CROServer/utils/ipcmsghelper.h"
#include "../../msg/cpp/RequestLogin.pb.h"
#include <QtCore/QDebug>

QT_USE_NAMESPACE
using namespace METRO::CRO::MESSAGES;

EchoClient::EchoClient(const QUrl &url, bool debug, QObject *parent) :
    QObject(parent),
    m_url(url),
    m_debug(debug)
{
    if (m_debug)
        qDebug() << "WebSocket server:" << url;
    connect(&m_webSocket, &QWebSocket::connected, this, &EchoClient::onConnected);
    connect(&m_webSocket, &QWebSocket::disconnected, this, &EchoClient::closed);
    m_webSocket.open(QUrl(url));
}

void EchoClient::onConnected()
{
    if (m_debug)
        qDebug() << "WebSocket connected";
    connect(&m_webSocket, &QWebSocket::binaryMessageReceived,
            this, &EchoClient::onBinaryMessageReceived);


    RequestLogin requestLogin;
    requestLogin.set_username("teacher1");
    requestLogin.set_password("123456");

    IpcMessage *ipc = IpcMsgHelper::createIpcMessage(&requestLogin);

    SocketUtils::sendIpcMsg(&m_webSocket, *ipc);

    delete ipc;
    ipc = nullptr;

    //    m_webSocket.sendTextMessage(QStringLiteral("Hello, world!"));
}

void EchoClient::onTextMessageReceived(QString message)
{
    if (m_debug)
        qDebug() << "Message received:" << message;
    m_webSocket.close();
}

void EchoClient::onBinaryMessageReceived(QByteArray msg)
{
    IpcMessage ipc;
    ipc.ParseFromArray(msg.constData(), msg.size());

    switch (ipc.msgid()) {
    case 104:
    {
        ResponseLogin *res = (ResponseLogin*)IpcMsgHelper::getMessage(&ipc);
        if(res) {
            qDebug() << QString::fromStdString(res->username());
            qDebug() << QString::fromStdString(res->SerializeAsString());
        }
        break;
    }
    default:
        break;
    }

    qDebug() << QString::fromStdString(msg.toHex().toStdString());

}
