#include "serialportdll.h"
#include <qdebug.h>

SerialPortDLL::SerialPortDLL(QObject *parent) :
    QObject(parent), serialPort(new QSerialPort)
{
serialPort->setPortName("COM1");
serialPort->setBaudRate(9600);
serialPort->setDataBits(QSerialPort::DataBits(8));
serialPort->setParity(QSerialPort::Parity(0));
serialPort->setStopBits(QSerialPort::StopBits(1));
serialPort->setFlowControl(QSerialPort::FlowControl(0));

connect(serialPort,SIGNAL(QSerialPort::readyRead), this, SLOT(serialSlot));

if(serialPort->open(QIODevice::ReadWrite)) {
        qDebug()<<serialPort->errorString();
} else {
        qDebug()<<"Serial open ok";
 }
}

SerialPortDLL::~SerialPortDLL()
{
    delete serialPort;
}

void SerialPortDLL::serialSlot()
{
    QByteArray korttiid = serialPort->readAll();
    emit korttiIdSignal(korttiid);
}
