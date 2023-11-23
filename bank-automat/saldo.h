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
    void noudaSaldo(QString);

private slots:
   //void haeSaldo(QNetworkReply *reply);
   //void on_saldoNappi_clicked();

private:
    Ui::saldo *ui;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // SALDO_H
