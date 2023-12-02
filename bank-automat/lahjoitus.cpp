#include "lahjoitus.h"
#include "ui_lahjoitus.h"

lahjoitus::lahjoitus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lahjoitus)
{
    ui->setupUi(this);
    this->showFullScreen();
    ui->stackedWidget->setCurrentIndex(1);

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("L"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitusSumma_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("K"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitusKohde_clicked);
        }
    }
}

lahjoitus::~lahjoitus()
{
    delete ui;
}

void lahjoitus::setNameLahjoitus(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void lahjoitus::lahjoitusSumma_clicked()
{
    onnistui *dialogi = new onnistui(this);
    dialogi->exec();
}

void lahjoitus::lahjoitusKohde_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void lahjoitus::suoritaLahjoitus(QNetworkReply *reply)
{

}

