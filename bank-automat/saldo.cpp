#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    this->showFullScreen();

    QString site_url="http://localhost:3000/saldo/id";
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(haeSaldo(QNetworkReply*)));
    ui->saldoKentta->setText("Joopa joo");
    reply = getManager->get(request);
}

saldo::~saldo()
{
    delete ui;
}

void saldo::haeSaldo()
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QString balance=json_obj["balance"].toString();
    saldoPointteri = new saldo(this);
    ui->saldoKentta->setText("Joopa joo");
    reply->deleteLater();
    getManager->deleteLater();
}
