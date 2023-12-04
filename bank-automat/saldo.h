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
    explicit saldo(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ");
    ~saldo();
    void noudaSaldo(QString);

private slots:

signals:
    void saldoKirjautuuUlos();

private:
    Ui::saldo *ui;
    QByteArray token;
    QString nimi;
    QString id;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // SALDO_H
