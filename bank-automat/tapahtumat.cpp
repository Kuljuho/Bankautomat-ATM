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

void tapahtumat::noudaTapahtumat(QString tilinTapahtumat)
{
    ui->tapahtumaKentta->setText(tilinTapahtumat);
}

void tapahtumat::setNameTapahtumat(const QString &newName)
{
    ui->kayttajaNimi->setText(newName);
}

void tapahtumat::setToken(const QByteArray &newToken)
{
    token=newToken;
}

void tapahtumat::setId(const QString &newid)
{
    id=newid;
}
void tapahtumat::on_seuraavaNappi_clicked()
{
    QString site_url="http://localhost:3000/transaction/account2/"+id;
    QNetworkRequest request((site_url));

     request.setRawHeader(QByteArray("Authorization"),(token));

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(haeTilitapahtumat2(QNetworkReply*)));
    reply = getManager->get(request);
}

void tapahtumat::haeTilitapahtumat2(QNetworkReply *reply)
{
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString transactions;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        transactions += json_obj["transactionType"].toString()+", "+QString::number(json_obj["amount"].toDouble())+", "+json_obj["dateTime"].toString()+"\n";
    }
    qDebug()<<transactions;
    ui->tapahtumaKentta->setText("kaappikaappi");

    reply->deleteLater();
    getManager->deleteLater();
}




