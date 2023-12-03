#include "onnistui.h"
#include "paavalikko.h"
#include "ui_onnistui.h"
#include <iostream>

onnistui::onnistui(QWidget *parent) :
    QDialog(parent),
    voiAvataPaavalikon(false),
    ui(new Ui::onnistui)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->onnistuiKylla, &QPushButton::clicked, this, &onnistui::kyllaPainettu);
    connect(ui->onnistuiEi, &QPushButton::clicked, this, &onnistui::eiPainettu);
    connect(ui->onnistuiKylla2, &QPushButton::clicked, this, &onnistui::kyllaPainettu);
    connect(ui->onnistuiEi2, &QPushButton::clicked, this, &onnistui::eiPainettu);
    connect(ui->paaValikkoonNappi, &QPushButton::clicked, this, &onnistui::avaa_paaValikko);
    connect(ui->paaValikkoonNappi_2, &QPushButton::clicked, this, &onnistui::avaa_paaValikko);
}

onnistui::~onnistui()
{

}

void onnistui::setNameOnnistui(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void onnistui::avaa_paaValikko() {
    if(voiAvataPaavalikon) {
        paaValikko *paaValikkoPointteri = new paaValikko(this);
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
    nykyinenTila = Suoritettu;
    voiAvataPaavalikon = true;
    paivitaUI();
}

void onnistui::eiPainettu() {
    nykyinenTila = Epaonnistui;
    voiAvataPaavalikon = true;
    paivitaUI();
}
