#include "onnistui.h"
#include "paavalikko.h"
#include "ui_onnistui.h"
#include <iostream>

onnistui::onnistui(QWidget *parent,
                   const QByteArray &token,
                   const QString &nimi,
                   const QString &id,
                   const QString &nostoSumma,
                   const QString &lahjoitusKohde,
                   const QString &aktiivinenKieli,
                   const QString &accountType,
                   const QString &idcard):
    QDialog(parent),
    voiAvataPaavalikon(false),
    ui(new Ui::onnistui),
    token(token),
    nimi(nimi),
    id(id),
    aktiivinenKieli(aktiivinenKieli),
    accountType(accountType),
    idcard(idcard)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->lahjoitusKohdeLineEdit->setText(lahjoitusKohde);
    ui->yhteensaQline->setText(nostoSumma);
    ui->nostoQLine_2->setText(nostoSumma);
    ui->kayttajaNimi->setText(nimi);

    connect(ui->englishNappi, &QPushButton::clicked, this,
                                [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this,
                                [this]() { kielenVaihto("finnish"); });

    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this,
                                   &onnistui::onnistuiUlos);
    connect(ui->kirjauduUlosNappi_2, &QPushButton::clicked, this,
                                     &onnistui::onnistuiUlos);
    connect(ui->onnistuiKylla, &QPushButton::clicked, this,
                                &onnistui::kyllaPainettu);
    connect(ui->onnistuiKylla2, &QPushButton::clicked, this,
                                &onnistui::kyllaPainettu);
    connect(ui->onnistuiEi, &QPushButton::clicked, this,
                            &onnistui::eiPainettu);
    connect(ui->onnistuiEi2, &QPushButton::clicked, this,
                             &onnistui::eiPainettu);
    connect(ui->paaValikkoonNappi, &QPushButton::clicked, this,
                                    &onnistui::avaa_paaValikko);
    connect(ui->paaValikkoonNappi_2, &QPushButton::clicked, this,
                                     &onnistui::avaa_paaValikko);
}

onnistui::~onnistui()
{

}

void onnistui::avaa_paaValikko() {
    if(voiAvataPaavalikon) {
        paaValikko *paaValikkoPointteri = new paaValikko(this, token, nimi,
                                                    id, accountType, idcard);
        connect(paaValikkoPointteri, &paaValikko::ulosKirjautuminen, this,
                &onnistui::onnistuiUlos);
        connect(paaValikkoPointteri, &paaValikko::vaihdaKieli, this,
                &onnistui::vaihdaKieli);
        paaValikkoPointteri->show();
    }
}

void onnistui::asetaTila(Tila tila) {
    nykyinenTila = tila;
    switch (nykyinenTila) {
    case Nosto:
        ui->stackedWidget->setCurrentIndex(1);
        break;
    case Lahjoitus:
        ui->stackedWidget->setCurrentIndex(0);
        break;
    case Suoritettu:
        break;
    case Epaonnistui:
        break;
    }
}

void onnistui::naytaWidget(QShowEvent *event) {
    QDialog::showEvent(event);
}

void onnistui::paivitaUI() {
    switch (nykyinenTila) {
    case Nosto:
        break;
    case Lahjoitus:
        break;
    case Suoritettu:
        ui->stackedWidget->setCurrentIndex(2);
        break;
    case Epaonnistui:
        ui->stackedWidget->setCurrentIndex(3);
        break;
    }
}

void onnistui::kyllaPainettu() {
    nostettavaSumma = ui->nostoQLine_2->text();
    nostettavaSumma.remove(" euroa");
    nostettavaSumma.toFloat();
    qDebug()<<nostettavaSumma;

    QJsonObject jsonObj;
    jsonObj.insert("first_id",id);
    jsonObj.insert("amount",nostettavaSumma);
    jsonObj.insert("idcard",idcard);

    QString site_url="http://localhost:3000/transaction/withdraw/"+accountType;
    QNetworkRequest request((site_url));

    request.setRawHeader(QByteArray("Authorization"),(token));
    request.setHeader(QNetworkRequest::ContentTypeHeader,
                      "application/json");

    postSaldoManager = new QNetworkAccessManager(this);
    connect(postSaldoManager, SIGNAL(finished(QNetworkReply*)), this,
                              SLOT(nostoSlot(QNetworkReply*)));

    reply = postSaldoManager->post(request,
                             QJsonDocument(jsonObj).toJson());

}

void onnistui::nostoSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    QString affectedRows=response_data;
    qDebug()<<affectedRows;

    if (affectedRows == "1") {
        nykyinenTila = Suoritettu;
        voiAvataPaavalikon = true;
        paivitaUI();
    } else {
        nykyinenTila = Epaonnistui;
        voiAvataPaavalikon = true;
        paivitaUI();
    }
}

void onnistui::eiPainettu() {
    nykyinenTila = Epaonnistui;
    voiAvataPaavalikon = true;
    paivitaUI();
}

void onnistui::paivitaYhteensaTeksti() {
    QString yhteensaTeksti = ui->yhteensaQline->text();
    yhteensaTeksti.remove(" euroa");
    yhteensaTeksti.remove(" euros");

    if (aktiivinenKieli == "english") {
        yhteensaTeksti.append(" euros");
    } else {
        yhteensaTeksti.append(" euroa");
    }

    ui->yhteensaQline->setText(yhteensaTeksti);
}

void onnistui::kielenVaihto(const QString &kielikoodi)
{
    aktiivinenKieli = kielikoodi;
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
    paivitaYhteensaTeksti();
}

