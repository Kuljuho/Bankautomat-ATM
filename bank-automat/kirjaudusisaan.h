#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H
#include "paavalikko.h"

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>


namespace Ui {
class kirjauduSisaan;
}

class kirjauduSisaan : public QDialog
{
    Q_OBJECT

public:
    explicit kirjauduSisaan(QWidget *parent = nullptr);
    ~kirjauduSisaan();

private slots:
    void nappiKirjaudu_clicked();
    void numero_clicked();
    void kirjauduSlot (QNetworkReply *reply);
    void getBookSlot(QNetworkReply *reply);
    void getNameSlot(QNetworkReply *reply);

private:
    Ui::kirjauduSisaan *ui;
    QNetworkAccessManager *postManager;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *getNameManager;

    QNetworkReply *reply;
    QByteArray response_data;
    paaValikko *paaValikkoPointteri;
    QByteArray token;
    QString kayttaja;
    QString nimi;
};

#endif // KIRJAUDUSISAAN_H
