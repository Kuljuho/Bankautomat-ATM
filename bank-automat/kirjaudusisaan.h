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
    void kirjauduSlot (QNetworkReply *reply);

private:
    Ui::kirjauduSisaan *ui;
    QNetworkAccessManager *postManager;
    QNetworkReply *reply;
    QByteArray response_data;
    paaValikko *objectPaavalikko;
    QByteArray token;
};

#endif // KIRJAUDUSISAAN_H
