#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent, const QByteArray &token, const QString &nimi, const QString &id):
    QDialog(parent),
    ui(new Ui::saldo), token(token), nimi(nimi),
    id(id)
{
    ui->setupUi(this);
    this->showFullScreen();
    connect(ui->englishNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("finnish"); });
    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this, &saldo::saldoKirjautuuUlos);
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

void saldo::kielenVaihto(const QString &kielikoodi)
{
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}
