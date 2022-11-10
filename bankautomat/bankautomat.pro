QT += core gui serialport
QT +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    nosto.cpp \
    saldo.cpp \
    tilitapahtumat.cpp

HEADERS += \
    mainwindow.h \
    nosto.h \
    saldo.h \
    tilitapahtumat.h

FORMS += \
    mainwindow.ui \
    nosto.ui \
    saldo.ui \
    tilitapahtumat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-SerialPortDLL-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/release/ -lSerialPortDLL
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-SerialPortDLL-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/ -lSerialPortDLL

INCLUDEPATH += $$PWD/SerialPortDLL
DEPENDPATH += $$PWD/SerialPortDLL

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-PinCodeDLL-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/release/ -lPinCodeDLL
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-PinCodeDLL-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/ -lPinCodeDLL

INCLUDEPATH += $$PWD/../PinCodeDLL
DEPENDPATH += $$PWD/../PinCodeDLL


win32: LIBS += -L$$PWD/build-restApiDLL-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/ -lrestApiDLL

INCLUDEPATH += $$PWD/restApiDLL
DEPENDPATH += $$PWD/restApiDLL
