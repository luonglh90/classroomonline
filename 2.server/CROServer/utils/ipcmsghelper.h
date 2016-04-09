

#ifndef IPCMSGHELPER_H_
#define IPCMSGHELPER_H_

#include "../../msg/cpp/IpcMessage.pb.h"
#include <map>
#include <string>

using namespace METRO::CRO::MESSAGES;

class IpcMsgHelper {
public:
	IpcMsgHelper();
	virtual ~IpcMsgHelper();
	static void init();

	static IpcMessage* createIpcMessage(google::protobuf::Message* msg);
	static google::protobuf::Message* getMessage(IpcMessage* ipc);

private:
	static int getId(google::protobuf::Message* msg);
};

#endif /* IPCMSGHELPER_H_ */
