#ifndef CLASSINFOMANAGER_H
#define CLASSINFOMANAGER_H

#include <QObject>
#include <QHash>
#include "../../msg/cpp/ClassCategory.pb.h"
#include "../../msg/cpp/ClassroomInfo.pb.h"

using namespace METRO::CRO::MESSAGES;

class ClassInfoManager : public QObject
{
    Q_OBJECT
public:
    static ClassInfoManager *instance();
    void loadAllCategory();
    void loadAllClassroomInfo();
    QList<ClassCategory> getListCategories() {
        return mHashClassCategory.values();
    }
    void sendClassroomOfCategory(int socketuid, int cate_id);

signals:

public slots:

private:
    explicit ClassInfoManager(QObject *parent = 0);
    static ClassInfoManager *mInstance;
    QHash<int, ClassCategory> mHashClassCategory;
    QHash<int, ClassroomInfo> mHashClassroomInfo;
};

#endif // CLASSINFOMANAGER_H
