#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
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
    void setNameTapahtumat(const QString &newName);
    void setNameTapahtumat2();
    void setToken(const QByteArray &newToken);
    void setId(const QString &newId);

private slots:
    void on_seuraavaNappi_clicked();
    void haeTilitapahtumat2(QNetworkReply *reply);


private:
    Ui::tapahtumat *ui;  
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QString id;
    QByteArray token;
};

#endif // TAPAHTUMAT_H
