QT       += core gui
QT +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    creditvalikko.cpp \
    kirjaudusisaan.cpp \
    lahjoitus.cpp \
    main.cpp \
    mainwindow.cpp \
    nosto.cpp \
    paavalikko.cpp \
    saldo.cpp \
    tapahtumat.cpp

HEADERS += \
    creditvalikko.h \
    kirjaudusisaan.h \
    lahjoitus.h \
    mainwindow.h \
    nosto.h \
    paavalikko.h \
    saldo.h \
    tapahtumat.h

FORMS += \
    creditvalikko.ui \
    kirjaudusisaan.ui \
    lahjoitus.ui \
    mainwindow.ui \
    nosto.ui \
    paavalikko.ui \
    saldo.ui \
    tapahtumat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    kuvat.qrc
