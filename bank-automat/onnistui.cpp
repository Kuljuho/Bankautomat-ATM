#include "onnistui.h"
#include "paavalikko.h"
#include "ui_onnistui.h"
#include <iostream>

onnistui::onnistui(QWidget *parent,
                   const QByteArray &token,
                   const QString &nimi,
                   const QString &id,
                   const QString &lahjoitusSumma,
                   const QString &nostoSumma,
                   const QString &lahjoitusKohde,
                   const QString &aktiivinenKieli
                   ):
    QDialog(parent),
    voiAvataPaavalikon(false),
    ui(new Ui::onnistui),
    token(token),
    nimi(nimi),
    id(id),
    aktiivinenKieli(aktiivinenKieli)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->lahjoitusQLine->setText(lahjoitusSumma);
    ui->nostoQLine->setText(nostoSumma);
    ui->lahjoitusKohdeLineEdit->setText(lahjoitusKohde);
    laskeSummat(lahjoitusSumma, nostoSumma);

    muunnaSumma(nostoSumma);

    connect(ui->englishNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("finnish"); });

    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this, &onnistui::onnistuiUlos);
    connect(ui->kirjauduUlosNappi_2, &QPushButton::clicked, this, &onnistui::onnistuiUlos);
    connect(ui->onnistuiKylla, &QPushButton::clicked, this, &onnistui::kyllaPainettu);
    connect(ui->onnistuiKylla2, &QPushButton::clicked, this, &onnistui::kyllaPainettu);
    connect(ui->onnistuiEi, &QPushButton::clicked, this, &onnistui::eiPainettu);
    connect(ui->onnistuiEi2, &QPushButton::clicked, this, &onnistui::eiPainettu);
    connect(ui->paaValikkoonNappi, &QPushButton::clicked, this, &onnistui::avaa_paaValikko);
    connect(ui->paaValikkoonNappi_2, &QPushButton::clicked, this, &onnistui::avaa_paaValikko);
    ui->kayttajaNimi->setText(nimi);
}

onnistui::~onnistui()
{

}
void onnistui::avaa_paaValikko() {
    if(voiAvataPaavalikon) {
        paaValikko *paaValikkoPointteri = new paaValikko(this, token, nimi, id);
        connect(paaValikkoPointteri, &paaValikko::ulosKirjautuminen, this, &onnistui::onnistuiUlos);
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
    QJsonObject jsonObj;
    jsonObj.insert("amount",nostettavaSumma);


    //QString site_url="http://localhost:3000/transaction/withdraw/"+accountType;
    //QNetworkRequest request((site_url));

    nykyinenTila = Suoritettu;
    voiAvataPaavalikon = true;
    paivitaUI();
}

void onnistui::eiPainettu() {
    nykyinenTila = Epaonnistui;
    voiAvataPaavalikon = true;
    paivitaUI();
}

void onnistui::kielenVaihto(const QString &kielikoodi)
{
    aktiivinenKieli = kielikoodi;
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}

void onnistui::laskeSummat(const QString &lahjoitusSumma, const QString &nostoSumma) {
    QString puhdasLahjoitusSumma = lahjoitusSumma;
    QString puhdasNostoSumma = nostoSumma;

    if (aktiivinenKieli == "english") {
        puhdasLahjoitusSumma.remove(" euros");
        puhdasNostoSumma.remove(" euros");
    } else {
        puhdasLahjoitusSumma.remove(" euroa");
        puhdasNostoSumma.remove(" euroa");
    }

    double lahjoitusSummaNumero = puhdasLahjoitusSumma.toDouble();
    double nostoSummaNumero = puhdasNostoSumma.toDouble();
    double yhteensa = lahjoitusSummaNumero + nostoSummaNumero;

    if (aktiivinenKieli == "english") {
        ui->yhteensaQline->setText(QString::number(yhteensa) + " euros");
    } else {
        ui->yhteensaQline->setText(QString::number(yhteensa) + " euroa");
    }
}

void onnistui::muunnaSumma(const QString &nostoSumma) {
    QString puhdasSumma = nostoSumma;

    if (aktiivinenKieli == "english") {
        puhdasSumma.replace(" euroa", " euros");
    } else {
        puhdasSumma.replace(" euros", "euroa");
    }
    ui->nostoQLine_2->setText(puhdasSumma);
}

