#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "kirjaudusisaan.h"
#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    kirjauduSisaan *kirjauduSisaanPointteri;

private slots:
    void kirjauduNappi();
};
#endif // MAINWINDOW_H
