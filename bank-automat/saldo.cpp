#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent,
             const QByteArray &token,
             const QString &nimi,
             const QString &id,
             const QString &transactions):
    QDialog(parent),
    ui(new Ui::saldo),
    token(token),
    nimi(nimi),
    id(id)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->kayttajaNimi->setText(nimi);
    QStringList transactionList = transactions.split("\n", QString::SkipEmptyParts);
    int maxTransactions = qMin(5, transactionList.size());
    QString limitedTransactions = transactionList.mid(0, maxTransactions).join("\n");
    ui->tapahtumaKentta->setText(limitedTransactions);

    connect(ui->englishNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("finnish"); });
    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this,
            &saldo::saldoKirjautuuUlos);
    connect(ui->takaisinNappi, &QPushButton::clicked, this,
            &QDialog::close);
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
