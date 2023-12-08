#include "nosto.h"
#include "saldo.h"
#include "ui_nosto.h"
#include "ui_onnistui.h"
#include "paavalikko.h"

nosto::nosto(QWidget *parent,
             const QByteArray &token,
             const QString &nimi,
             const QString &id,
             const QString &accountType,
             const QString &idcard):
    QDialog(parent),
    ui(new Ui::nosto),
    token(token),
    nimi(nimi),
    id(id),
    accountType(accountType),
    idcard(idcard)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->englishNappi, &QPushButton::clicked, this, [this]()
            { kielenVaihto("english"); });
    connect(ui->suomiNappi, &QPushButton::clicked, this, [this]()
            { kielenVaihto("finnish"); });
    connect(ui->kirjauduUlosGlobal, &QPushButton::clicked, this,
            &nosto::haluaisinKirjautuaUlos);
    connect(ui->takaisinNappi, &QPushButton::clicked, this,
            &QDialog::close);
    connect(ui->nappiEteen, &QPushButton::clicked, this,
            &nosto::nappiaEteen_clicked);
    connect(ui->tyhjennaNappi, &QPushButton::clicked, this,
            &nosto::nostoNumero_clicked);
    connect(ui->pyyhiNappi, &QPushButton::clicked, this,
            &nosto::nostoNumero_clicked);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("Nosto_"))
        {
            connect(button, &QPushButton::clicked, this,
                    &nosto::nostoSumma_clicked);
        }
    }

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("NUM"))
        {
            connect(button, &QPushButton::clicked, this,
                    &nosto::nostoNumero_clicked);
        }
    }

    ui->kayttajaNimi->setText(nimi);
}

nosto::~nosto()
{
    delete ui;
}

void nosto::nostoSumma_clicked()
{
    QPushButton *nostoSummanPainallus =
        qobject_cast<QPushButton *>(sender());

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

void nosto::nostoNumero_clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if(button) {
        QLineEdit *currentLineEdit = nullptr;
        if(ui->nostoQLine->hasFocus()) {
            currentLineEdit = ui->nostoQLine;
        }
        if(currentLineEdit) {
            QString text = currentLineEdit->text();
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
                text.replace(" euroa", "").replace(" euros", "");
                text.append(button->text());
                if (!text.isEmpty()) {
                    if (aktiivinenKieli == "english") {
                        text.append(" euros");
                    } else {
                        text.append(" euroa");
                    }
                }
                currentLineEdit->setText(text);
            }
            nostoSumma = currentLineEdit->text();
        }
    }
}

void nosto::nappiaEteen_clicked()
{
    if(ui->nostoQLine->text().isEmpty())
    {
        QMessageBox::warning(this, "Täyttövaatimus","Et voi jatkaa, ennen kuin olet valinnut nostettavan summan!");
        return;
    }
    onnistui *ikkuna = new onnistui(nullptr, token, nimi, id,
                                    nostoSumma, "", aktiivinenKieli,
                                    accountType, idcard);
    connect(ikkuna, &onnistui::onnistuiUlos, this, &nosto::haluaisinKirjautuaUlos);
    connect(ikkuna, &onnistui::vaihdaKieli, this, &nosto::vaihdaKieli);
    ikkuna->asetaTila(onnistui::Nosto);
    ikkuna->exec();
}

void nosto::kielenVaihto(const QString &kielikoodi)
{
    aktiivinenKieli = kielikoodi;
    emit vaihdaKieli(kielikoodi);
    ui->retranslateUi(this);
}
