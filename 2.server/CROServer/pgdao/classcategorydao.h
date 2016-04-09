#ifndef CLASSCATEGORYDAO_H
#define CLASSCATEGORYDAO_H

#include <QList>
#include "../../msg/cpp/ClassCategory.pb.h";

using namespace METRO::CRO::MESSAGES;

class ClassCategoryDAO
{
public:
    ClassCategoryDAO();

    void getAllClassCategory(QList<ClassCategory> &listCategory, bool &isOk, QString &errMsg);

private:
    QString GETALL;
};

#endif // CLASSCATEGORYDAO_H
