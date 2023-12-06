#ifndef LAHJOITUS_H
#define LAHJOITUS_H

#include "onnistui.h"

#include <QCloseEvent>
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QMessageBox>
#include <QTranslator>

namespace Ui {
class lahjoitus;
}

class lahjoitus : public QDialog
{
    Q_OBJECT

public:
    explicit lahjoitus(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ");
    ~lahjoitus();

    void lahjoitusSumma_clicked();
    void lahjoitusKohde_clicked();
    void nostoSumma_clicked();
    void nappiEteen_clicked();

signals:
    void voisinKirjautuaUlos();
    void vaihdaKieli(const QString &kielikoodi);

public slots:
    void kielenVaihto(const QString &kielikoodi);

private slots:
    void lahjoitusNumero_clicked();
    void suoritaLahjoitus(QNetworkReply *reply);

private:
    Ui::lahjoitus *ui;
    QByteArray token;
    QString nimi;
    QString id;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
};

#endif // LAHJOITUS_H
