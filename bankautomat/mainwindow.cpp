#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pPinCode = new PinCodeDLL;
    connect(pPinCode, SIGNAL(senttoexe(QString)),
            this, SLOT(getnumber(QString)));

    serial = new SerialPortDLL(this);
    connect(serial, SIGNAL(korttiIdSignal(QByteArray)),
            this, SLOT(korttiIdSlot(QByteArray)));

    pRestApiDLL = new RestApiDLL(this);


    pNosto = new Nosto;
    pSaldo = new Saldo;
    pTilitapahtumat = new Tilitapahtumat;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pRestApiDLL;
    delete serial;
    delete pPinCode;
    delete pNosto;
    delete pSaldo;
    delete pTilitapahtumat;
}

void MainWindow::getnumber(QString s)
{
    qDebug() << "Tama numero tuli nyt pincodedll:sta" + s;
}


void MainWindow::on_bSisaan_clicked()
{
    pPinCode->login();

    pRestApiDLL = new RestApiDLL(this);
    connect(pRestApiDLL, SIGNAL(LoginSignal(QNetworkReply*)),
            this, SLOT(loginPostSlot(QNetworkReply*)));

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


void MainWindow::loginPostSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    webtoken = response_data;
}


void MainWindow::on_bSaldo_clicked()
{
    QString site_url="http://localhost:3000/tili";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer " + webtoken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(tiliGetSlot(QNetworkReply*)));

    reply = getManager->get(request);

}

void MainWindow::on_bCredit_clicked()
{
    QString site_url="http://localhost:3000/tili";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer " + webtoken;
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(tiliGetSlotC(QNetworkReply*)));

    reply = getManager->get(request);
}

void MainWindow::tiliGetSlot (QNetworkReply *reply)
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

 ui->textSaldoo->setText(tili);

 reply->deleteLater();
 getManager->deleteLater();
}

void MainWindow::tiliGetSlotC (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"DATA : "+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tili;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        tili+=QString::number(json_obj["Credit"].toDouble());
 }

 ui->textCreditt->setText(tili);

 reply->deleteLater();
 getManager->deleteLater();
}


void MainWindow::korttiIdSlot(QByteArray)
{
    //tee jotain vastaanotetulla korttiID:lla
}


void MainWindow::on_bNosto_clicked()
{
    pNosto->exec();
}


void MainWindow::on_bTilitapahtumat_clicked()
{
    pTilitapahtumat->exec();
}


void MainWindow::on_bUlos_clicked()
{
    close();
}

void MainWindow::on_textSaldoo_textChanged()
{

}
