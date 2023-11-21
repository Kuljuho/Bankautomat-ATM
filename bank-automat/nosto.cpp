#include "nosto.h"
#include "ui_nosto.h"

nosto::nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
    this->showFullScreen();

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &nosto::on_nostosumma_clicked);
        }
    }
}

nosto::~nosto()
{
    delete ui;
}

void nosto::on_nostosumma_clicked()
{

}
