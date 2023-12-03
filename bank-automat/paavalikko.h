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
#include "onnistui.h"

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
    void setNamePaaValikko(const QString &newName);
    void setId(const QString &newId);
    QString id;
    QString name;

private slots:
    void on_nostoNappi_clicked();
    void on_lahjoitusNappi_clicked();
    void on_tapahtumatNappi_clicked();
    void on_saldoNappi_clicked();
    void haeSaldo(QNetworkReply *reply);
    void haeTilitapahtumat(QNetworkReply *reply);

private:
    Ui::paaValikko *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QByteArray token;
    //QString id;
    //QString name;

    nosto *nostoPointteri;
    lahjoitus *lahjoitusPointteri;
    tapahtumat *tapahtumatPointteri;
    saldo *saldoPointteri;
};

#endif // PAAVALIKKO_H
