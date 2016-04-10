#ifndef IPCMESSAGETYPE_H
#define IPCMESSAGETYPE_H

/**
 * Defines index with each message
 *
 * User 100
 * - User: 101
 * - Teacher: 103
 * - RequestLogin: 105
 * - ResponseLogin: 107
 * - UserInit: 109
 * - LoginStatus: 111
 * Class 200
 * - Category: 201
 * - ClassroomInfo: 203
 * - RequestViewCategoryDetail: 205
 * - ClassroomInfoOfCategory: 207
 * Class Online 300
 * - TeacherOpenClass = 301
 * - ClassOnlineAction = 303
 */

#define USER_BASE   100
#define USER_MSG    (USER_BASE + 1)
#define TEACHER_MSG (USER_BASE + 3)
#define REQUEST_LOGIN_MSG (USER_BASE + 5)
#define RESPONSE_LOGIN_MSG (USER_BASE + 7)
#define USER_INIT_MSG (USER_BASE + 9)
#define LOGIN_STATUS_MSG (USER_BASE + 11)

#define CLASS_BASE 200
#define CATEGORY_MSG (CLASS_BASE + 1)
#define CALSSROOM_MSG (CLASS_BASE + 3)
#define REQUEST_VIEW_CATEGORY_DETAIL_MSG (CLASS_BASE + 5)
#define CLASSES_OF_CATEGORY (CLASS_BASE + 7)

#define CLASS_ONLINE_BASE 300
#define TEACHER_OPEN_CLASS_MSG 301
#define CLASS_ONLINE_ACTION_MSG 303

#define BOARD_BASE 400
#define BOARD_CHANGE_SETTING_MSG 401
#define BOARD_DRAW_LINE_MSG 402
#define BOARD_ERASE_MSG 403

#endif // IPCMESSAGETYPE_H
