#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "lahjoitus.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"

namespace Ui {
class paaValikko;
}

class paaValikko : public QDialog
{
    Q_OBJECT

public:
    explicit paaValikko(QWidget *parent = nullptr);
    ~paaValikko();

    void setToken(const QByteArray &newToken);
    void palaa();

private slots:
    void on_nostoNappi_clicked();
    void on_lahjoitusNappi_clicked();
    void on_saldoNappi_clicked();
    void on_tapahtumatNappi_clicked();

private:
    Ui::paaValikko *ui;
    QByteArray token;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

    nosto *nostoPointteri;
    lahjoitus *lahjoitusPointteri;
    saldo *saldoPointteri;
    tapahtumat *tapahtumatPointteri;
};

#endif // PAAVALIKKO_H
