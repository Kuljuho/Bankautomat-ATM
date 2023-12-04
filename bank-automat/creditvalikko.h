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
    explicit creditvalikko(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ");
    ~creditvalikko();

private slots:
    void creditSlot();
    void debitSlot();
    void credit_clicked();
    void debit_clicked();

private:
    Ui::creditvalikko *ui;
    paaValikko *paaValikkoPointteri;
    QByteArray token;
    QString nimi;
    QString id;

};

#endif // CREDITVALIKKO_H
