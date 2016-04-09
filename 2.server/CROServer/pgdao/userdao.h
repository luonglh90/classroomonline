#ifndef USERDAO_H
#define USERDAO_H

#include <QList>
#include "../../msg/cpp/User.pb.h";

using namespace METRO::CRO::MESSAGES;

class UserDAO
{
public:
    UserDAO();

    void getAllUser(QList<User> &listUser, bool &isOk, QString &errMsg);

private:
    QString GETALL;
};

#endif // USERDAO_H
