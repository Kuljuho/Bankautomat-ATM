#include "onnistui.h"
#include "paavalikko.h"
#include "ui_onnistui.h"

onnistui::onnistui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::onnistui)
{
    ui->setupUi(this);
    this->showFullScreen();

    QString nappiTyyli = R"(
    QPushButton {
        border-image: url(:/buttontausta.png);
        background-color: transparent;
        color: rgb(255, 255, 255);
        font: 'Ubuntu';
        font-size: 36px;
        background: none;
        border: none;
        background-repeat: none;
        selection-color: rgb(0, 0, 0);
    }
    QPushButton:pressed {
        border-image: url(:/buttonpainettu.png);
        background-color: transparent;
        color: rgb(255, 255, 255);
        font: 'Ubuntu';
        font-size: 36px;
        background: none;
        border: none;
        background-repeat: none;
        selection-color: rgb(0, 0, 0);
    })";

    labelKysymys = new QLabel("Vahvista tapahtuma?", this);
    labelKysymys->setAlignment(Qt::AlignCenter);
    labelKysymys->setFixedSize(800, 100);
    labelKysymys->setStyleSheet(R"(
    QLabel{
    border-image: url(:/tekstitausta.png);
    background-color: transparent;
    color: rgb(255, 255, 255);
    font: 'Ubuntu';
    font-size: 72px;
    background: none;
    border: none;
    background-repeat: none;
    selection-color: rgb(0, 0, 0);
    })");

    kyllaNappi = new QPushButton("Kyllä", this);
    kyllaNappi->setFixedSize(350, 80);
    kyllaNappi->setStyleSheet(nappiTyyli);
    connect(kyllaNappi, &QPushButton::clicked, this, &onnistui::kyllaPainettu);

    eiNappi = new QPushButton("Ei", this);
    eiNappi->setFixedSize(350, 80);
    eiNappi->setStyleSheet(nappiTyyli);
    connect(eiNappi, &QPushButton::clicked, this, &onnistui::eiPainettu);

    labelViesti = new QLabel(this);
    labelViesti->setVisible(false);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addWidget(labelKysymys, 0, Qt::AlignCenter);

    QHBoxLayout *nappiLayout = new QHBoxLayout();
    nappiLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));
    nappiLayout->addWidget(kyllaNappi);
    nappiLayout->addWidget(eiNappi);
    nappiLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));

    layout->addLayout(nappiLayout);

    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addWidget(labelViesti, 0, Qt::AlignCenter);
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    layout->addWidget(ui->paaValikkoonNappi, 0, Qt::AlignCenter);
    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));

    this->setLayout(layout);
    vastaus = false;

    connect(ui->paaValikkoonNappi, &QPushButton::clicked, this, &onnistui::avaa_paaValikko);
}

onnistui::~onnistui()
{
    delete ui;
}

void onnistui::setNameOnnistui(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void onnistui::asetaViesti(const QString &viesti) {
    labelViesti->setStyleSheet(R"(
    QLabel{
    border-image: url(:/tekstitausta.png);
    background-color: transparent;
    color: rgb(255, 255, 255);
    font: 'Ubuntu';
    font-size: 64px;
    background: none;
    border: none;
    background-repeat: none;
    selection-color: rgb(0, 0, 0);
    })");
    labelViesti->setAlignment(Qt::AlignCenter);
    labelViesti->setFixedSize(800, 100);
    labelViesti->setText(viesti);
}

void onnistui::avaa_paaValikko() {
    paaValikko *paaValikkoPointteri = new paaValikko(this);
    paaValikkoPointteri->exec();
}

void onnistui::kyllaPainettu() {
    vastaus = true;
    labelKysymys->hide();
    kyllaNappi->hide();
    eiNappi->hide();

    labelViesti->setVisible(true);
    asetaViesti("Tapahtuma onnistui!");
}

void onnistui::eiPainettu() {
    vastaus = false;
    labelKysymys->hide();
    kyllaNappi->hide();
    eiNappi->hide();

    labelViesti->setVisible(true);
    asetaViesti("Tapahtuma epäonnistui");
}

bool onnistui::sivuPaivitys() const {
    return vastaus;
}
