#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include <QDialog>
#include <QDebug>

namespace Ui {class loginDialog; }

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = nullptr);
    ~loginDialog();

signals:
    void loginSignal(QString);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::loginDialog *ui;

};

#endif // LOGINDIALOG_H
