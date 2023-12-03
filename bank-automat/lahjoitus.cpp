#include "lahjoitus.h"
#include "ui_lahjoitus.h"

lahjoitus::lahjoitus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lahjoitus)
{
    ui->setupUi(this);
    this->showFullScreen();
    ui->stackedWidget->setCurrentIndex(1);

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->nappiEteen, &QPushButton::clicked, this, &lahjoitus::nappiEteen_clicked);
    connect(ui->tyhjennaNappi, &QPushButton::clicked, this, &lahjoitus::lahjoitusNumero_clicked);
    connect(ui->pyyhiNappi, &QPushButton::clicked, this, &lahjoitus::lahjoitusNumero_clicked);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("Lahjoitus_"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitusSumma_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("Nosto_"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::nostoSumma_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("Kohde_"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitusKohde_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("NUM"))
        {
            connect(button, &QPushButton::clicked, this, &lahjoitus::lahjoitusNumero_clicked);
        }
    }
}

lahjoitus::~lahjoitus()
{
    delete ui;
}

void lahjoitus::setNameLahjoitus(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void lahjoitus::lahjoitusNumero_clicked() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if(button) {
        QLineEdit *currentLineEdit = nullptr;
        if(ui->lahjoitusQLine->hasFocus()) {
            currentLineEdit = ui->lahjoitusQLine;
        } else if(ui->nostoQLine->hasFocus()) {
            currentLineEdit = ui->nostoQLine;
        }

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

void lahjoitus::lahjoitusSumma_clicked()
{
    QPushButton *lahjoitusSummanPainallus = qobject_cast<QPushButton *>(sender());
    if (lahjoitusSummanPainallus) {
        QString lahjoitusNapinNimi = lahjoitusSummanPainallus->objectName();
        lahjoitusNapinNimi.replace("Lahjoitus_", "").replace("_", " ");
        ui->stackedWidget->setCurrentIndex(0);
        ui->lahjoitusQLine->setText(lahjoitusNapinNimi);
        ui->lahjoitusQLine->setFocus();
    }
}

void lahjoitus::lahjoitusKohde_clicked()
{
    QPushButton *lahjoitusKohteenPainallus = qobject_cast<QPushButton *>(sender());
    if (lahjoitusKohteenPainallus) {
        QString kohdeNapinNimi = lahjoitusKohteenPainallus->objectName();
        kohdeNapinNimi.replace("Kohde_", "").replace("_", " ");
        kohdeNapinNimi.replace("_", " ");
        ui->stackedWidget->setCurrentIndex(0);
        ui->lahjoitusKohdeLineEdit->setText(kohdeNapinNimi);
    }
}

void lahjoitus::nostoSumma_clicked()
{
    QPushButton *nostoSummanPainallus = qobject_cast<QPushButton *>(sender());
    if (nostoSummanPainallus) {
        QString nostoNapinNimi = nostoSummanPainallus->objectName();
        nostoNapinNimi.replace("Nosto_", "").replace("_", " ");
        ui->nostoQLine->setText(nostoNapinNimi);
        ui->nostoQLine->setFocus();
    }
}

void lahjoitus::nappiEteen_clicked()
{
    onnistui *dialogi = new onnistui(this);
    dialogi->asetaTila(onnistui::Lahjoitus);
    dialogi->exec();
}

void lahjoitus::suoritaLahjoitus(QNetworkReply *reply)
{

}

