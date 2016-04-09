#include "../../msg/cpp/ipcmessagetype.h"
#include "base/cmmdefs.h"
#include "utils/ipcmsghelper.h"
#include "utils/stringutils.h"
#include "manager/classinfomanager.h"
#include "classinfochannel.h"

ClassInfoChannel::ClassInfoChannel() : BaseChannel()
{

}

void ClassInfoChannel::onDisconnect(int socketuid)
{

}

void ClassInfoChannel::processRequestViewCategoryDetail(int uid, RequestViewCategoryDetail *msg)
{
    int cate_id = StringUtils::stringToInt(msg->cate_id());
    ClassInfoManager::instance()->sendClassroomOfCategory(uid, cate_id);
}

void ClassInfoChannel::readMessage(IpcSocketEvelope *ipcevelope)
{
    if(ipcevelope) {
        IpcMessage *ipc = ipcevelope->ipcmsg;
        if(ipc) {
            switch (ipc->msgid()) {
            case REQUEST_VIEW_CATEGORY_DETAIL_MSG: {
                RequestViewCategoryDetail *msg = (RequestViewCategoryDetail*)IpcMsgHelper::getMessage(ipc);
                processRequestViewCategoryDetail(ipcevelope->socketuid, msg);
                _DELETE_PTR(msg);
                break;
            }
            default:
                break;
            }
        }
    }
}
