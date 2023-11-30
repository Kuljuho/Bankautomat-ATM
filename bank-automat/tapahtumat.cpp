#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::noudaTapahtumat(QString tilinTapahtumat)
{
    ui->tapahtumaKentta->setText(tilinTapahtumat);
}

void tapahtumat::setNameTapahtumat(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}
