#ifndef BASECHANNEL_H
#define BASECHANNEL_H

#include <QThread>
#include <QMutex>
#include <QWaitCondition>

#include "base/lockfreequeue.h"
#include "base/structs.h"
#include "../../msg/cpp/IpcMessage.pb.h"

using namespace METRO::CRO::MESSAGES;

struct IpcSocketEvelope {
    IpcSocketEvelope (QWebSocket *psocket, IpcMessage *ipc) {
        this->socket = psocket;
        this->ipcmsg = ipc;
    }

    QWebSocket *socket;
    IpcMessage *ipcmsg;
};

class BaseChannel : public QThread
{
public:
    BaseChannel();
    void enqueueMessage(IpcSocketEvelope *ipcevelope);

protected:
    void run();
    virtual void readMessage(IpcSocketEvelope *ipcevelope) = 0;
private:
    LockFreeQueue<IpcSocketEvelope*> mQueueData;
    QWaitCondition mWaitCondition;
    QMutex mMutex;

};

#endif // BASECHANNEL_H
