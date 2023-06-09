
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += sql
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Register.cpp \
    login.cpp \
    main.cpp

HEADERS += \
    Register.h \
    login.h

FORMS += \
    login.ui \
    login.ui \
    regist.ui

RC_ICONS=Icons.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    loginResource.qrc




win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ManipulateFile/ -lManipulateFile
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ManipulateFile/ -lManipulateFile
else:unix: LIBS += -L$$OUT_PWD/../ManipulateFile/ -lManipulateFile

INCLUDEPATH += $$PWD/../ManipulateFile
DEPENDPATH += $$PWD/../ManipulateFile





win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../logTool/ -llogTool
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../logTool/ -llogTool
else:unix: LIBS += -L$$OUT_PWD/../logTool/ -llogTool

INCLUDEPATH += $$PWD/../logTool
DEPENDPATH += $$PWD/../logTool

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../commonVarible/ -lcommonVarible
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../commonVarible/ -lcommonVarible
else:unix: LIBS += -L$$OUT_PWD/../commonVarible/ -lcommonVarible

INCLUDEPATH += $$PWD/../commonVarible
DEPENDPATH += $$PWD/../commonVarible
