#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "paavalikko.h"

tapahtumat::tapahtumat(QWidget *parent, const QByteArray &token, const QString &nimi, const QString &id):
    QDialog(parent),
    token(token), nimi(nimi), id(id),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->nappiTakaisin, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this, &tapahtumat::tapahtumatUlos);
    paaValikko *valikkoPointteri;
    ui->kayttajaNimi->setText(nimi);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::noudaTapahtumat(QString tilinTapahtumat)
{
    ui->tapahtumaKentta->setText(tilinTapahtumat);
}

void tapahtumat::on_seuraavaNappi_clicked()
{
    QString site_url="http://localhost:3000/transaction/account2/"+id;
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat2(QNetworkReply*)));
    reply = getManager->get(request);
}

void tapahtumat::haeTilitapahtumat2(QNetworkReply *reply)
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
    ui->tapahtumaKentta->setText(transactions);


    reply->deleteLater();
    getManager->deleteLater();
}

void tapahtumat::on_takaisinNappi_clicked()
{
    QString site_url="http://localhost:3000/transaction/account/"+id;
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat1(QNetworkReply*)));
    reply = getManager->get(request);
}

void tapahtumat::haeTilitapahtumat1(QNetworkReply *reply)
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
    ui->tapahtumaKentta->setText(transactions);

    reply->deleteLater();
    getManager->deleteLater();
}


