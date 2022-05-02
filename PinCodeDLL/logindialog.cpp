#include "logindialog.h"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_buttonBox_accepted()
{
    QString t = ui->lineEdit->text();
    qDebug() << "Lineedit: " + t;
    emit loginSignal(t);
}

