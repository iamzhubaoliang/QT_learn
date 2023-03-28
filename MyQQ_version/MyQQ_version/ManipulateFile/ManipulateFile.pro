
TARGET = ManipulateFile
TEMPLATE = lib
DEFINES += ManipulateFile_LIBRARY
CONFIG += c++11
HEADERS += \
    ManipulateFile_global.h \
    mani_file.h \
    manifileexception.h

SOURCES += \
    mani_file.cpp \
    manifileexceptioin.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../logTool/ -llogTool
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../logTool/ -llogTool
else:unix: LIBS += -L$$OUT_PWD/../logTool/ -llogTool

INCLUDEPATH += $$PWD/../logTool
DEPENDPATH += $$PWD/../logTool
