#ifndef LAHJOITUS_H
#define LAHJOITUS_H

#include "onnistui.h"

#include <QCloseEvent>
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QRegularExpression>

namespace Ui {
class lahjoitus;
}

class lahjoitus : public QDialog
{
    Q_OBJECT

public:
    explicit lahjoitus(QWidget *parent = nullptr);
    ~lahjoitus();

    void lahjoitusSumma_clicked();
    void lahjoitusKohde_clicked();
    void setNameLahjoitus(const QString &newName);

private slots:
    void suoritaLahjoitus(QNetworkReply *reply);

private:
    Ui::lahjoitus *ui;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
};

#endif // LAHJOITUS_H
