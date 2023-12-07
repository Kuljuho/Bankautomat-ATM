#include "lahjoitus.h"
#include "ui_lahjoitus.h"

lahjoitus::lahjoitus(QWidget *parent,
                     const QByteArray &token,
                     const QString &nimi,
                     const QString &id,
                     const QString &accountType,
                     const QString &idcard):
    QDialog(parent),
    ui(new Ui::lahjoitus),
    token(token),
    nimi(nimi),
    id(id),
    accountType(accountType),
    idcard(idcard)
{
    ui->setupUi(this);
    this->showFullScreen();
    ui->stackedWidget->setCurrentIndex(1);

    connect(ui->englishNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]() { kielenVaihto("finnish"); });

    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this, &lahjoitus::voisinKirjautuaUlos);
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
    ui->kayttajaNimi->setText(nimi);
}

lahjoitus::~lahjoitus()
{
    delete ui;
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
        if (aktiivinenKieli == "english") {
            lahjoitusNapinNimi.replace("euroa", "euros");
        }
        ui->lahjoitusQLine->setText(lahjoitusNapinNimi);
        ui->lahjoitusQLine->setFocus();
        lahjoitusSumma = lahjoitusNapinNimi;
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
        if (aktiivinenKieli == "english") {
            if (kohdeNapinNimi == "Punainen Risti") {
                kohdeNapinNimi = "Red Cross";
            } if (kohdeNapinNimi == "WWF Suomi"){
                kohdeNapinNimi = "WWF Finland";
            }
        }
        ui->lahjoitusKohdeLineEdit->setText(kohdeNapinNimi);
        lahjoitusKohde = kohdeNapinNimi;
    }
}

void lahjoitus::nostoSumma_clicked()
{
    QPushButton *nostoSummanPainallus = qobject_cast<QPushButton *>(sender());
    if (nostoSummanPainallus) {
        QString nostoNapinNimi = nostoSummanPainallus->objectName();
        nostoNapinNimi.replace("Nosto_", "").replace("_", " ");
        if (aktiivinenKieli == "english") {
            nostoNapinNimi.replace("euroa", "euros");
        }
        ui->nostoQLine->setText(nostoNapinNimi);
        ui->nostoQLine->setFocus();
        nostoSumma = nostoNapinNimi;
    }

}

void lahjoitus::nappiEteen_clicked()
{
    if(ui->lahjoitusKohdeLineEdit->text().isEmpty() ||
        ui->lahjoitusQLine->text().isEmpty() ||
        ui->nostoQLine->text().isEmpty())
    {
        QMessageBox::warning(this, "Täyttövaatimus", "Kaikki kentät on täytettävä!");
        return;
    }

    laskeSummat();
    nostoSumma = yhteensaStr;


    onnistui *dialogi = new onnistui(nullptr, token, nimi, id,
                                     nostoSumma,
                                     lahjoitusKohde, aktiivinenKieli,
                                     accountType, idcard);
    connect(dialogi, &onnistui::onnistuiUlos, this, &lahjoitus::voisinKirjautuaUlos);
    connect(dialogi, &onnistui::vaihdaKieli, this, &lahjoitus::vaihdaKieli);
    dialogi->asetaTila(onnistui::Lahjoitus);
    dialogi->exec();
}

void lahjoitus::suoritaLahjoitus(QNetworkReply *reply)
{

}

void lahjoitus::kielenVaihto(const QString &kielikoodi)
{
    aktiivinenKieli = kielikoodi;
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}

void lahjoitus::laskeSummat() {
    QString puhdasLahjoitusSumma = ui->lahjoitusQLine->text();
    QString puhdasNostoSumma = ui->nostoQLine->text();

    if (aktiivinenKieli == "english") {
        puhdasLahjoitusSumma.remove(" euros");
        puhdasNostoSumma.remove(" euros");
    } else {
        puhdasLahjoitusSumma.remove(" euroa");
        puhdasNostoSumma.remove(" euroa");
    }

    double lahjoitettavaSumma = puhdasLahjoitusSumma.toDouble();
    double nostettavaSumma = puhdasNostoSumma.toDouble();
    yhteensa = lahjoitettavaSumma + nostettavaSumma;
    yhteensaStr = QString::number(yhteensa);


    qDebug()<<"Summa on yhteensa ="<<yhteensaStr;
}
