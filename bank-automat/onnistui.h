#ifndef ONNISTUI_H
#define ONNISTUI_H

#include "ui_onnistui.h"
#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class onnistui;
}

class onnistui : public QDialog
{
    Q_OBJECT

public:
    onnistui(QDialog *parent=nullptr) : QDialog(parent), ui(new Ui::onnistui)
    {
    setupUi(this);
    }

private slots:

private:
    Ui::onnistui *ui;

};

#endif // NOSTO_H
