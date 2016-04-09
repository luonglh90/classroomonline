#ifndef CLASSINFOMANAGER_H
#define CLASSINFOMANAGER_H

#include <QObject>
#include <QHash>
#include "../../msg/cpp/ClassCategory.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassInfoManager : public QObject
{
    Q_OBJECT
public:
    static ClassInfoManager *instance();
    void loadAllCategory();
    QList<ClassCategory> getListCategories() {
        return mHashClassCategory.values();
    }

signals:

public slots:

private:
    explicit ClassInfoManager(QObject *parent = 0);
    static ClassInfoManager *mInstance;
    QHash<int, ClassCategory> mHashClassCategory;
};

#endif // CLASSINFOMANAGER_H
