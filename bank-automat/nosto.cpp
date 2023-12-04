#include "nosto.h"
#include "saldo.h"
#include "ui_nosto.h"
#include "ui_onnistui.h"
#include "paavalikko.h"

nosto::nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosto)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->nappiEteen, &QPushButton::clicked, this, &nosto::nappiaEteen_clicked);
    connect(ui->tyhjennaNappi, &QPushButton::clicked, this, &nosto::nostoNumero_clicked);
    connect(ui->pyyhiNappi, &QPushButton::clicked, this, &nosto::nostoNumero_clicked);
    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("Nosto_"))
        {
            connect(button, &QPushButton::clicked, this, &nosto::nostoSumma_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("NUM"))
        {
            connect(button, &QPushButton::clicked, this, &nosto::nostoNumero_clicked);
        }
    }
}

nosto::~nosto()
{
    delete ui;
}

void nosto::setNameNosto(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void nosto::nostoSumma_clicked()
{
    QPushButton *nostoSummanPainallus = qobject_cast<QPushButton *>(sender());
    if (nostoSummanPainallus) {
        QString nostoNapinNimi = nostoSummanPainallus->objectName();
        nostoNapinNimi.replace("Nosto_", "").replace("_", " ");
        ui->nostoQLine->setText(nostoNapinNimi);
        ui->nostoQLine->setFocus();
    }
}

void nosto::nostoNumero_clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if(button) {
        QLineEdit *currentLineEdit = nullptr;
        ui->nostoQLine->hasFocus();
        currentLineEdit = ui->nostoQLine;
        if(currentLineEdit) {
            if(button->objectName() == "pyyhiNappi") {
                if(!currentLineEdit->text().isEmpty()) {
                    QString text = currentLineEdit->text();
                    text.chop(1);
                    if (text.endsWith(" euroa")) {
                        text.chop(6);
                    }
                    currentLineEdit->setText(text);
                }
            }
            else if(button->objectName() == "tyhjennaNappi") {
                currentLineEdit->clear();
            }
            else {
                QString text = currentLineEdit->text();
                text.replace(" euroa", "");
                text.append(button->text());
                if (!text.isEmpty()) {
                    text.append(" euroa");
                }
                currentLineEdit->setText(text);
            }
        }
    }
}

void nosto::nappiaEteen_clicked()
{
    if(ui->nostoQLine->text().isEmpty())
    {
        QMessageBox::warning(this, "Täyttövaatimus", "Et voi jatkaa, ennen kuin olet valinnut nostettavan summan!");
        return;
    }
    onnistui *ikkuna = new onnistui(this);
    ikkuna->asetaTila(onnistui::Nosto);
    ikkuna->exec();
}
