#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H
#include "paavalikko.h"
#include "creditvalikko.h"

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>
#include <QShowEvent>


namespace Ui {
class kirjauduSisaan;
}

class kirjauduSisaan : public QDialog
{
    Q_OBJECT

public:
    explicit kirjauduSisaan(QWidget *parent = nullptr);
    ~kirjauduSisaan();
    QByteArray token;
    QString nimi;
    QString id;
    QString accountType;

public slots:
    void kirjauduUlos();

private slots:
    void nappiKirjaudu_clicked();
    void numero_clicked();
    void kirjauduSlot (QNetworkReply *reply);
    void getIdSlot(QNetworkReply *reply);
    void getNameSlot(QNetworkReply *reply);
    void getAccountTypeSlot(QNetworkReply *reply);

private:
    Ui::kirjauduSisaan *ui;
    QNetworkAccessManager *postManager;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *getNameManager;
    QNetworkAccessManager *getAccountTypeManager;


    QNetworkReply *reply;
    QByteArray response_data;
    paaValikko *paaValikkoPointteri;
    creditvalikko *creditvalikkoPointteri;
    kirjauduSisaan *kirjauduSisaanPointteri;
    //QByteArray token;
    QString kayttaja;
    //QString nimi;
};

#endif // KIRJAUDUSISAAN_H
