#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>


//class paaValikko;


namespace Ui {
class tapahtumat;
}

class tapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = nullptr);
    ~tapahtumat();
    void noudaTapahtumat(QString);
    void noudaTapahtumat2(QString);
    void setNameTapahtumat(const QString &newName);

    QByteArray getToken2() const;
    void setToken2(const QByteArray &newToken2);

    QString getId2() const;
    void setId2(const QString &newId2);

private slots:
    void on_seuraavaNappi_clicked();
    void haeTilitapahtumat2(QNetworkReply *reply);

    void on_takaisinNappi2_clicked();
    void haeTilitapahtumat1(QNetworkReply *reply);

private:
    Ui::tapahtumat *ui;  
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString id2;
    QByteArray token2;
    //paaValikko *valikkoPointteri;
};

#endif // TAPAHTUMAT_H
