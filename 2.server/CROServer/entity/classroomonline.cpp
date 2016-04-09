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
