
#ifndef ONNISTUI_H
#define ONNISTUI_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include "ui_onnistui.h"

class onnistui : public QDialog
{
    Q_OBJECT

public:
    explicit onnistui(QWidget *parent = nullptr);
    ~onnistui();

    void setNameOnnistui(const QString &newName);
    void asetaViesti(const QString &viesti);
    void avaa_paaValikko();
    bool sivuPaivitys() const;

private:
    Ui::onnistui *ui;
    QLabel *labelViesti;
    QLabel *labelKysymys;
    QPushButton *kyllaNappi;
    QPushButton *eiNappi;
    bool vastaus;

public slots:
    void kyllaPainettu();
    void eiPainettu();
};

#endif //ONNISTUI_H;
