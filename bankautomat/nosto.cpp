#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_nClose_clicked()
{
    close();
}

