#include "paavalikko.h"
#include "ui_paavalikko.h"

#include <QRegularExpression>
#include "kirjaudusisaan.h"

paaValikko::paaValikko(QWidget *parent, const QByteArray &token, const QString &nimi, const QString &id):
    QDialog(parent),
    token(token), nimi(nimi), id(id),
    ui(new Ui::paaValikko)
{
    ui->setupUi(this);
    this->showFullScreen();
    //kirjauduSisaan *kirjauduSisaanPointteriC;

    //name = kirjauduSisaanPointteriC->nimi;
    qDebug()<<token,nimi,id;
    ui->kayttajaNimi->setText(nimi);
}

paaValikko::~paaValikko()
{
    delete ui;
}

void paaValikko::on_nostoNappi_clicked()
{
    nostoPointteri = new nosto(nullptr, token, nimi, id);
    nostoPointteri->show();
}

void paaValikko::on_lahjoitusNappi_clicked()
{
    lahjoitusPointteri = new lahjoitus(nullptr, token, nimi, id);
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

    saldoPointteri = new saldo(nullptr, token, nimi, id);
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
    tapahtumatPointteri = new tapahtumat(nullptr, token, nimi, id);
    tapahtumatPointteri->noudaTapahtumat(transactions);
    tapahtumatPointteri->show();


    reply->deleteLater();
    getManager->deleteLater();
}
