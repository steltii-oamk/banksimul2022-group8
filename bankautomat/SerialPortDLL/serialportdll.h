#ifndef SERIALPORTDLL_H
#define SERIALPORTDLL_H

#include "SerialPortDLL_global.h"
#include <qobject.h>
#include <QSerialPort>

class SERIALPORTDLL_EXPORT SerialPortDLL : public QObject
{
    Q_OBJECT
public:
    SerialPortDLL(QObject *parent);
    ~SerialPortDLL();

signals:
    void korttiIdSignal(QByteArray);

private slots:
        void serialSlot(void);

private:
    QSerialPort *serialPort;

};

#endif // SERIALPORTDLL_H
