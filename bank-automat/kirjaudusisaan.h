#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>
#include <paavalikko.h>

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

    paaValikko *paavalikko;
};

#endif // KIRJAUDUSISAAN_H
