#ifndef PINCODEDLL_H
#define PINCODEDLL_H

#include "PinCodeDLL_global.h"
#include "logindialog.h"

class PINCODEDLL_EXPORT PinCodeDLL
{
public:
    PinCodeDLL();
    ~PinCodeDLL();
    void tulostaTerveisia();
    void login();

    loginDialog *logindialog;
};

#endif // PINCODEDLL_H
