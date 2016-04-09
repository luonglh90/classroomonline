#include "../../msg/cpp/ipcmessagetype.h"
#include "base/cmmdefs.h"
#include "utils/ipcmsghelper.h"
#include "utils/messagesender.h"
#include "utils/stringutils.h"
#include "manager/classinfomanager.h"
#include "manager/usermanager.h"
#include "classonlinechannel.h"

ClassOnlineChannel::ClassOnlineChannel()
{

}

void ClassOnlineChannel::processRequestClassAction(int uid, ClassOnlineAction *msg)
{
    switch (StringUtils::stringToInt(msg->actiontype())) {
    case (int)ClassOnlineAction_ActionType_OPEN_CLASS: {
        qDebug() << "Open class";
        userOpenClass(uid, msg);
        break;
    }
    case (int)ClassOnlineAction_ActionType_REQUEST_JOINT: {
        qDebug() << "Request joint class, form: " << QString::fromStdString(msg->sourceusername());
        userRequestJointClass(uid, msg);
        break;
    }
    case (int)ClassOnlineAction_ActionType_ACCEPT_JOINT: {
        qDebug() << "Accept joint class: " << QString::fromStdString(msg->targetusername());
        userAcceptJointClass(uid, msg);
        break;
    }
    case (int)ClassOnlineAction_ActionType_CLOSE_CLASS:
    {
        break;
    }
    default:
        break;
    }

}

void ClassOnlineChannel::userOpenClass(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        User teacher = UserManager::instance()->getUserOnlineByUid(uid);
        ClassroomInfo classInfo = ClassInfoManager::instance()->getClassById(StringUtils::stringToInt(msg->classid()));
        ClassroomOnline room(teacher, uid, classInfo);
        mHashClassroomOnline.insert(uid, room);

        // broadcast info
        UserManager::instance()->boardcastMsgToOnlineUsers(msg);
    }
}

void ClassOnlineChannel::userRequestJointClass(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId =StringUtils::stringToInt(msg->classid());
        if(mHashClassroomOnline.contains(classId)) {
            qDebug() << "forward request to teacher";
            int teacherUid = mHashClassroomOnline[classId].teacherUid();
            MessageSender::instance()->sendIpcMessage(teacherUid, msg);
        } else {
            qDebug() << "class not exist";
        }
    }
}

void ClassOnlineChannel::userAcceptJointClass(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId = StringUtils::stringToInt(msg->classid());
        if(mHashClassroomOnline.contains(classId)) {
            qDebug() << "forward accept to student";
            // get student
            QString studentname = QString::fromStdString(msg->targetusername());
            int studentUid = UserManager::instance()->getSocketuidOnlineByUsername(studentname);
            MessageSender::instance()->sendIpcMessage(studentUid, msg);
            // add student to class
            qDebug() << "Add student to class";
            User student = UserManager::instance()->getUserOnlineByUid(studentUid);
            mHashClassroomOnline[classId].addStudentToClass(studentUid, student);
        } else {
            qDebug() << "class not exist";
        }
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
            case CLASS_ONLINE_ACTION_MSG: {
                ClassOnlineAction *msg = (ClassOnlineAction*)IpcMsgHelper::getMessage(ipc);
                processRequestClassAction(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            default:
                break;
            }
        }
    }
}
