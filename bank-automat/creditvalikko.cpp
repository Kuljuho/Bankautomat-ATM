#include "creditvalikko.h"
#include "ui_creditvalikko.h"

creditvalikko::creditvalikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditvalikko)
{
    ui->setupUi(this);
}

creditvalikko::~creditvalikko()
{
    delete ui;
}
