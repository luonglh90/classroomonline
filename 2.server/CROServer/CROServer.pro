QT += core sql network websockets
QT -= gui

CONFIG += c++11

TARGET = CROServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ../../msg/cpp/ClassCategory.pb.cc \
    ../../msg/cpp/ClassroomInfo.pb.cc \
    ../../msg/cpp/Enums.pb.cc \
    ../../msg/cpp/IpcMessage.pb.cc \
    ../../msg/cpp/RequestLogin.pb.cc \
    ../../msg/cpp/ResponseLogin.pb.cc \
    ../../msg/cpp/Teacher.pb.cc \
    ../../msg/cpp/User.pb.cc \
    communication/websocketcom.cpp \
    utils/socketutils.cpp \
    pgdao/connectionpool.cpp \
    pgdao/dbmanager.cpp \
    channel/userchannel.cpp \
    channel/basechannel.cpp \
    channel/router.cpp \
    communication/server.cpp \
    channel/messagereceivechannel.cpp \
    manager/usermanager.cpp \
    pgdao/userdao.cpp \
    utils/ipcmsghelper.cpp \
    ../../msg/cpp/UserInit.pb.cc \
    pgdao/classcategorydao.cpp \
    manager/classinfomanager.cpp \
    utils/messagesender.cpp \
    pgdao/classinfodao.cpp \
    ../../msg/cpp/ClassroomInfoOfCategory.pb.cc \
    ../../msg/cpp/RequestViewCategoryDetail.pb.cc \
    ../../msg/cpp/LoginStatus.pb.cc \
    channel/classinfochannel.cpp \
    entity/classroomonline.cpp \
    ../../msg/cpp/TeacherOpenClass.pb.cc \
    channel/classonlinechannel.cpp \
    ../../msg/cpp/ClassOnlineAction.pb.cc \
    utils/stringutils.cpp \
    ../../msg/cpp/BoardDrawLine.pb.cc \
    ../../msg/cpp/BoardErase.pb.cc \
    ../../msg/cpp/MetroPointXY.pb.cc

HEADERS += \
    ../../msg/cpp/ClassCategory.pb.h \
    ../../msg/cpp/ClassroomInfo.pb.h \
    ../../msg/cpp/Enums.pb.h \
    ../../msg/cpp/IpcMessage.pb.h \
    ../../msg/cpp/RequestLogin.pb.h \
    ../../msg/cpp/ResponseLogin.pb.h \
    ../../msg/cpp/Teacher.pb.h \
    ../../msg/cpp/User.pb.h \
    communication/websocketcom.h \
    utils/socketutils.h \
    pgdao/connectionpool.h \
    pgdao/dbmanager.h \
    channel/userchannel.h \
    ../../msg/cpp/ipcmessagetype.h \
    channel/basechannel.h \
    base/lockfreequeue.h \
    base/structs.h \
    base/cmmdefs.h \
    base/enums.h \
    channel/router.h \
    communication/server.h \
    channel/messagereceivechannel.h \
    manager/usermanager.h \
    pgdao/userdao.h \
    utils/ipcmsghelper.h \
    ../../msg/cpp/UserInit.pb.h \
    pgdao/classcategorydao.h \
    manager/classinfomanager.h \
    utils/messagesender.h \
    pgdao/classinfodao.h \
    ../../msg/cpp/ClassroomInfoOfCategory.pb.h \
    ../../msg/cpp/RequestViewCategoryDetail.pb.h \
    ../../msg/cpp/LoginStatus.pb.h \
    channel/classinfochannel.h \
    entity/classroomonline.h \
    ../../msg/cpp/TeacherOpenClass.pb.h \
    channel/classonlinechannel.h \
    ../../msg/cpp/ClassOnlineAction.pb.h \
    utils/stringutils.h \
    ../../msg/cpp/BoardDrawLine.pb.h \
    ../../msg/cpp/BoardErase.pb.h \
    ../../msg/cpp/MetroPointXY.pb.h


win32: LIBS += -L$$PWD/../../ThirdParty/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../../ThirdParty/include
DEPENDPATH += $$PWD/../../ThirdParty/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/protobuf.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/libprotobuf.a
