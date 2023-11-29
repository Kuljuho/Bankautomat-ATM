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
    void on_nappiKirjaudu_clicked();
    void on_numero_clicked();
    void kirjauduSlot (QNetworkReply *reply);
    void getBookSlot(QNetworkReply *reply);

private:
    Ui::kirjauduSisaan *ui;
    QNetworkAccessManager *postManager;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QByteArray response_data;
    paaValikko *paaValikkoPointteri;
    QByteArray token;
    QString kayttaja;
};

#endif // KIRJAUDUSISAAN_H
