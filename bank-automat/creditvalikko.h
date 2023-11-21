#ifndef CREDITVALIKKO_H
#define CREDITVALIKKO_H

#include <QDialog>

#include "paavalikko.h"

namespace Ui {
class creditvalikko;
}

class creditvalikko : public QDialog
{
    Q_OBJECT

public:
    explicit creditvalikko(QWidget *parent = nullptr);
    ~creditvalikko();

private slots:
    void creditSlot();
    void debitSlot();
    void on_credit_clicked();
    void on_debit_clicked();

private:
    Ui::creditvalikko *ui;
    paaValikko *paaValikkoPointteri;

};

#endif // CREDITVALIKKO_H
