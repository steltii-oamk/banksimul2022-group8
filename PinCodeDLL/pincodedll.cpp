#include "pincodedll.h"
#include <qdebug.h>

PinCodeDLL::PinCodeDLL()
{
    logindialog = new loginDialog;
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
