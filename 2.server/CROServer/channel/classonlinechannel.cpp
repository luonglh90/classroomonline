#include "../../msg/cpp/ipcmessagetype.h"
#include "base/cmmdefs.h"
#include "utils/ipcmsghelper.h"
#include "manager/usermanager.h"
#include "classonlinechannel.h"

ClassOnlineChannel::ClassOnlineChannel()
{

}

void ClassOnlineChannel::processRequestOpenClass(int uid, TeacherOpenClass *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        User teacher = UserManager::instance()->getUserOnlineByUid(uid);

        ClassroomOnline room(teacher, uid);
        mHashClassroomOnline.insert(uid, room);

        // broadcast info
        UserManager::instance()->boardcastMsgToOnlineUsers(msg);
    }
}

void ClassOnlineChannel::onDisconnect(int socketuid)
{
    // check socketuid

}

void ClassOnlineChannel::readMessage(IpcSocketEvelope *ipcevelope)
{
    if(ipcevelope) {
        IpcMessage *ipc = ipcevelope->ipcmsg;
        if(ipc) {
            switch (ipc->msgid()) {
            case TEACHER_OPEN_CLASS_MSG: {
                TeacherOpenClass *msg = (TeacherOpenClass*)IpcMsgHelper::getMessage(ipc);
                processRequestOpenClass(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            default:
                break;
            }
        }
    }
}
