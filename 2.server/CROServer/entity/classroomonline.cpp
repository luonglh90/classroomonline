#include <sstream>
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

void ClassroomOnline::processDrawMsg(int uid, BoardDrawLine *lineMsg)
{
    if(!mHashDrawLine.contains(lineMsg->lineid())) {
        std::ostringstream out;
        lineMsg->SerializeToOstream(&out);
        qDebug() << out.str().size();
        sendAllExcept(lineMsg, uid);
        mHashDrawLine.insert(lineMsg->lineid(), *lineMsg);
    }
}

void ClassroomOnline::processEraseMsg(int uid, BoardErase *eraseMsg)
{
    if(mHashDrawLine.contains(eraseMsg->lineid())) {
        sendAllExcept(eraseMsg, uid);
        mHashDrawLine.remove(eraseMsg->lineid());
    }
}

void ClassroomOnline::processTeacherDisconnect()
{
    qDebug() << "Teacher offline, send close class";
    ClassOnlineAction actionClass;
}

void ClassroomOnline::sendAllExcept(google::protobuf::Message *msg, int exceptUid)
{
//    MessageSender::instance()->sendIpcMessage(exceptUid, msg);
    if(exceptUid != mTeacherUid) {
        MessageSender::instance()->sendIpcMessage(mTeacherUid, msg);
    }
    for(int uid : mHashStudent.keys()) {
        if(exceptUid != uid) {
            MessageSender::instance()->sendIpcMessage(uid, msg);
        }
    }
}

void ClassroomOnline::sendAllLinesToNewStudent(int uid)
{
    for(int lineKey : mHashDrawLine.keys()) {
        MessageSender::instance()->sendIpcMessage(uid, &(mHashDrawLine[lineKey]));
    }
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

        sendAllLinesToNewStudent(uid);
    }
}
