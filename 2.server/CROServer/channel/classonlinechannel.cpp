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
    case (int)ClassOnlineAction_ActionType_REQUEST_DRAW_BOARD: {
        qDebug() << "Request draw board, form: " << QString::fromStdString(msg->sourceusername());
        userRequestDrawBoard(uid, msg);
        break;
    }
    case (int)ClassOnlineAction_ActionType_ACCEPT_DRAW_BOARD: {
        qDebug() << "Accept draw board: " << QString::fromStdString(msg->targetusername());
        userAcceptDrawBoard(uid, msg);
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

void ClassOnlineChannel::processRequestDrawBoard(int uid, BoardDrawLine *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId = msg->classid();
        if(mHashClassroomOnline.contains(classId)) {
            qDebug() << "boardcast to other";
            mHashClassroomOnline[classId].processDrawMsg(uid, msg);
        } else {
            qDebug() << "class not exist";
        }
    }
}

void ClassOnlineChannel::processRequestEraseLine(int uid, BoardErase *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId = msg->classid();
        if(mHashClassroomOnline.contains(classId)) {
            qDebug() << "boardcast to other";
            mHashClassroomOnline[classId].processEraseMsg(uid, msg);
        } else {
            qDebug() << "class not exist";
        }
    }
}

void ClassOnlineChannel::userOpenClass(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        User teacher = UserManager::instance()->getUserOnlineByUid(uid);
        ClassroomInfo classInfo = ClassInfoManager::instance()->getClassById(StringUtils::stringToInt(msg->classid()));
        ClassroomOnline room(teacher, uid, classInfo);
        mHashClassroomOnline.insert(StringUtils::stringToInt(classInfo.uid()), room);

        // broadcast info
        UserManager::instance()->boardcastMsgActionToOnlineUsersExcept(msg, uid);
    }
}

void ClassOnlineChannel::userRequestJointClass(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId = StringUtils::stringToInt(msg->classid());
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

void ClassOnlineChannel::userRequestDrawBoard(int uid, ClassOnlineAction *msg)
{
    if(UserManager::instance()->checkUserOnline(uid)) {
        // get opening class
        int classId = StringUtils::stringToInt(msg->classid());
        if(mHashClassroomOnline.contains(classId)) {
            qDebug() << "forward request to teacher";
            int teacherUid = mHashClassroomOnline[classId].teacherUid();
            if(uid != teacherUid) { // student request
                MessageSender::instance()->sendIpcMessage(teacherUid, msg);
            } else {
                mHashClassroomOnline[classId].sendAllMsgToStudent(msg);
            }
        } else {
            qDebug() << "class not exist";
        }
    }
}

void ClassOnlineChannel::userAcceptDrawBoard(int uid, ClassOnlineAction *msg)
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
            switch (ipc->id()) {
            case CLASS_ONLINE_ACTION_MSG: {
                ClassOnlineAction *msg = (ClassOnlineAction*)IpcMsgHelper::getMessage(ipc);
                processRequestClassAction(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            case BOARD_DRAW_LINE_MSG: {
                BoardDrawLine *msg = (BoardDrawLine*)IpcMsgHelper::getMessage(ipc);
                processRequestDrawBoard(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            case BOARD_ERASE_MSG: {
                BoardErase *msg = (BoardErase*)IpcMsgHelper::getMessage(ipc);
                processRequestEraseLine(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            default:
                break;
            }
        }
    }
}
