#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/ResponseLogin.pb.h"
#include "utils/socketutils.h"
#include "manager/usermanager.h"
#include "channel/userchannel.h"

UserChannel::UserChannel() : BaseChannel()
{

}

void UserChannel::processRequestLogin(QWebSocket *socket, RequestLogin *msg)
{
    QString userName = QString::fromStdString(msg->username());
    QString passwd = QString::fromStdString(msg->password());

    qDebug() << "login [" << userName << ", " << passwd << "]";

    bool isValid = UserManager::instance()->checkUserLogin(userName, passwd);

    ResponseLogin response;
    response.set_username(msg->username());
    if(isValid) {
        response.set_status(Enums_ResponseLoginEnums_SUCCESS);
    } else {
        response.set_status(Enums_ResponseLoginEnums_FAILD_WRONG_PASS);
    }

    SocketUtils::sendResponseLogin(socket, response);
}

void UserChannel::readMessage(IpcSocketEvelope *ipcevelope)
{
    if(ipcevelope) {
        IpcMessage *ipc = ipcevelope->ipcmsg;
        if(ipc) {
            switch (ipc->msgid()) {
            case REQUEST_LOGIN_MSG: {
                RequestLogin *msg = ipc->MutableExtension(RequestLogin::message);
                processRequestLogin(ipcevelope->socket, msg);
                break;
            }
            default:
                break;
            }
        }
    }
}

void UserChannel::onDisconnect(QWebSocket *socket)
{

}
