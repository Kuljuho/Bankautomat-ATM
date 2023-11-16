#include "paavalikko.h"
#include "ui_paavalikko.h"

paaValikko::paaValikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paaValikko)
{
    ui->setupUi(this);
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
