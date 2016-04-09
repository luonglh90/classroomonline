QT += core sql network websockets
QT -= gui

CONFIG += c++11

TARGET = CROServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ../../msg/cpp/Category.pb.cc \
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
    channel/messagereceivechannel.cpp

HEADERS += \
    ../../msg/cpp/Category.pb.h \
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
    channel/messagereceivechannel.h


win32: LIBS += -L$$PWD/../../ThirdParty/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../../ThirdParty/include
DEPENDPATH += $$PWD/../../ThirdParty/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/protobuf.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/libprotobuf.a