#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTranslator>

#include "lahjoitus.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"
#include "onnistui.h"

namespace Ui {
class paaValikko;
}

class paaValikko : public QDialog
{
    Q_OBJECT

public:
    explicit paaValikko(QWidget *parent = nullptr,
                        const QByteArray &token = " ",
                        const QString &nimi = " ",
                        const QString &id = " ",
                        const QString &accountType = " ",
                        const QString &idcard = " ");
    ~paaValikko();

    void palaa();

private slots:
    void on_nostoNappi_clicked();
    void on_lahjoitusNappi_clicked();
    void on_tapahtumatNappi_clicked();
    void on_saldoNappi_clicked();
    void haeSaldo(QNetworkReply *reply);

public slots:
    void kielenVaihto(const QString &kielikoodi);

private:
    Ui::paaValikko *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;
    QString nimi;
    QString id;
    QString accountType;
    QString idcard;

    nosto *nostoPointteri;
    lahjoitus *lahjoitusPointteri;
    tapahtumat *tapahtumatPointteri;
    saldo *saldoPointteri;

signals:
    void ulosKirjautuminen();
    void vaihdaKieli(const QString &language);
};

#endif // PAAVALIKKO_H
