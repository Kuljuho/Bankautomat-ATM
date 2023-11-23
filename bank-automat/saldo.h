#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = nullptr);
    ~saldo();

private slots:
    void haeSaldo();

private:
    Ui::saldo *ui;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

    saldo *saldoPointteri;
};

#endif // SALDO_H
