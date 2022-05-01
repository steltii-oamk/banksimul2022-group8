#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pNosto = new Nosto;
    pSaldo = new Saldo;
    pTilitapahtumat = new Tilitapahtumat;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pNosto;
    delete pSaldo;
    delete pTilitapahtumat;
}

void MainWindow::on_bSaldo_clicked()
{
    pSaldo->exec();
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
    this->close();
}


void MainWindow::on_btnShowBooks_clicked()
{
    QString site_url="http://localhost:3000/tilitapahtumat";
    QNetworkRequest request((site_url));
    //BASIC AUTENTIKOINTI ALKU
    QString credentials="admin:1234";
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    //BASIC AUTENTIKOINTI LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getBookSlot(QNetworkReply*)));

    reply = getManager->get(request);

}

void MainWindow::getBookSlot (QNetworkReply *reply)
{
 response_data=reply->readAll();
 qDebug()<<"DATA : "+response_data;
 QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
 QJsonArray json_array = json_doc.array();
 QString book;
 foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    book+=QString::number(json_obj["id_book"].toInt())+", "+json_obj["name"].toString()+", "+json_obj["author"].toString()+"\r";
 }

 ui->textBooks->setText(book);

 reply->deleteLater();
 getManager->deleteLater();
}
