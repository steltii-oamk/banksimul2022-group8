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


/*void PinCodeDLL::getLogin()
{
    QString site_url="http://localhost:3000/login";

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QJsonObject jsonObj;
    jsonObj.insert("Kortinnumero","12345678");
    jsonObj.insert("PIN","1111");
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginPostSlot(QNetworkReply*)));

    reply = getManager->post(request, QJsonDocument(jsonObj).toJson());


}

*/
