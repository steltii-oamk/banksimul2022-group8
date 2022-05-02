#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pPinCode = new PinCodeDLL;
    connect(pPinCode->logindialog, SIGNAL(loginSignal(QString)),
            this,SLOT(loginSlot(QString)));

    pNosto = new Nosto;
    pSaldo = new Saldo;
    pTilitapahtumat = new Tilitapahtumat;

}

MainWindow::~MainWindow()
{
    delete ui;
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
