#ifndef CLASSONLINECHANNEL_H
#define CLASSONLINECHANNEL_H

#include <QHash>
#include "entity/classroomonline.h"
#include "basechannel.h"
#include "../../msg/cpp/ClassOnlineAction.pb.h"
#include "../../msg/cpp/BoardDrawLine.pb.h"
#include "../../msg/cpp/BoardErase.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassOnlineChannel : public BaseChannel
{
public:
    ClassOnlineChannel();
    void processRequestClassAction(int uid, METRO::CRO::MESSAGES::ClassOnlineAction *msg);
    void processRequestDrawBoard(int uid, BoardDrawLine *msg);
    void processRequestEraseLine(int uid, BoardErase *msg);
    // action
    void userOpenClass(int uid, ClassOnlineAction *msg);
    void userRequestJointClass(int uid, ClassOnlineAction *msg);
    void userAcceptJointClass(int uid, ClassOnlineAction *msg);
    void userRequestDrawBoard(int uid, ClassOnlineAction *msg);
    void userAcceptDrawBoard(int uid, ClassOnlineAction *msg);
    // BaseChannel interface
public:
    void onDisconnect(int socketuid);

protected:
    void readMessage(IpcSocketEvelope *ipcevelope);

private:
    QHash<int, ClassroomOnline> mHashClassroomOnline;
};

#endif // CLASSONLINECHANNEL_H
