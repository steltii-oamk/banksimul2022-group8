#include "restapidll.h"
#include <qdebug.h>

//QByteArray token1 = "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NDc5MiwiZXhwIjoxNjUzNDY0NzkyfQ.3zmIvXRU4tHOfQ7YW_8Ytc8VmZ2bmkP95X2gK2j9r9s";


RestApiDLL::RestApiDLL(QObject *parent) :
    QObject(parent)
{
}

RestApiDLL::~RestApiDLL()
{

}

void RestApiDLL::getAsiakas(QString id)
{
    QString site_url="http//localhost:3000/asiakas/" + id + "/";
    qDebug() << "RESTAPIDLL::getAsiakas = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NjIxOCwiZXhwIjoxNjUzNDY2MjE4fQ.ly07sMq-FKWsIhT8_MyTD_CuIkWo2VKyn2z17Y3mElI";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getTili(QString id)
{
    QString site_url="http//localhost:3000/tili/" + id + "/";
    qDebug() << "RESTAPIDLL::getTili = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NjIxOCwiZXhwIjoxNjUzNDY2MjE4fQ.ly07sMq-FKWsIhT8_MyTD_CuIkWo2VKyn2z17Y3mElI";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (tiliGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getKortti(QString id)
{
    QString site_url="http//localhost:3000/kortti/" + id + "/";
    qDebug() << "RESTAPIDLL::getKortti = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NjIxOCwiZXhwIjoxNjUzNDY2MjE4fQ.ly07sMq-FKWsIhT8_MyTD_CuIkWo2VKyn2z17Y3mElI";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (korttiGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getTili_has_Asiakas(QString id)
{
    QString site_url="http//localhost:3000/tili_has_Asiakas/" + id + "/";
    qDebug() << "RESTAPIDLL::getTili_has_ASiakas = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NDc5MiwiZXhwIjoxNjUzNDY0NzkyfQ.3zmIvXRU4tHOfQ7YW_8Ytc8VmZ2bmkP95X2gK2j9r9s";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (tili_has_asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getTiliTapahtumat(QString id)
{
    QString site_url="http//localhost:3000/tilitapahtumat/" + id + "/";
    qDebug() << "RESTAPIDLL::getTiliTapahtumat = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiIxMjM0NTY3OCIsImlhdCI6MTY1MTY2NDc5MiwiZXhwIjoxNjUzNDY0NzkyfQ.3zmIvXRU4tHOfQ7YW_8Ytc8VmZ2bmkP95X2gK2j9r9s";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (tilitapahtumatGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::asiakasGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::asiakasGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString asiakas;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        asiakas+=QString::number(json_obj["idAsiakas"].toInt())+", "+json_obj["Etunimi"].toString()+", "+json_obj["Sukunimi"].toString()+
                ", "+json_obj["Osoite"].toString()+", "+json_obj["Puhelinnumero"].toString()+", "+json_obj["idKortti"].toInt()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}

void RestApiDLL::tiliGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::tiliGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tili;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tili+=QString::number(json_obj["idTili"].toInt())+", "+json_obj["Tilinumero"].toString()+", "+json_obj["Saldo"].toDouble()+
                ", "+json_obj["Credit"].toDouble()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}

void RestApiDLL::korttiGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::korttiGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString kortti;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        kortti+=QString::number(json_obj["idKortti"].toInt())+", "+json_obj["Kortinnumero"].toString()+", "+json_obj["PIN"].toString()+
                ", "+json_obj["Voimassaolo"].toString()+", "+json_obj["idTili"].toInt()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}

void RestApiDLL::tili_has_asiakasGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::tili_has_asiakasGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tili_has_asiakas;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tili_has_asiakas+=QString::number(json_obj["idTili_has_asiakas"].toInt())+", "+json_obj["idAsiakas"].toInt()+", "+json_obj["idTili"].toInt()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}

void RestApiDLL::tilitapahtumatGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::tilitapahtumatGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtumat;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tilitapahtumat+=QString::number(json_obj["idTilitapahtumat"].toInt())+", "+json_obj["Tilinumero"].toString()+", "+json_obj["Kortinnumero"].toString()+
                ", "+json_obj["PVMKLO"].toString()+", "+json_obj["Tapahtumat"].toString()+", "+json_obj["Summa"].toDouble()+", "+json_obj["idTili"].toInt()+"\r";
    }
    reply->deleteLater();
    getManager->deleteLater();
}
