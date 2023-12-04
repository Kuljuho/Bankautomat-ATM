#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent, const QByteArray &token, const QString &nimi, const QString &id):
    QDialog(parent),
    token(token), nimi(nimi), id(id),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    this->showFullScreen();
    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this, &saldo::saldoKirjautuuUlos);
    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    ui->kayttajaNimi->setText(nimi);
}

saldo::~saldo()
{
    delete ui;
}

void saldo::noudaSaldo(QString tilinSaldo)
{
    ui->saldoKentta->setText(tilinSaldo);
}
