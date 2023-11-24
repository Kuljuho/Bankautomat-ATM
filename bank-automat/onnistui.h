
#ifndef ONNISTUI_H
#define ONNISTUI_H

#include <QDialog>
#include "ui_onnistui.h"

class onnistui : public QDialog
{
    Q_OBJECT

public:
    explicit onnistui(QWidget *parent = nullptr)
        : QDialog(parent), ui(new Ui::onnistui)
    {
        ui->setupUi(this);
        this->showFullScreen();
    }

    ~onnistui() override
    {
        delete ui;
    }

private:
    Ui::onnistui *ui;
};

#endif //ONNISTUI_H;
