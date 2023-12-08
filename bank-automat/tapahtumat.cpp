#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "paavalikko.h"

tapahtumat::tapahtumat(QWidget *parent, const QByteArray &token, const QString &nimi, const QString &id):
    QDialog(parent),
    ui(new Ui::tapahtumat), token(token), nimi(nimi),
    id(id)
{
    ui->setupUi(this);
    this->showFullScreen();
    connect(ui->englishNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("finnish"); });
    connect(ui->nappiTakaisin, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this, &tapahtumat::tapahtumatUlos);
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
    switch (currentPage){
    case 1:{
        QString site_url="http://localhost:3000/transaction/account2/"+id;
        QNetworkRequest request((site_url));

        request.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat2(QNetworkReply*)));
        reply = getManager->get(request);
        currentPage++;
        break;
    }
    case 2:{
        QString site_url3="http://localhost:3000/transaction/account3/"+id;
        QNetworkRequest request3((site_url3));

        request3.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat3(QNetworkReply*)));
        reply = getManager->get(request3);
        currentPage++;
        break;
    }
    case 3:{
        QString site_url4="http://localhost:3000/transaction/account4/"+id;
        QNetworkRequest request4((site_url4));

        request4.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat4(QNetworkReply*)));
        reply = getManager->get(request4);
        currentPage++;
        break;
    }
    }
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
            QString transactionType = json_obj["transactionType"].toString();
            double amount = json_obj["amount"].toDouble();
            QString dateTimeStr = json_obj["dateTime"].toString();

            transactionType.replace("withdrawal", "Nosto   ");

            QDateTime dateTime = QDateTime::fromString(dateTimeStr, Qt::ISODate);
            QString paivitettyAika = dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

            transactions += QString("%1 %2 %3 euroa\n").arg(transactionType, paivitettyAika, QString::number(amount));
        }
    currentPage = 1;
    qDebug()<<transactions;
    ui->tapahtumaKentta->setText(transactions);

    reply->deleteLater();
    getManager->deleteLater();
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
            QString transactionType = json_obj["transactionType"].toString();
            double amount = json_obj["amount"].toDouble();
            QString dateTimeStr = json_obj["dateTime"].toString();

            transactionType.replace("withdrawal", "Nosto   ");

            QDateTime dateTime = QDateTime::fromString(dateTimeStr, Qt::ISODate);
            QString paivitettyAika = dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

            transactions += QString("%1 %2 %3 euroa\n").arg(transactionType, paivitettyAika, QString::number(amount));
        }

    currentPage = 2;

    qDebug()<<transactions;
    ui->tapahtumaKentta->setText(transactions);


    reply->deleteLater();
    getManager->deleteLater();
}

void tapahtumat::haeTilitapahtumat3(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString transactions;
    foreach (const QJsonValue &value, json_array)
        {
            QJsonObject json_obj = value.toObject();
            QString transactionType = json_obj["transactionType"].toString();
            double amount = json_obj["amount"].toDouble();
            QString dateTimeStr = json_obj["dateTime"].toString();

            transactionType.replace("withdrawal", "Nosto   ");

            QDateTime dateTime = QDateTime::fromString(dateTimeStr, Qt::ISODate);
            QString paivitettyAika = dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

            transactions += QString("%1 %2 %3 euroa\n").arg(transactionType, paivitettyAika, QString::number(amount));
        }

    currentPage = 3;

    qDebug()<<transactions;
    ui->tapahtumaKentta->setText(transactions);


    reply->deleteLater();
    getManager->deleteLater();
}

void tapahtumat::haeTilitapahtumat4(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString transactions;
    foreach (const QJsonValue &value, json_array)
        {
            QJsonObject json_obj = value.toObject();
            QString transactionType = json_obj["transactionType"].toString();
            double amount = json_obj["amount"].toDouble();
            QString dateTimeStr = json_obj["dateTime"].toString();

            transactionType.replace("withdrawal", "Nosto   ");

            QDateTime dateTime = QDateTime::fromString(dateTimeStr, Qt::ISODate);
            QString paivitettyAika = dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

            transactions += QString("%1 %2 %3 euroa\n").arg(transactionType, paivitettyAika, QString::number(amount));
        }

    currentPage = 4;

    qDebug()<<transactions;
    ui->tapahtumaKentta->setText(transactions);


    reply->deleteLater();
    getManager->deleteLater();
}

void tapahtumat::on_takaisinNappi_clicked()
{
    switch (currentPage){
    case 1:
        break;
    case 2:{
        QString site_url="http://localhost:3000/transaction/account/"+id;
        QNetworkRequest request((site_url));

        request.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat1(QNetworkReply*)));
        reply = getManager->get(request);
        currentPage--;
        break;
    }
    case 3:{
        QString site_url2="http://localhost:3000/transaction/account2/"+id;
        QNetworkRequest request2((site_url2));

        request2.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat2(QNetworkReply*)));
        reply = getManager->get(request2);
        currentPage--;
        break;
    }
    case 4:{
        QString site_url3="http://localhost:3000/transaction/account3/"+id;
        QNetworkRequest request3((site_url3));

        request3.setRawHeader(QByteArray("Authorization"),(token));

        getManager = new QNetworkAccessManager(this);

        connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat3(QNetworkReply*)));
        reply = getManager->get(request3);
        currentPage--;
        break;
    }
    }
}


void tapahtumat::kielenVaihto(const QString &kielikoodi)
{
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}


