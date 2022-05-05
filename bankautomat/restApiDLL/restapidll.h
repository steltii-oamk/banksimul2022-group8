#ifndef RESTAPIDLL_H
#define RESTAPIDLL_H

#include <qobject.h>
#include "restApiDLL_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class RESTAPIDLL_EXPORT RestApiDLL : public QObject
{
    Q_OBJECT
public:
    RestApiDLL(QObject *parent);
    ~RestApiDLL();



    void getAsiakas(QString id);
    void getTili(QString id);
    void getKortti(QString id);
    void getTili_has_Asiakas(QString id);
    void getTiliTapahtumat(QString id);

private slots:
    void asiakasGetSlot(QNetworkReply*);
    void tiliGetSlot(QNetworkReply*);
    void korttiGetSlot(QNetworkReply*);
    void tili_has_asiakasGetSlot(QNetworkReply*);
    void tilitapahtumatGetSlot(QNetworkReply*);

private:
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;

};

#endif // RESTAPIDLL_H
