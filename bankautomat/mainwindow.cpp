#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pPinCode = new PinCodeDLL;
    connect(pPinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSlot(QString)));

    serial = new SerialPortDLL(this);
    connect(serial, SIGNAL(korttiIdSignal(QByteArray)),
            this, SLOT(korttiIdSlot(QByteArray)));

    pNosto = new Nosto;
    pSaldo = new Saldo;
    pTilitapahtumat = new Tilitapahtumat;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete serial;
    delete pPinCode;
    delete pNosto;
    delete pSaldo;
    delete pTilitapahtumat;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Nappia painettu";
    pPinCode->tulostaTerveisia();
    pPinCode->login();
}


void MainWindow::loginSlot(QString t)
{
    qDebug() << "mainwindow vastaanotti " + t;
}

void MainWindow::korttiIdSlot(QByteArray)
{
    //tee jotain vastaanotetulla korttiID:lla
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
    close();
}
