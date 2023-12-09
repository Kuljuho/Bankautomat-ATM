#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent,
                       const QByteArray &token,
                       const QString &nimi,
                       const QString &id):
    QDialog(parent),
    ui(new Ui::tapahtumat),
    getManager(new QNetworkAccessManager(this)),
    token(token),
    nimi(nimi),
    id(id),
    currentPage(1)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->kayttajaNimi->setText(nimi);

    connect(ui->englishNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("finnish"); });
    connect(ui->nappiTakaisin, &QPushButton::clicked, this,
            &QDialog::close);
    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this,
            &tapahtumat::tapahtumatUlos);
}

tapahtumat::~tapahtumat()
{
    delete ui;
    if (getManager) {
        delete getManager;
    }
}

void tapahtumat::on_seuraavaNappi_clicked()
{
    if (currentPage < 4) {
        lataaTapahtumat(currentPage + 1);
    }
}

void tapahtumat::on_takaisinNappi_clicked()
{
    if (currentPage > 1) {
        lataaTapahtumat(currentPage - 1);
    }
}

void tapahtumat::lataaTapahtumat(int page)
{
    QString site_url =
        QString("http://localhost:3000/transaction/account%1/%2").arg(page).arg(id);
    QNetworkRequest request((site_url));

    request.setRawHeader("Authorization", token);

    connect(getManager, &QNetworkAccessManager::finished, this,
            &tapahtumat::kasitteleVastaus);
    reply = getManager->get(request);

    currentPage = page;
}

void tapahtumat::kasitteleVastaus(QNetworkReply *reply)
{
    if (reply->error()) {
        qDebug() << "Virhe verkkopyynnössä:" << reply->errorString();
        return;
    }

    QByteArray response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString transactions;

    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        QString tapahtumaTyyppi = json_obj["transactionType"].toString();
        double amount = json_obj["amount"].toDouble();
        QString dateTimeStr = json_obj["dateTime"].toString();

        tapahtumaTyyppi.replace("withdrawal", "Nosto   ");

        QDateTime dateTime = QDateTime::fromString(dateTimeStr,
                                                   Qt::ISODate);
        QString paivitettyAika =
            dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

        transactions += QString("%1 %2 %3 euroa\n").arg(tapahtumaTyyppi,
                                                        paivitettyAika,
                                                        QString::number(amount));
    }

    ui->tapahtumaKentta->setText(transactions);
    reply->deleteLater();
}

void tapahtumat::kielenVaihto(const QString &kielikoodi)
{
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}


