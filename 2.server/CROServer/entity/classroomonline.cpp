#include <QDebug>
#include "../../msg/cpp/ClassOnlineAction.pb.h"
#include "utils/messagesender.h"
#include "entity/classroomonline.h"

ClassroomOnline::ClassroomOnline(User teacher, int uid, ClassroomInfo classInfo):
    mTeacherUid(uid), mTeacher(teacher), mClassInfo(classInfo)
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

User ClassroomOnline::teacher() const
{
    return mTeacher;
}

int ClassroomOnline::teacherUid() const
{
    return mTeacherUid;
}

ClassroomInfo ClassroomOnline::classInfo() const
{
    return mClassInfo;
}

void ClassroomOnline::addStudentToClass(int uid, User student)
{
    if(!mHashStudent.contains(uid)) {
        mHashStudent.insert(uid, student);
    }
}
