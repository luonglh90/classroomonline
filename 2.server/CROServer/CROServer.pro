QT += core sql network
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
    communication/websocketcom.cpp

HEADERS += \
    ../../msg/cpp/Category.pb.h \
    ../../msg/cpp/ClassroomInfo.pb.h \
    ../../msg/cpp/Enums.pb.h \
    ../../msg/cpp/IpcMessage.pb.h \
    ../../msg/cpp/RequestLogin.pb.h \
    ../../msg/cpp/ResponseLogin.pb.h \
    ../../msg/cpp/Teacher.pb.h \
    ../../msg/cpp/User.pb.h \
    communication/websocketcom.h


win32: LIBS += -L$$PWD/../../ThirdParty/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../../ThirdParty/include
DEPENDPATH += $$PWD/../../ThirdParty/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/protobuf.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../ThirdParty/lib/libprotobuf.a
