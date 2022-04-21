#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nosto.h"
#include "tilitapahtumat.h"
#include "saldo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bSaldo_clicked();

    void on_bNosto_clicked();
    void on_bUlos_clicked();

    void on_bTilitapahtumat_clicked();

private:
    Ui::MainWindow *ui;
    Nosto * pNosto;
    saldo * pSaldo;
    Tilitapahtumat * pTilitapahtumat;
};
#endif // MAINWINDOW_H
