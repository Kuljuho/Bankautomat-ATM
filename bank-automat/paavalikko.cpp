#include "paavalikko.h"
#include "ui_paavalikko.h"

#include <QRegularExpression>
#include "kirjaudusisaan.h"

paaValikko::paaValikko(QWidget *parent,
                       const QByteArray &token,
                       const QString &nimi,
                       const QString &id,
                       const QString &accountType,
                       const QString &idcard):
    QDialog(parent),
    ui(new Ui::paaValikko),
    token(token),
    nimi(nimi),
    id(id),
    accountType(accountType),
    idcard(idcard)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->kayttajaNimi->setText(nimi);

    connect(ui->englishNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("finnish"); });
    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this, &paaValikko::ulosKirjautuminen);
}

paaValikko::~paaValikko()
{
    delete ui;
}

void paaValikko::on_nostoNappi_clicked()
{
    nostoPointteri = new nosto(nullptr, token, nimi, id, accountType, idcard);
    connect(nostoPointteri, &nosto::haluaisinKirjautuaUlos, this, &paaValikko::ulosKirjautuminen);
    connect(nostoPointteri, &nosto::vaihdaKieli, this, &paaValikko::vaihdaKieli);
    nostoPointteri->exec();
}

void paaValikko::on_lahjoitusNappi_clicked()
{
    lahjoitusPointteri = new lahjoitus(nullptr, token, nimi, id, accountType, idcard);
    connect(lahjoitusPointteri, &lahjoitus::voisinKirjautuaUlos, this, &paaValikko::ulosKirjautuminen);
    connect(lahjoitusPointteri, &lahjoitus::vaihdaKieli, this, &paaValikko::vaihdaKieli);
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
    connect(saldoPointteri, &saldo::saldoKirjautuuUlos, this, &paaValikko::ulosKirjautuminen);
    connect(saldoPointteri, &saldo::vaihdaKieli, this, &paaValikko::vaihdaKieli);
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
            QString transactionType = json_obj["transactionType"].toString();
            double amount = json_obj["amount"].toDouble();
            QString dateTimeStr = json_obj["dateTime"].toString();

            transactionType.replace("withdrawal", "Nosto   ");

            QDateTime dateTime = QDateTime::fromString(dateTimeStr, Qt::ISODate);
            QString paivitettyAika = dateTime.toString("    d.M.yyyy    'klo' HH:mm    ");

            transactions += QString("%1 %2 %3 euroa\n").arg(transactionType, paivitettyAika, QString::number(amount));
        }
    qDebug()<<transactions;
    tapahtumatPointteri = new tapahtumat(nullptr, token, nimi, id);
    connect(tapahtumatPointteri, &tapahtumat::tapahtumatUlos, this, &paaValikko::ulosKirjautuminen);
    connect(tapahtumatPointteri, &tapahtumat::vaihdaKieli, this, &paaValikko::vaihdaKieli);
    tapahtumatPointteri->noudaTapahtumat(transactions);
    tapahtumatPointteri->show();


    reply->deleteLater();
    getManager->deleteLater();
}

void paaValikko::kielenVaihto(const QString &kielikoodi)
{
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}
