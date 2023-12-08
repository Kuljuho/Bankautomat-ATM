#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTranslator>

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = nullptr,
                        const QByteArray &token = " ",
                        const QString &nimi = " ",
                        const QString &id = " ");
    ~tapahtumat();
    void noudaTapahtumat(QString);
    void noudaTapahtumat2(QString);

public slots:
    void kielenVaihto(const QString &kielikoodi);

private slots:
    void on_seuraavaNappi_clicked();
    void on_takaisinNappi_clicked();
    void haeTilitapahtumat1(QNetworkReply *reply);
    void haeTilitapahtumat2(QNetworkReply *reply);
    void haeTilitapahtumat3(QNetworkReply *reply);
    void haeTilitapahtumat4(QNetworkReply *reply);

signals:
    void tapahtumatUlos();
    void vaihdaKieli(const QString &language);

private:
    Ui::tapahtumat *ui;  
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;
    QString nimi;
    QString id;
    int currentPage = 1;
};

#endif // TAPAHTUMAT_H
