#include <QDebug>
#include "../../msg/cpp/ClassOnlineAction.pb.h"
#include "utils/messagesender.h"
#include "entity/classroomonline.h"

ClassroomOnline::ClassroomOnline(User teacher, int uid):
    mTeacherUid(uid), mTeacher(teacher)
{

}

bool ClassroomOnline::checkUidOfClass(int uid)
{
    if(uid == mTeacherUid) return true;
    else return mHashStudent.contains(uid);
}

void ClassroomOnline::routeMsg(int uid, IpcMessage *ipc)
{

}

void ClassroomOnline::processTeacherDisconnect()
{
    qDebug() << "Teacher offline, send close class";
    ClassOnlineAction actionClass;

}
