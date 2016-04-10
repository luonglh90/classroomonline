#ifndef CLASSROOMONLINE_H
#define CLASSROOMONLINE_H

#include <QObject>
#include <QHash>
#include "../../msg/cpp/User.pb.h"
#include "../../msg/cpp/ClassroomInfo.pb.h"
#include "../../msg/cpp/MetroPointXY.pb.h"
#include "../../msg/cpp/BoardDrawLine.pb.h"
#include "../../msg/cpp/BoardErase.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassroomOnline
{
public:
    ClassroomOnline(){}
    explicit ClassroomOnline(User teacher, int uid, ClassroomInfo classInfo);
    bool checkUidOfClass(int uid);

    void processDrawMsg(int uid, BoardDrawLine *lineMsg);
    void processEraseMsg(int uid, BoardErase *eraseMsg);
    void processTeacherDisconnect();
    void sendAllExcept(google::protobuf::Message *msg, int exceptUid);
    void sendAllLinesToNewStudent(int uid);

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
    QHash<int, BoardDrawLine> mHashDrawLine;
};

#endif // CLASSROOMONLINE_H
