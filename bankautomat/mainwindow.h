#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "restapidll.h"
#include "pincodedll.h"
#include "serialportdll.h"
#include "nosto.h"
#include "tilitapahtumat.h"
#include "saldo.h"
#include <iostream>
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void getnumber(QString);
private slots:
    void on_bNosto_clicked();
    void on_bUlos_clicked();
    void on_bTilitapahtumat_clicked();
    void loginPostSlot(QNetworkReply *reply);
    void on_bSisaan_clicked();
    void korttiIdSlot(QByteArray);
    void tiliGetSlot (QNetworkReply *reply);
    void tiliGetSlotC (QNetworkReply *reply);
    void on_bSaldo_clicked();
    void on_bCredit_clicked();
    void on_textSaldoo_textChanged();
private:
    Ui::MainWindow *ui;
    PinCodeDLL *pPinCode;
    SerialPortDLL *serial;
    RestApiDLL *pRestApiDLL;
    Nosto *pNosto;
    Saldo *pSaldo;
    Tilitapahtumat *pTilitapahtumat;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray webtoken;
};
#endif // MAINWINDOW_H
