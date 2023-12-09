#ifndef SALDO_H
#define SALDO_H
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTranslator>

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = nullptr,
                   const QByteArray &token = " ",
                   const QString &nimi = " ",
                   const QString &id = " ",
                   const QString &transactions = " ");
    ~saldo();
    void noudaSaldo(QString);

public slots:
    void kielenVaihto(const QString &kielikoodi);

private slots:

signals:
    void saldoKirjautuuUlos();
    void vaihdaKieli(const QString &language);

private:
    Ui::saldo *ui;
    QByteArray token;
    QString nimi;
    QString id;
    QString transactions;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // SALDO_H
