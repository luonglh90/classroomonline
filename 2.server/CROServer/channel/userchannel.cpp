#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/LoginStatus.pb.h"
#include "../../msg/cpp/RequestViewCategoryDetail.pb.h"
#include "utils/ipcmsghelper.h"
#include "base/cmmdefs.h"
#include "utils/socketutils.h"
#include "utils/messagesender.h"
#include "manager/usermanager.h"
#include "channel/userchannel.h"

UserChannel::UserChannel() : BaseChannel()
{

}

void UserChannel::processRequestLogin(int uid, RequestLogin *msg)
{
    qDebug() << QString::fromStdString(msg->SerializeAsString());

    QString userName = QString::fromStdString(msg->username());
    QString passwd = QString::fromStdString(msg->password());

    qDebug() << "login [" << userName << ", " << passwd << "]";

    bool isValid = UserManager::instance()->checkUserLogin(userName, passwd);


    ResponseLogin stt;
    stt.set_username(msg->username());
    if(isValid) {
        stt.set_status("0");
    } else {
        stt.set_status("1");
    }

//    RequestViewCategoryDetail tmp;
//    MessageSender::instance()->sendIpcMessage(uid, &stt);
//    tmp.set_cate_id(1);
//

    UserManager::instance()->initUserInfo(uid, userName);
}

void UserChannel::readMessage(IpcSocketEvelope *ipcevelope)
{
    if(ipcevelope) {
        IpcMessage *ipc = ipcevelope->ipcmsg;
        if(ipc) {
            switch (ipc->id()) {
            case REQUEST_LOGIN_MSG: {
                RequestLogin *msg = (RequestLogin*)IpcMsgHelper::getMessage(ipc);
                processRequestLogin(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            default:
                break;
            }
        }
    }
}

void UserChannel::onDisconnect(int socketuid)
{
    UserManager::instance()->userLogOff(socketuid);
}
