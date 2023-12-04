#ifndef ONNISTUI_H
#define ONNISTUI_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QShowEvent>
#include "ui_onnistui.h"

class onnistui : public QDialog
{
    Q_OBJECT

    bool voiAvataPaavalikon;

public:
    explicit onnistui(QWidget *parent = nullptr, const QByteArray &token = " ", const QString &nimi = " ", const QString &id = " ");
    ~onnistui();
    void avaa_paaValikko();
    enum Tila { Nosto, Lahjoitus, Suoritettu, Epaonnistui };
    Tila nykyinenTila;
    void asetaTila(Tila tila);
    void naytaWidget(QShowEvent *event);
    void paivitaUI();

private:
    Ui::onnistui *ui;
    QByteArray token;
    QString nimi;
    QString id;

public slots:
    void kyllaPainettu();
    void eiPainettu();
};

#endif //ONNISTUI_H;
