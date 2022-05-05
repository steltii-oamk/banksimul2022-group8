#include "saldo.h"
#include "ui_saldo.h"
#include "restapidll.h"

Saldo::Saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}

/*
void Saldo::on_sSaldo_clicked()
{
    QString site_url="http://localhost:3000/tili";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer " + webtoken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(tiliGetSlot(QNetworkReply*)));

    reply = getManager->get(request);

}

void Saldo::tiliGetSlot (QNetworkReply *reply)
{
 response_data=reply->readAll();
 qDebug()<<"DATA : "+response_data;
 QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
 QJsonArray json_array = json_doc.array();
 QString tili;
 foreach (const QJsonValue &value, json_array) {
     QJsonObject json_obj = value.toObject();
     tili+=QString::number(json_obj["Saldo"].toDouble());
}

 ui->textSaldo->setText(tili);

 reply->deleteLater();
 getManager->deleteLater();
}

*/
void Saldo::on_sClose_clicked()
{
    close();
}

void Saldo::on_sSaldo_clicked()
{

}

void Saldo::tiliGetSlot(QNetworkReply *reply)
{

}

