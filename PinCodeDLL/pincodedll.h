#ifndef PINCODEDLL_H
#define PINCODEDLL_H


#include <QtNetwork>
#include <QNetworkAccessManager>

#include "PinCodeDLL_global.h"
#include "logindialog.h"
#include <QObject>
#include <iostream>
using namespace std;

class PINCODEDLL_EXPORT PinCodeDLL  :public QObject
{
    Q_OBJECT
public:
    PinCodeDLL();
    ~PinCodeDLL();
    void tulostaTerveisia();
    void login();
public slots:
    void getnumber(QString);
private slots:
    void getLogin();

public slots:
    void loginPostSlot(QNetworkReply *reply);
signals:
    void senttoexe(QString);
private:
    loginDialog *logindialog;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray webtoken;
};


#endif // PINCODEDLL_H
