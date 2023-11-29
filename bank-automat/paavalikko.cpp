#include "paavalikko.h"
#include "ui_paavalikko.h"

#include <QRegularExpression>

paaValikko::paaValikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paaValikko)
{
    ui->setupUi(this);
    this->showFullScreen();
}

paaValikko::~paaValikko()
{
    delete ui;
}

void paaValikko::setToken(const QByteArray &newToken)
{
    token = newToken;
    qDebug()<<token;
}

void paaValikko::setId(const QString &newId)
{
    id = newId;
}

void paaValikko::on_nostoNappi_clicked()
{
    nostoPointteri = new nosto;
    nostoPointteri->show();
}

void paaValikko::on_lahjoitusNappi_clicked()
{
    lahjoitusPointteri = new lahjoitus;
    lahjoitusPointteri->show();
}

void paaValikko::on_saldoNappi_clicked()
{
    QString site_url="http://localhost:3000/account/saldo/"+id;
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeSaldo(QNetworkReply*)));
    reply = getManager->get(request);
}

void paaValikko::haeSaldo(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QString balance=json_obj["balance"].toString();

    saldoPointteri = new saldo(this);
    saldoPointteri->noudaSaldo(balance);
    saldoPointteri->show();


    reply->deleteLater();
    getManager->deleteLater();
}

void paaValikko::on_tapahtumatNappi_clicked()
{
    QString site_url="http://localhost:3000/transaction/account/"+id;
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat(QNetworkReply*)));
    reply = getManager->get(request);
}

void paaValikko::haeTilitapahtumat(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString transactions;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        transactions += json_obj["transactionType"].toString()+", "+QString::number(json_obj["amount"].toDouble())+", "+json_obj["dateTime"].toString()+"\n";
    }
    qDebug()<<transactions;
    tapahtumatPointteri = new tapahtumat(this);
    tapahtumatPointteri->noudaTapahtumat(transactions);
    tapahtumatPointteri->show();
    /*
    //testinä tämä
    QString testi1="tilin saldo on 1000 penniä";
    QString testi2="tilin saldo on -11 penniä";
    QString testi3="tilin saldo on 0 penniä";
    QString testi4="tilin saldo on 333 penniä";
    tapahtumatPointteri->noudaTapahtumat(testi1,testi2,testi3,testi4);
    */

    //tapahtumatPointteri->noudaTapahtumat(transaction);
    reply->deleteLater();
    getManager->deleteLater();
}


