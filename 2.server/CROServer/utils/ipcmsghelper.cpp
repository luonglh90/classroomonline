
#include "IpcMsgHelper.h"
#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/RequestLogin.pb.h"
#include "../../msg/cpp/ResponseLogin.pb.h"
#include "../../msg/cpp/UserInit.pb.h"
#include "../../msg/cpp/RequestViewCategoryDetail.pb.h"
#include "../../msg/cpp/ClassroomInfoOfCategory.pb.h"
#include "../../msg/cpp/LoginStatus.pb.h"

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
        nameIdMap["METRO.CRO.MESSAGES.UserInit"] = USER_INIT_MSG;
        nameIdMap["METRO.CRO.MESSAGES.RequestViewCategoryDetail"] = REQUEST_VIEW_CATEGORY_DETAIL_MSG;
        nameIdMap["METRO.CRO.MESSAGES.ClassroomInfoOfCategory"] = CLASSES_OF_CATEGORY;
        nameIdMap["METRO.CRO.MESSAGES.LoginStatus"] = LOGIN_STATUS_MSG;
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
    case USER_INIT_MSG: {
        UserInit* ipcExt = ipc->MutableExtension(UserInit::message);
        (*ipcExt) = (*(UserInit*) msg);
        break;
    }
    case REQUEST_VIEW_CATEGORY_DETAIL_MSG: {
        RequestViewCategoryDetail* ipcExt = ipc->MutableExtension(RequestViewCategoryDetail::message);
        (*ipcExt) = (*(RequestViewCategoryDetail*) msg);
        break;
    }
    case CLASSES_OF_CATEGORY: {
        ClassroomInfoOfCategory* ipcExt = ipc->MutableExtension(ClassroomInfoOfCategory::message);
        (*ipcExt) = (*(ClassroomInfoOfCategory*) msg);
        break;
    }
    case LOGIN_STATUS_MSG: {
        LoginStatus* ipcExt = ipc->MutableExtension(LoginStatus::message);
        (*ipcExt) = (*(LoginStatus*) msg);
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
    case USER_INIT_MSG: {
        if(ipc->HasExtension(UserInit::message))
            msg = new UserInit(ipc->GetExtension(UserInit::message));
        break;
    }
    case REQUEST_VIEW_CATEGORY_DETAIL_MSG: {
        if(ipc->HasExtension(RequestViewCategoryDetail::message))
            msg = new RequestViewCategoryDetail(ipc->GetExtension(RequestViewCategoryDetail::message));
        break;
    }
    case CLASSES_OF_CATEGORY: {
        if(ipc->HasExtension(ClassroomInfoOfCategory::message))
            msg = new ClassroomInfoOfCategory(ipc->GetExtension(ClassroomInfoOfCategory::message));
        break;
    }
    case LOGIN_STATUS_MSG: {
        if(ipc->HasExtension(LoginStatus::message))
            msg = new LoginStatus(ipc->GetExtension(LoginStatus::message));
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


