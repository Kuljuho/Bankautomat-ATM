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
    saldoPointteri = new saldo;
    saldoPointteri->show();

    QString site_url="http://localhost:3000/account/saldo/"+id;
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);


    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeSaldo(QNetworkReply*)));
    //ui->saldoKentta->setText("Joopa joo");
    reply = getManager->get(request);

}

void paaValikko::on_tapahtumatNappi_clicked()
{
    tapahtumatPointteri = new tapahtumat;
    tapahtumatPointteri->show();
}

void paaValikko::haeSaldo(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"TOIMII";
    qDebug()<<"DATA: " + response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QString balance=json_obj["balance"].toString();


    saldoPointteri->noudaSaldo(balance);
    reply->deleteLater();
    getManager->deleteLater();
}

void paaValikko::setId(const QString &newId)
{
    id = newId;
}


