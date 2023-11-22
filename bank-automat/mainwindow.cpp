#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->kirjauduNappi, &QPushButton::clicked, this, &MainWindow::kirjauduNappi);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::kirjauduNappi()
{
    kirjauduSisaanPointteri = new kirjauduSisaan(this);
    kirjauduSisaanPointteri->show();

}

