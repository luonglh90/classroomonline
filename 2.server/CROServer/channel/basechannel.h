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
        this->socketuid = -1;
        this->ipcmsg = nullptr;
    }

    IpcSocketEvelope (int uid, IpcMessage *ipc) {
        this->socketuid = uid;
        this->ipcmsg = ipc;
    }

    int socketuid;
    IpcMessage *ipcmsg;
};

class BaseChannel : public QThread
{
    Q_OBJECT
public:
    BaseChannel();
    void enqueueMessage(IpcSocketEvelope *ipcevelope);

    virtual void onDisconnect(int socketuid) = 0;

signals:
    void requestSendToSocketClient(int socketuid, QByteArray data);

protected:
    void run();
    virtual void readMessage(IpcSocketEvelope *ipcevelope) = 0;
private:
    LockFreeQueue<IpcSocketEvelope *> mQueueData;
    QWaitCondition mWaitCondition;
    QMutex mMutex;

};

#endif // BASECHANNEL_H
