#include "paavalikko.h"
#include "ui_paavalikko.h"

paaValikko::paaValikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paaValikko)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->ottoNappi, &QPushButton::clicked, this, &paaValikko::on_nostoNappi_clicked);
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
