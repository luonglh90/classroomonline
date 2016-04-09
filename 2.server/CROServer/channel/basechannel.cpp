#include "base/cmmdefs.h"

#include "basechannel.h"

BaseChannel::BaseChannel()
{
}

void BaseChannel::run()
{
    while(true)
    {
        mMutex.lock();
        mWaitCondition.wait(&mMutex);
        IpcSocketEvelope* msgEnve = mQueueData.dequeue();
        while(msgEnve)
        {
            readMessage(msgEnve);
            _DELETE_PTR(msgEnve->ipcmsg);
            _DELETE_PTR(msgEnve);
            msgEnve = mQueueData.dequeue();
        }
        mMutex.unlock();
    }
}

void BaseChannel::enqueueMessage(IpcSocketEvelope *ipcevelope)
{
    mQueueData.enqueue(ipcevelope);
    mWaitCondition.wakeAll();
}
