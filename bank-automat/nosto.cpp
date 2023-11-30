#include "nosto.h"
#include "ui_nosto.h"
#include "ui_onnistui.h"

nosto::nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->onnistuiNappi, &QPushButton::clicked, this, &nosto::on_onnistuiNappi_clicked);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &nosto::on_nostosumma_clicked);
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

void nosto::on_nostosumma_clicked()
{

}

void nosto::on_onnistuiNappi_clicked()
{
    onnistuiPointteri = new onnistui(this);
    onnistuiPointteri->show();
}
