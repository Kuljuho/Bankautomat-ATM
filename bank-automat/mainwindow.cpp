#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showFullScreen();

    connect(ui->kirjauduNappi, &QPushButton::clicked, this, &MainWindow::kirjauduNappi);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        this->close();
    }
}

void MainWindow::kirjauduNappi()
{
    kirjauduSisaanPointteri = new kirjauduSisaan(this);
    connect(kirjauduSisaanPointteri, &kirjauduSisaan::vaihdaKieli, this, &MainWindow::vaihdaKieli);
    kirjauduSisaanPointteri->show();
}

void MainWindow::vaihdaKieli(const QString &language) {
    static QTranslator translator;
    if(language == "english") {
        if(translator.load(":/english.qm")) {
            qApp->installTranslator(&translator);
        } else {
            qDebug() << "Englannin lataaminen epäonnistui";
        }
    } else if (language == "finnish") {
        qApp->removeTranslator(&translator);
    }
    ui->retranslateUi(this);
}
