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
    explicit nosto(QWidget *parent = nullptr);
    ~nosto();
    void setNameNosto(const QString &newName);

private slots:
    void nostoSumma_clicked();
    void nostoNumero_clicked();
    void nappiaEteen_clicked();

private:
    Ui::nosto *ui;
    nosto *nostoPointteri;
    onnistui *onnistuiPointteri;
};

#endif // NOSTO_H
