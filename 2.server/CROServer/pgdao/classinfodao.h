#ifndef CLASSINFODAO_H
#define CLASSINFODAO_H

#include <QList>
#include "../../msg/cpp/ClassroomInfo.pb.h";

using namespace METRO::CRO::MESSAGES;

struct ClassroomCpp {
    QString teacher_userName;
    ClassroomInfo info;
};


class ClassInfoDAO
{
public:
    ClassInfoDAO();
    void getAllClassInfo(QList<ClassroomInfo> &listClass, bool &isOk, QString &errMsg);

private:
    QString GETALL;
};

#endif // CLASSINFODAO_H
