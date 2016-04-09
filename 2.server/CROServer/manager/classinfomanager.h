#ifndef CLASSINFOMANAGER_H
#define CLASSINFOMANAGER_H

#include <QObject>

class ClassInfoManager : public QObject
{
    Q_OBJECT
public:
    explicit ClassInfoManager(QObject *parent = 0);

signals:

public slots:
};

#endif // CLASSINFOMANAGER_H