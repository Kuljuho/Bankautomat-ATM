#include "lahjoitus.h"
#include "ui_lahjoitus.h"

lahjoitus::lahjoitus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lahjoitus)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitussumma_clicked);
        }
    }
}

lahjoitus::~lahjoitus()
{
    delete ui;
}

void lahjoitus::lahjoitussumma_clicked()
{

}
