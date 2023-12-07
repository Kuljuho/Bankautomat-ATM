#ifndef NOSTO_H
#define NOSTO_H

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
class nosto;
}

class nosto : public QDialog
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr,
                   const QByteArray &token = " ",
                   const QString &nimi = " ",
                   const QString &id = " ");
    ~nosto();

public slots:
    void kielenVaihto(const QString &kielikoodi);

private slots:
    void nostoSumma_clicked();
    void nostoNumero_clicked();
    void nappiaEteen_clicked();

signals:
    void haluaisinKirjautuaUlos();
    void vaihdaKieli(const QString &language);

private:
    Ui::nosto *ui;
    nosto *nostoPointteri;
    onnistui *onnistuiPointteri;
    QByteArray token;
    QString nimi;
    QString id;
    QString nostoSumma;
    QString aktiivinenKieli;
};

#endif // NOSTO_H
