#ifndef CLASSONLINECHANNEL_H
#define CLASSONLINECHANNEL_H

#include <QHash>
#include "entity/classroomonline.h"
#include "basechannel.h"
#include "../../msg/cpp/TeacherOpenClass.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassOnlineChannel : public BaseChannel
{
public:
    ClassOnlineChannel();
    void processRequestOpenClass(int uid, METRO::CRO::MESSAGES::TeacherOpenClass *msg);

    // BaseChannel interface
public:
    void onDisconnect(int socketuid);

protected:
    void readMessage(IpcSocketEvelope *ipcevelope);

private:
    QHash<int, ClassroomOnline> mHashClassroomOnline;
};

#endif // CLASSONLINECHANNEL_H
