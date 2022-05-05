#ifndef SALDO_H
#define SALDO_H
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDialog>

namespace Ui {
class Saldo;
}

class Saldo : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();

private slots:
    void on_sClose_clicked();

    void on_sSaldo_clicked();

    void tiliGetSlot (QNetworkReply *reply);


private:
    Ui::Saldo *ui;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QByteArray webtoken;
};

#endif // SALDO_H
