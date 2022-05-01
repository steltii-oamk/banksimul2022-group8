#include "restapidll.h"
#include <qdebug.h>

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
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiI0OTIwIDEwOTAgNTU1NSA0NDQ0IiwiaWF0IjoxNjUwOTc0MjM2LCJleHAiOjE2NTA5OTIyMzZ9.8FhfK1HjaJNbUU_GSndbsA2GZ1G7QFWiLa_JoK8r34g";
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
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiI0OTIwIDEwOTAgNTU1NSA0NDQ0IiwiaWF0IjoxNjUwOTc0MjM2LCJleHAiOjE2NTA5OTIyMzZ9.8FhfK1HjaJNbUU_GSndbsA2GZ1G7QFWiLa_JoK8r34g";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getKortti(QString id)
{
    QString site_url="http//localhost:3000/kortti/" + id + "/";
    qDebug() << "RESTAPIDLL::getKortti = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiI0OTIwIDEwOTAgNTU1NSA0NDQ0IiwiaWF0IjoxNjUwOTc0MjM2LCJleHAiOjE2NTA5OTIyMzZ9.8FhfK1HjaJNbUU_GSndbsA2GZ1G7QFWiLa_JoK8r34g";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getTili_has_Asiakas(QString id)
{
    QString site_url="http//localhost:3000/tili_has_Asiakas/" + id + "/";
    qDebug() << "RESTAPIDLL::getTili_has_ASiakas = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiI0OTIwIDEwOTAgNTU1NSA0NDQ0IiwiaWF0IjoxNjUwOTc0MjM2LCJleHAiOjE2NTA5OTIyMzZ9.8FhfK1HjaJNbUU_GSndbsA2GZ1G7QFWiLa_JoK8r34g";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::getTiliTapahtumat(QString id)
{
    QString site_url="http//localhost:3000/tilitapahtumat/" + id + "/";
    qDebug() << "RESTAPIDLL::getTiliTapahtumat = " + site_url;

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray token="Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJLb3J0aW5udW1lcm8iOiI0OTIwIDEwOTAgNTU1NSA0NDQ0IiwiaWF0IjoxNjUwOTc0MjM2LCJleHAiOjE2NTA5OTIyMzZ9.8FhfK1HjaJNbUU_GSndbsA2GZ1G7QFWiLa_JoK8r34g";
    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT (asiakasGetSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void RestApiDLL::asiakasGetSlot(QNetworkReply*)
{
    qDebug() << "RESTAPIDLL::asiakasGetSlot";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        qDebug() << "nimi=" + json_obj["nimi"].toString();
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
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        qDebug() << "nosto=" + json_obj["nosto"].toString();
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
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        qDebug() << "kortin numero=" + json_obj["kortin numero"].toString();
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
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        qDebug() << "tili=" + json_obj["tili"].toString();
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
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        qDebug() << "tilitiapahtumat=" + json_obj["tilitapahtumat"].toString();
    }
    reply->deleteLater();
    getManager->deleteLater();
}
