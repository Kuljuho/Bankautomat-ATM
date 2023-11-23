#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    this->showFullScreen();


    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
}

saldo::~saldo()
{
    delete ui;
}

void saldo::noudaSaldo(QString tilinSaldo)
{
    ui->saldoKentta->setText(tilinSaldo);
}

/*void saldo::haeSaldo(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"TOIMII";
    //qDebug()<<"DATA: " + response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QString balance=json_obj["balance"].toString();
    ui->saldoKentta->setText("Joopa joo");
    ui->saldoKentta->setText(balance);
    reply->deleteLater();
    getManager->deleteLater();
}
/*
void saldo::on_saldoNappi_clicked()
{
    QString site_url="http://localhost:3000/saldo/4";
    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);


    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(haeSaldo(QNetworkReply*)));
    //ui->saldoKentta->setText("Joopa joo");
    reply = getManager->get(request);
}*/
