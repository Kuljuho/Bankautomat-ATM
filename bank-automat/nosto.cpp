#include "nosto.h"
#include "saldo.h"
#include "ui_nosto.h"
#include "ui_onnistui.h"
#include "paavalikko.h"

nosto::nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &nosto::nostoSumma_clicked);
        }
    }
}

nosto::~nosto()
{
    delete ui;
}

void nosto::setNameNosto(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void nosto::nostoSumma_clicked()
{
    onnistui *ikkuna = new onnistui(this);
    ikkuna->asetaTila(onnistui::Nosto);
    ikkuna->exec();
}
