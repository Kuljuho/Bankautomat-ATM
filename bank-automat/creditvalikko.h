#ifndef CREDITVALIKKO_H
#define CREDITVALIKKO_H

#include <QDialog>
#include <QTranslator>

#include "paavalikko.h"


namespace Ui {
class creditvalikko;
}

class creditvalikko : public QDialog
{
    Q_OBJECT

public:
    explicit creditvalikko(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ", const QString &accountType = " ");
    ~creditvalikko();

public slots:
    void kielenVaihto(const QString &kielikoodi);

private slots:
    void creditSlot();
    void debitSlot();
    void credit_clicked();
    void debit_clicked();

signals:
    void creditUlos();
    void vaihdaKieli(const QString &kielikoodi);

private:
    Ui::creditvalikko *ui;
    paaValikko *paaValikkoPointteri;
    QByteArray token;
    QString nimi;
    QString id;
    QString accountType;

};

#endif // CREDITVALIKKO_H
