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
    IpcSocketEvelope() {
        this->socket = nullptr;
        this->ipcmsg = nullptr;
    }

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

    virtual void onDisconnect(QWebSocket *socket) = 0;

protected:
    void run();
    virtual void readMessage(IpcSocketEvelope *ipcevelope) = 0;
private:
    LockFreeQueue<IpcSocketEvelope *> mQueueData;
    QWaitCondition mWaitCondition;
    QMutex mMutex;

};

#endif // BASECHANNEL_H
