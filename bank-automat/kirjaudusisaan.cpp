#include "kirjaudusisaan.h"
#include "mainwindow.h"
#include "ui_kirjaudusisaan.h"

kirjauduSisaan::kirjauduSisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjauduSisaan)
{
    ui->setupUi(this);
    this->showFullScreen();

    /*foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &kirjauduSisaan::on_numero_clicked);
        }
    }*/
}

kirjauduSisaan::~kirjauduSisaan()
{
    delete ui;
}

void kirjauduSisaan::kirjauduSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    qDebug()<<response_data;
    if(response_data!="false" && response_data.length()>20) {
        qDebug()<<"Login Ok";
        token="Bearer "+response_data;
        paaValikkoPointteri = new paaValikko(this);
        paaValikkoPointteri->setToken(token);
        paaValikkoPointteri->show();
    } else {
        qDebug()<<"Väärä salasana";
        //paaValikkoPointteri = new paaValikko(this);
        //paaValikkoPointteri->setToken(token); // muista poistaa
        //paaValikkoPointteri->show(); // muista poistaa
    }
}

void kirjauduSisaan::on_nappiKirjaudu_clicked()
{
    QString kayttaja = ui->tunnusKayttaja->text();
    QString salasana = ui->salasanaKayttaja->text();

    QJsonObject jsonObj;
    jsonObj.insert("cardNumber",kayttaja);
    jsonObj.insert("pin",salasana);


    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");


    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(kirjauduSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}

/*void kirjauduSisaan::on_numero_clicked()
{
    qDebug()<<"1";
}*/

