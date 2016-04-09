#ifndef CLASSINFOCHANNEL_H
#define CLASSINFOCHANNEL_H

#include "../../msg/cpp/RequestViewCategoryDetail.pb.h"
#include "basechannel.h"

class ClassInfoChannel : public BaseChannel
{
public:
    ClassInfoChannel();

    // BaseChannel interface
public:
    void onDisconnect(int socketuid);
    void processRequestViewCategoryDetail(int uid, METRO::CRO::MESSAGES::RequestViewCategoryDetail *msg);
protected:
    void readMessage(IpcSocketEvelope *ipcevelope);
};

#endif // CLASSINFOCHANNEL_H
