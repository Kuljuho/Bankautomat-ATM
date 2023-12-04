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

namespace Ui {
class nosto;
}

class nosto : public QDialog
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ");
    ~nosto();

private slots:
    void nostoSumma_clicked();
    void nostoNumero_clicked();
    void nappiaEteen_clicked();

private:
    Ui::nosto *ui;
    nosto *nostoPointteri;
    onnistui *onnistuiPointteri;
    QByteArray token;
    QString nimi;
    QString id;
};

#endif // NOSTO_H
