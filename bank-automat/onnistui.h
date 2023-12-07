#ifndef ONNISTUI_H
#define ONNISTUI_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QLabel>
#include <QVBoxLayout>
#include <QShowEvent>
#include <QTranslator>
#include <QRegularExpression>
#include "ui_onnistui.h"

class onnistui : public QDialog
{
    Q_OBJECT

    bool voiAvataPaavalikon;

public:
    explicit onnistui(QWidget *parent = nullptr,
                      const QByteArray &token = " ",
                      const QString &nimi = " ",
                      const QString &id = " ",
                      const QString &lahjoitusSumma = " ",
                      const QString &nostoSumma = " ",
                      const QString &lahjoitusKohde = " ",
                      const QString &aktiivinenKieli = " ");
    ~onnistui();
    void avaa_paaValikko();
    enum Tila { Nosto, Lahjoitus, Suoritettu, Epaonnistui };
    Tila nykyinenTila;
    void asetaTila(Tila tila);
    void naytaWidget(QShowEvent *event);
    void paivitaUI();

private:
    Ui::onnistui *ui;
    QNetworkAccessManager *postSaldoManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;
    QString nimi;
    QString id;
    QString nostettavaSumma;
    QString aktiivinenKieli;

signals:
    void onnistuiUlos();
    void vaihdaKieli(const QString &language);

public slots:
    void kyllaPainettu();
    void eiPainettu();
    void kielenVaihto(const QString &kielikoodi);

private slots:
    void laskeSummat(const QString &lahjoitusSumma, const QString &nostoSumma);
};

#endif //ONNISTUI_H;
