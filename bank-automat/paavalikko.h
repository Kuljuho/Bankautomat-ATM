#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "nosto.h"

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

private slots:
    void on_nostoNappi_clicked();

private:
    Ui::paaValikko *ui;
    QByteArray token;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    nosto *nostoPointteri;
};

#endif // PAAVALIKKO_H
