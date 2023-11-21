#include "creditvalikko.h"
#include "ui_creditvalikko.h"

creditvalikko::creditvalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditvalikko)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->creditNappi, &QPushButton::clicked, this, &creditvalikko::on_credit_clicked);
    connect(ui->debitNappi, &QPushButton::clicked, this, &creditvalikko::on_credit_clicked);
}

creditvalikko::~creditvalikko()
{
    delete ui;
}

void creditvalikko::creditSlot()
{

}

void creditvalikko::debitSlot()
{

}

void creditvalikko::on_credit_clicked()
{
    paaValikkoPointteri->show();
}

void creditvalikko::on_debit_clicked()
{
    paaValikkoPointteri->show();
}
