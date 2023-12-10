#include "kirjaudusisaan.h"
#include "ui_kirjaudusisaan.h"

kirjauduSisaan::kirjauduSisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjauduSisaan)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->tunnusKayttaja->setFocus();
    ui->errorLabel->setText("");
    ui->errorLabel->setVisible(false);

    connect(ui->englishNappi, &QPushButton::clicked, this,
                            [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this,
                            [this]() { kielenVaihto("finnish"); });
    connect(ui->nappiKirjaudu, &QPushButton::clicked, this,
                               &kirjauduSisaan::nappiKirjaudu_clicked);
    connect(ui->tyhjennaNappi, &QPushButton::clicked, this,
                               &kirjauduSisaan::numero_clicked);
    connect(ui->pyyhiNappi, &QPushButton::clicked, this,
                            &kirjauduSisaan::numero_clicked);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this,
                            &kirjauduSisaan::numero_clicked);
        }
    }
}

kirjauduSisaan::~kirjauduSisaan()
{
    delete ui;
    if (reply) {
        delete reply;
    }
}

void kirjauduSisaan::kirjauduUlos()
{
    this->token.clear();
    this->nimi.clear();
    this->id.clear();
    foreach(QWidget *widget, QApplication::topLevelWidgets()) {
        if(widget != this && widget->isVisible()) {
            widget->hide();
        }
    }
    ui->tunnusKayttaja->clear();
    ui->salasanaKayttaja->clear();
    ui->tunnusKayttaja->setFocus();
    ui->errorLabel->setVisible(false);
    this->show();
}

void kirjauduSisaan::nappiKirjaudu_clicked()
{
    ui->errorLabel->setVisible(false);
    kayttaja = ui->tunnusKayttaja->text();
    QString salasana = ui->salasanaKayttaja->text();

    if (kayttaja.isEmpty() || salasana.isEmpty()) {
        if (aktiivinenKieli == "english") {
            QMessageBox::warning(this, "Filling requirement",
                                 "All fields must be filled");
            ui->tunnusKayttaja->setFocus();
        } else {
            QMessageBox::warning(this, "Täyttövaatimus",
                                 "Kaikki kentät on täytettävä");
            ui->tunnusKayttaja->setFocus();
        }
        return;
    }

    QJsonObject jsonObj;
    jsonObj.insert("cardNumber",kayttaja);
    jsonObj.insert("pin",salasana);

    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader,
                      "application/json");

    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished(QNetworkReply*)), this,
                         SLOT(kirjauduSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}

void kirjauduSisaan::kirjauduSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    qDebug()<<response_data;
    if(response_data!="false" && response_data.length()>20) {
        qDebug()<<"Login Ok";
        token="Bearer "+response_data;
        QString site_url="http://localhost:3000/getidaccount/"+kayttaja;
        QNetworkRequest request((site_url));
        //WEBTOKEN ALKU
        QByteArray myToken=token;
        request.setRawHeader(QByteArray("Authorization"),(myToken));
        //WEBTOKEN LOPPU

        manager = new QNetworkAccessManager(this);
        connect(manager, SIGNAL(finished(QNetworkReply*)),this,
                        SLOT(getIdSlot(QNetworkReply*)));
        reply = manager->get(request);

    } else {
        qDebug()<<"Väärä salasana";
        ui->errorLabel->setVisible(true);
        if (aktiivinenKieli == "english") {
            ui->errorLabel->setText("Wrong pin code, card will lock after third attempt");
        } else { ui->errorLabel->setText("Väärä pin-koodi, kolmannella kerralla kortti lukittuu");
        }
        ui->tunnusKayttaja->clear();
        ui->salasanaKayttaja->clear();
        ui->tunnusKayttaja->setFocus();
    }
}

void kirjauduSisaan::getIdSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    id = response_data;

    QString site_url="http://localhost:3000/getname/"+kayttaja;
    QNetworkRequest request((site_url));
    //request.setRawHeader(QByteArray("Authorization"),(token));

    getNameManager = new QNetworkAccessManager(this);
    connect(getNameManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(getNameSlot(QNetworkReply*)));
    reply = getNameManager->get(request);
    ui->tunnusKayttaja->clear();
    ui->salasanaKayttaja->clear();
}

void kirjauduSisaan::getNameSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    nimi=json_obj["name"].toString();

    QString site_url="http://localhost:3000/getIdcard/"+id;
    QNetworkRequest request((site_url));

    //request.setRawHeader(QByteArray("Authorization"),(token));

    getIdcardManager = new QNetworkAccessManager(this);
    connect(getIdcardManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(getIdcardSlot(QNetworkReply*)));
    reply = getIdcardManager->get(request);
}

void kirjauduSisaan::getIdcardSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    idcard = response_data;
    qDebug()<<idcard;

    QString site_url="http://localhost:3000/getaccounttype/"+id;
    QNetworkRequest request((site_url));

    //request.setRawHeader(QByteArray("Authorization"),(token));

    getAccountTypeManager = new QNetworkAccessManager(this);
    connect(getAccountTypeManager, SIGNAL(finished(QNetworkReply*)), this,
            SLOT(getAccountTypeSlot(QNetworkReply*)));
    reply = getAccountTypeManager->get(request);
}

void kirjauduSisaan::getAccountTypeSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    accountType=json_obj["accountType"].toString();

    //request.setRawHeader(QByteArray("Authorization"),(token));

    qDebug()<<accountType;
    if (accountType == "credit") {
        creditvalikkoPointteri = new creditvalikko(nullptr, token, nimi,
                                                   id, accountType, idcard);
        ui->tunnusKayttaja->clear();
        ui->salasanaKayttaja->clear();
        connect(creditvalikkoPointteri, &creditvalikko::creditUlos, this,
                &kirjauduSisaan::kirjauduUlos);
        connect(creditvalikkoPointteri, &creditvalikko::vaihdaKieli, this,
                &kirjauduSisaan::vaihdaKieli);
        creditvalikkoPointteri->show();
    } else {
        paaValikkoPointteri = new paaValikko(nullptr, token, nimi,
                                             id, accountType, idcard);
        ui->tunnusKayttaja->clear();
        ui->salasanaKayttaja->clear();
        connect(paaValikkoPointteri, &paaValikko::ulosKirjautuminen, this,
                &kirjauduSisaan::kirjauduUlos);
        connect(paaValikkoPointteri, &paaValikko::vaihdaKieli, this,
                &kirjauduSisaan::vaihdaKieli);
        paaValikkoPointteri->show();
    }
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
                ui->tunnusKayttaja->setText(ui->tunnusKayttaja->text().
                                            append(button->text()));
                if(ui->tunnusKayttaja->text().length() == 16) {
                    ui->salasanaKayttaja->setFocus();
                }
            }
            else if(ui->salasanaKayttaja->hasFocus()) {
                ui->salasanaKayttaja->setText(ui->salasanaKayttaja->text().
                                              append(button->text()));
            }
        }
    }
}

void kirjauduSisaan::kielenVaihto(const QString &kielikoodi)
{
    aktiivinenKieli = kielikoodi;
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
    ui->tunnusKayttaja->setFocus();
}

