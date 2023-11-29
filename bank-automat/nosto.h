#ifndef NOSTO_H
#define NOSTO_H

#include "onnistui.h"
#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class nosto;
}

class nosto : public QDialog
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr);
    ~nosto();

private slots:
    void nostosumma_clicked();
    void on_onnistuiNappi_clicked();

private:
    Ui::nosto *ui;
    nosto *nostoPointteri;
    onnistui *onnistuiPointteri;

};

#endif // NOSTO_H
