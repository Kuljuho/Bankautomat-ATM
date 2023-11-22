#include "paavalikko.h"
#include "ui_paavalikko.h"

paaValikko::paaValikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paaValikko)
{
    ui->setupUi(this);
    this->showFullScreen();
}

paaValikko::~paaValikko()
{
    delete ui;
}

void paaValikko::setToken(const QByteArray &newToken)
{
    token = newToken;
    qDebug()<<token;
}

void paaValikko::on_nostoNappi_clicked()
{
    nostoPointteri = new nosto;
    nostoPointteri->show();
}

void paaValikko::on_lahjoitusNappi_clicked()
{
    lahjoitusPointteri = new lahjoitus;
    lahjoitusPointteri->show();
}

void paaValikko::on_saldoNappi_clicked()
{
    saldoPointteri = new saldo;
    saldoPointteri->show();
}

void paaValikko::on_tapahtumatNappi_clicked()
{
    tapahtumatPointteri = new tapahtumat;
    tapahtumatPointteri->show();
}
