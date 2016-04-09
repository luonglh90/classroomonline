#ifndef CLASSROOMONLINE_H
#define CLASSROOMONLINE_H

#include <QObject>
#include <QHash>
#include "../../msg/cpp/User.pb.h"
#include "../../msg/cpp/ClassroomInfo.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassroomOnline
{
public:
    ClassroomOnline(){}
    explicit ClassroomOnline(User teacher, int uid, ClassroomInfo classInfo);
    bool checkUidOfClass(int uid);

    void routeMsg(int uid, IpcMessage *ipc);
    void processTeacherDisconnect();

    User teacher() const;
    int teacherUid() const;
    ClassroomInfo classInfo() const;

    void addStudentToClass(int uid, User student);

signals:

public slots:

private:
    User mTeacher;
    int mTeacherUid;
    ClassroomInfo mClassInfo;
    QHash<int, User> mHashStudent;
};

#endif // CLASSROOMONLINE_H
