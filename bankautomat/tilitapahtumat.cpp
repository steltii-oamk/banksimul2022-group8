#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::on_tClose_clicked()
{
    close();
}

