#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "paavalikko.h"

tapahtumat::tapahtumat(QWidget *parent):
    QDialog(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    paaValikko *valikkoPointteri;
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::noudaTapahtumat(QString tilinTapahtumat)
{
    ui->tapahtumaKentta->setText(tilinTapahtumat);
}

void tapahtumat::setNameTapahtumat(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void tapahtumat::on_seuraavaNappi_clicked()
{
    QString site_url="http://localhost:3000/transaction/account2/"+getId2();
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(getToken2()));

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

QString tapahtumat::getId2() const
{
    return id2;
}

void tapahtumat::setId2(const QString &newId2)
{
    id2 = newId2;
}

QByteArray tapahtumat::getToken2() const
{
    return token2;
}

void tapahtumat::setToken2(const QByteArray &newToken2)
{
    token2 = newToken2;
}

void tapahtumat::on_takaisinNappi2_clicked()
{
    QString site_url="http://localhost:3000/transaction/account/"+getId2();
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(getToken2()));

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


