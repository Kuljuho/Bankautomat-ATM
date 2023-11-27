#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

/*void tapahtumat::noudaTapahtumat(QString tilinTapahtumat1,QString tilinTapahtumat2,QString tilinTapahtumat3,QString tilinTapahtumat4)
{
    ui->tapahtumaKentta1->setText(tilinTapahtumat1);
    ui->tapahtumaKentta2->setText(tilinTapahtumat2);
    ui->tapahtumaKentta3->setText(tilinTapahtumat3);
    ui->tapahtumaKentta4->setText(tilinTapahtumat4);
   }
*/

void tapahtumat::noudaTapahtumat(QString tilinTapahtumat1,QString tilinTapahtumat2,QString tilinTapahtumat3,QString tilinTapahtumat4)
{
    QStringList tapahtumaLista;
    tapahtumaLista << tilinTapahtumat1 << tilinTapahtumat2 << tilinTapahtumat3 << tilinTapahtumat4;

    // Yhdistä QStringList yhdeksi merkkijonoksi käyttäen join-metodia
    QString yhdistettyTapahtuma = tapahtumaLista.join("\n");

    // Aseta yhdistetty merkkijono tapahtumaKenttään
    ui->tapahtumaKentta->setText(yhdistettyTapahtuma);
}
