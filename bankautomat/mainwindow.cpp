#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pNosto = new Nosto;
    pSaldo = new saldo;
    pTilitapahtumat = new Tilitapahtumat;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pNosto;
    delete pTilitapahtumat;
}


void MainWindow::on_bSaldo_clicked()
{

}


void MainWindow::on_bNosto_clicked()
{
    pNosto->exec();
}


void MainWindow::on_bUlos_clicked()
{

}

void MainWindow::on_bTilitapahtumat_clicked()
{
    pTilitapahtumat->exec();
}

