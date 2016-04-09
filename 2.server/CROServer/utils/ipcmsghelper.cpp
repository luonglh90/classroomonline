
#include "IpcMsgHelper.h"
#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/RequestLogin.pb.h"
#include "../../msg/cpp/ResponseLogin.pb.h"

std::map<std::string, int> nameIdMap;

IpcMsgHelper::IpcMsgHelper() {

}

IpcMsgHelper::~IpcMsgHelper() {

}

void IpcMsgHelper::init() {
    if (nameIdMap.empty()) {
        // TODO: add all message name and id here
        nameIdMap["METRO.CRO.MESSAGES.RequestLogin"] = REQUEST_LOGIN_MSG;
        nameIdMap["METRO.CRO.MESSAGES.ResponseLogin"] = RESPONSE_LOGIN_MSG;
    }
}

IpcMessage* IpcMsgHelper::createIpcMessage(google::protobuf::Message* msg) {
    int msgId = getId(msg);
    if (msgId < 0)
        return NULL;

    IpcMessage* ipc = new IpcMessage;
    ipc->set_msgid(msgId);
    // TODO: add case for all message here
    switch (msgId) {

    case REQUEST_LOGIN_MSG: {
        RequestLogin* ipcExt = ipc->MutableExtension(RequestLogin::message);
        (*ipcExt) = (*(RequestLogin*) msg);
        break;
    }
    case RESPONSE_LOGIN_MSG: {
        ResponseLogin* ipcExt = ipc->MutableExtension(ResponseLogin::message);
        (*ipcExt) = (*(ResponseLogin*) msg);
        break;
    }
    default:
        delete ipc;
        ipc = NULL;
        break;
    }

    return ipc;
}

google::protobuf::Message* IpcMsgHelper::getMessage(IpcMessage* ipc) {
    int msgId = ipc->msgid();
    if (msgId < 0)
        return NULL;

    google::protobuf::Message* msg = NULL;
    // TODO: add case for all message here
    switch (msgId) {

    case REQUEST_LOGIN_MSG: {
        if(ipc->HasExtension(RequestLogin::message))
            msg = new RequestLogin(ipc->GetExtension(RequestLogin::message));
        break;
    }
    case RESPONSE_LOGIN_MSG: {
        if(ipc->HasExtension(ResponseLogin::message))
            msg = new ResponseLogin(ipc->GetExtension(ResponseLogin::message));
        break;
    }
    default:
        break;
    }

    return msg;
}

int IpcMsgHelper::getId(google::protobuf::Message* msg) {
    init();

    std::map<std::string, int>::iterator it = nameIdMap.find(msg->GetTypeName());
    if (it != nameIdMap.end()) {
        return it->second;
    }

    return -1;
}


