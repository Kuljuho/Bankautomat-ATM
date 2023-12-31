#include "creditvalikko.h"
#include "ui_creditvalikko.h"

creditvalikko::creditvalikko(QWidget *parent,
                             const QByteArray &token,
                             const QString &nimi,
                             const QString &id,
                             const QString &accountType,
                             const QString &idcard):
    QDialog(parent),
    ui(new Ui::creditvalikko),
    token(token),
    nimi(nimi),
    id(id),
    accountType(accountType),
    idcard(idcard)
{
    ui->setupUi(this);
    this->showFullScreen();

    ui->kayttajaNimi->setText(nimi);

    connect(ui->englishNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this,
            [this]() { kielenVaihto("finnish"); });
    connect(ui->creditNappi, &QPushButton::clicked, this,
                             &creditvalikko::credit_clicked);
    connect(ui->debitNappi, &QPushButton::clicked, this,
                            &creditvalikko::credit_clicked);
    connect(ui->kirjauduUlosNappi, &QPushButton::clicked, this,
                                   &creditvalikko::creditUlos);

}

creditvalikko::~creditvalikko()
{
    delete ui;
}

void creditvalikko::credit_clicked()
{
    paaValikkoPointteri = new paaValikko(nullptr, token, nimi, id,
                                         accountType, idcard);
    connect(paaValikkoPointteri, &paaValikko::ulosKirjautuminen, this,
                                 &creditvalikko::creditUlos);
    connect(paaValikkoPointteri, &paaValikko::vaihdaKieli, this,
                                 &creditvalikko::vaihdaKieli);
    paaValikkoPointteri->show();
}

void creditvalikko::debit_clicked()
{
    paaValikkoPointteri = new paaValikko(nullptr, token, nimi, id,
                                         accountType, idcard);
    connect(paaValikkoPointteri, &paaValikko::ulosKirjautuminen, this,
                                 &creditvalikko::creditUlos);
    connect(paaValikkoPointteri, &paaValikko::vaihdaKieli, this,
                                 &creditvalikko::vaihdaKieli);
    paaValikkoPointteri->show();
}

void creditvalikko::kielenVaihto(const QString &kielikoodi)
{
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}
