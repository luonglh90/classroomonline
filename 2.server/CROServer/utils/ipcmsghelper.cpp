#include <sstream>
#include <QDebug>
#include "IpcMsgHelper.h"
#include "../../msg/cpp/ipcmessagetype.h"
#include "../../msg/cpp/RequestLogin.pb.h"
#include "../../msg/cpp/ResponseLogin.pb.h"
#include "../../msg/cpp/UserInit.pb.h"
#include "../../msg/cpp/RequestViewCategoryDetail.pb.h"
#include "../../msg/cpp/ClassroomInfoOfCategory.pb.h"
#include "../../msg/cpp/LoginStatus.pb.h"
#include "../../msg/cpp/TeacherOpenClass.pb.h"
#include "../../msg/cpp/ClassOnlineAction.pb.h"
#include "../../msg/cpp/BoardDrawLine.pb.h"
#include "../../msg/cpp/BoardErase.pb.h"

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
        nameIdMap["METRO.CRO.MESSAGES.TeacherOpenClass"] = TEACHER_OPEN_CLASS_MSG;
        nameIdMap["METRO.CRO.MESSAGES.ClassOnlineAction"] = CLASS_ONLINE_ACTION_MSG;
        nameIdMap["METRO.CRO.MESSAGES.BoardDrawLine"] = BOARD_DRAW_LINE_MSG;
        nameIdMap["METRO.CRO.MESSAGES.BoardErase"] = BOARD_ERASE_MSG;
    }
}

IpcMessage* IpcMsgHelper::createIpcMessage(google::protobuf::Message* msg) {
    int msgId = getId(msg);
    if (msgId < 0)
        return NULL;

    IpcMessage* ipc = new IpcMessage;
    ipc->set_id(msgId);
    std::ostringstream out;
    msg->SerializeToOstream(&out);
    int size = out.str().size();

    ipc->set_payload_data(out.str().data(), size);

    return ipc;
}

google::protobuf::Message* IpcMsgHelper::getMessage(IpcMessage* ipc) {
    int msgId = ipc->id();
    if (msgId < 0)
        return NULL;

    google::protobuf::Message* msg = NULL;
    // TODO: add case for all message here
    switch (msgId) {

    case REQUEST_LOGIN_MSG: {
        msg = new RequestLogin();
        break;
    }
    case RESPONSE_LOGIN_MSG: {
        msg = new ResponseLogin();
        break;
    }
    case USER_INIT_MSG: {
        msg = new UserInit();
        break;
    }
    case REQUEST_VIEW_CATEGORY_DETAIL_MSG: {
        msg = new RequestViewCategoryDetail();
        break;
    }
    case CLASSES_OF_CATEGORY: {
        msg = new ClassroomInfoOfCategory();
        break;
    }
    case LOGIN_STATUS_MSG: {
        msg = new LoginStatus();
        break;
    }
    case TEACHER_OPEN_CLASS_MSG: {
        msg = new TeacherOpenClass();
        break;
    }
    case CLASS_ONLINE_ACTION_MSG: {
        msg = new ClassOnlineAction();
        break;
    }
    case BOARD_DRAW_LINE_MSG: {
        msg = new BoardDrawLine();
        break;
    }
    case BOARD_ERASE_MSG: {
        msg = new BoardErase();
        break;
    }
    default:
        return msg;
    }

    msg->ParseFromArray(ipc->payload_data().data(), ipc->payload_data().size());

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


