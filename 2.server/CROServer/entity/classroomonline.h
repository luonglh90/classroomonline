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
    explicit ClassroomOnline(User teacher, int uid);
    bool checkUidOfClass(int uid);

    void routeMsg(int uid, IpcMessage *ipc);
    void processTeacherDisconnect();

signals:

public slots:

private:
    User mTeacher;
    int mTeacherUid;
    QHash<int, User> mHashStudent;
};

#endif // CLASSROOMONLINE_H