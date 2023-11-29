#include "kirjaudusisaan.h"
#include "mainwindow.h"
#include "ui_kirjaudusisaan.h"

kirjauduSisaan::kirjauduSisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjauduSisaan)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->tunnusKayttaja->setFocus();
    connect(ui->tyhjennaNappi, &QPushButton::clicked, this, &kirjauduSisaan::numero_clicked);
    connect(ui->pyyhiNappi, &QPushButton::clicked, this, &kirjauduSisaan::numero_clicked);
    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &kirjauduSisaan::numero_clicked);
        }
    }
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
        paaValikkoPointteri = new paaValikko(this);
<<<<<<< Updated upstream
        //paaValikkoPointteri->setToken(token); // muista poistaa
=======
>>>>>>> Stashed changes
        paaValikkoPointteri->show(); // muista poistaa
    }
}

<<<<<<< Updated upstream
void kirjauduSisaan::on_nappiKirjaudu_clicked()
=======
void kirjauduSisaan::getBookSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    paaValikkoPointteri->setId(response_data);
    paaValikkoPointteri->show();
}

void kirjauduSisaan::nappiKirjaudu_clicked()
>>>>>>> Stashed changes
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

void kirjauduSisaan::numero_clicked()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    if(button)
    {
        if(button->objectName() == "pyyhiNappi") {
            QLineEdit *currentLineEdit = nullptr;
            if(ui->tunnusKayttaja->hasFocus()) {
                currentLineEdit = ui->tunnusKayttaja;
            } else if(ui->salasanaKayttaja->hasFocus()) {
                currentLineEdit = ui->salasanaKayttaja;
            }

            if(currentLineEdit && !currentLineEdit->text().isEmpty()) {
                QString text = currentLineEdit->text();
                text.chop(1);
                currentLineEdit->setText(text);
            }
        }
        else if(button->objectName() == "tyhjennaNappi") {
            if(ui->tunnusKayttaja->hasFocus()) {
                ui->tunnusKayttaja->clear();
            } else if(ui->salasanaKayttaja->hasFocus()) {
                ui->salasanaKayttaja->clear();
            }
        }
        else {
            if(ui->tunnusKayttaja->hasFocus()) {
                ui->tunnusKayttaja->setText(ui->tunnusKayttaja->text().append(button->text()));
                if(ui->tunnusKayttaja->text().length() == 16) {
                    ui->salasanaKayttaja->setFocus();
                }
            }
            else if(ui->salasanaKayttaja->hasFocus()) {
                ui->salasanaKayttaja->setText(ui->salasanaKayttaja->text().append(button->text()));
            }
        }
    }
}
