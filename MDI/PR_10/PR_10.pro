QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CreateStudent.cpp \
    CreateTeacher.cpp \
    Logger.cpp \
    Person.cpp \
    ShowStudent.cpp \
    ShowTeacher.cpp \
    Student.cpp \
    Teacher.cpp \
    main.cpp \
    mainwindow.cpp \
    sqlite.cpp

HEADERS += \
    CreateStudent.h \
    CreateTeacher.h \
    Logger.h \
    Person.h \
    ShowStudent.h \
    ShowTeacher.h \
    Student.h \
    Teacher.h \
    db.h \
    mainwindow.h \
    sqlite.h

FORMS += \
    CreateStudent.ui \
    CreateTeacher.ui \
    ShowStudent.ui \
    ShowTeacher.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
