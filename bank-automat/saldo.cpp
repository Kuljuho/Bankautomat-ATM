#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->takaisinNappi, &QPushButton::clicked, this, &QDialog::close);
}

saldo::~saldo()
{
    delete ui;
}

void saldo::on_saldoNappi_clicked(QNetworkReply *reply)
{
    QString site_url="http://localhost:3000/saldo/id";
    QNetworkRequest request((site_url));
    //WEBTOKEN ALKU
    QByteArray myToken="Bearer xRstgr...";
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU
    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getBookSlot(QNetworkReply*)));

    reply = getManager->get(request);
}
