#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/ClassOnlineAction.pb.h"
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
        ClassOnlineAction actionMsg;
        actionMsg.set_actiontype(ClassOnlineAction_ActionType_OPEN_CLASS);
        actionMsg.set_targetusername(msg->username());
        actionMsg.set_classid(msg->classid());
        UserManager::instance()->boardcastMsgToOnlineUsers(&actionMsg);
    }
}

void ClassOnlineChannel::onDisconnect(int socketuid)
{
    // check socketuid
    if(mHashClassroomOnline.contains(socketuid)) { // teacher disconnect
        mHashClassroomOnline[socketuid].processTeacherDisconnect();
    }
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
