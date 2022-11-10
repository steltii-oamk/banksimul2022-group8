#include "pincodedll.h"
#include <qdebug.h>

PinCodeDLL::PinCodeDLL()
{
    logindialog = new loginDialog;
    connect(logindialog, SIGNAL(loginSignal(QString)),
            this, SLOT(getnumber(QString)));
}

PinCodeDLL::~PinCodeDLL()
{
    delete logindialog;
}

void PinCodeDLL::tulostaTerveisia()
{
    qDebug() << "Terveisia PinCodeDLL:sta";
}

void PinCodeDLL::login()
{
    logindialog->show();
}

void PinCodeDLL::getnumber(QString s)
{
    emit senttoexe(s);
}

void PinCodeDLL::getLogin()
{

}

void PinCodeDLL::loginPostSlot(QNetworkReply *reply)
{

}
