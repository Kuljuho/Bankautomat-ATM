#include "onnistui.h"
#include "ui_onnistui.h"

onnistui::onnistui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::onnistui)
{
    ui->setupUi(this);
}

onnistui::~onnistui()
{
    delete ui;
}
