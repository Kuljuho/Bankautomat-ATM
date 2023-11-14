#include "kirjaudusisaan.h"
#include "mainwindow.h"
#include "ui_kirjaudusisaan.h"

kirjauduSisaan::kirjauduSisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjauduSisaan)
{
    ui->setupUi(this);
}

kirjauduSisaan::~kirjauduSisaan()
{
    delete ui;
}

void kirjauduSisaan::kirjauduSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    if(response_data!="false" && response_data.length()>20) {
        qDebug()<<"Login Ok";
        paavalikko = new paaValikko(this);
        paavalikko->show();
    } else {
        qDebug()<<"Väärä salasana";
    }
}

void kirjauduSisaan::on_nappiKirjaudu_clicked()
{
    QString kayttaja = ui->kirjauduTeksti->text();
    QString salasana = ui->salasanaKayttaja->text();

    QJsonObject jsonObj;
    jsonObj.insert("kayttaja",kayttaja);
    jsonObj.insert("salasana",salasana);


    QString site_url="http://localhost:3000/kirjaudu";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(kirjauduSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());

    paavalikko = new paaValikko(this);
    paavalikko->show();
}

