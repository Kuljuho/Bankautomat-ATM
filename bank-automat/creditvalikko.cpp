#include "creditvalikko.h"
#include "ui_creditvalikko.h"
//testataan mainin päivitystä (Pekka 28.11.2023)
creditvalikko::creditvalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditvalikko)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->creditNappi, &QPushButton::clicked, this, &creditvalikko::credit_clicked);
    connect(ui->debitNappi, &QPushButton::clicked, this, &creditvalikko::credit_clicked);
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

void creditvalikko::credit_clicked()
{
    //paaValikkoPointteri = new paaValikko(this);
    //paaValikkoPointteri->show();
}

void creditvalikko::debit_clicked()
{
    //paaValikkoPointteri = new paaValikko(this);
    //paaValikkoPointteri->show();
}
