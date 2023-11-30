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

void saldo::setNameSaldo(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}
