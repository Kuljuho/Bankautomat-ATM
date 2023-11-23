/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nosto
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *N5;
    QPushButton *N10;
    QPushButton *N20;
    QPushButton *N30;
    QPushButton *N25;
    QPushButton *N50;
    QPushButton *takaisinNappi;

    void setupUi(QDialog *nosto)
    {
        if (nosto->objectName().isEmpty())
            nosto->setObjectName(QString::fromUtf8("nosto"));
        nosto->resize(1572, 697);
        nosto->setStyleSheet(QString::fromUtf8("background-image: url(:/tausta24.png);"));
        gridLayoutWidget = new QWidget(nosto);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(610, 140, 581, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        N5 = new QPushButton(gridLayoutWidget);
        N5->setObjectName(QString::fromUtf8("N5"));
        N5->setEnabled(true);
        N5->setMinimumSize(QSize(200, 50));
        N5->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(22);
        N5->setFont(font);
        N5->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N5, 0, 0, 1, 1);

        N10 = new QPushButton(gridLayoutWidget);
        N10->setObjectName(QString::fromUtf8("N10"));
        N10->setMinimumSize(QSize(200, 50));
        N10->setMaximumSize(QSize(200, 50));
        N10->setFont(font);
        N10->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N10, 1, 0, 1, 1);

        N20 = new QPushButton(gridLayoutWidget);
        N20->setObjectName(QString::fromUtf8("N20"));
        N20->setMinimumSize(QSize(200, 50));
        N20->setMaximumSize(QSize(200, 50));
        N20->setFont(font);
        N20->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N20, 2, 0, 1, 1);

        N30 = new QPushButton(gridLayoutWidget);
        N30->setObjectName(QString::fromUtf8("N30"));
        N30->setMinimumSize(QSize(200, 50));
        N30->setMaximumSize(QSize(200, 50));
        N30->setFont(font);
        N30->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N30, 1, 1, 1, 1);

        N25 = new QPushButton(gridLayoutWidget);
        N25->setObjectName(QString::fromUtf8("N25"));
        N25->setMinimumSize(QSize(200, 50));
        N25->setMaximumSize(QSize(200, 50));
        N25->setFont(font);
        N25->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N25, 0, 1, 1, 1);

        N50 = new QPushButton(gridLayoutWidget);
        N50->setObjectName(QString::fromUtf8("N50"));
        N50->setMinimumSize(QSize(200, 50));
        N50->setMaximumSize(QSize(200, 50));
        N50->setFont(font);
        N50->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(N50, 2, 1, 1, 1);

        takaisinNappi = new QPushButton(nosto);
        takaisinNappi->setObjectName(QString::fromUtf8("takaisinNappi"));
        takaisinNappi->setGeometry(QRect(200, 150, 341, 151));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(20);
        takaisinNappi->setFont(font1);
        takaisinNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(nosto);

        QMetaObject::connectSlotsByName(nosto);
    } // setupUi

    void retranslateUi(QDialog *nosto)
    {
        nosto->setWindowTitle(QCoreApplication::translate("nosto", "Dialog", nullptr));
        N5->setText(QCoreApplication::translate("nosto", "5 euroa", nullptr));
        N10->setText(QCoreApplication::translate("nosto", "10 euroa", nullptr));
        N20->setText(QCoreApplication::translate("nosto", "20 euroa", nullptr));
        N30->setText(QCoreApplication::translate("nosto", "30 euroa", nullptr));
        N25->setText(QCoreApplication::translate("nosto", " 25 euroa", nullptr));
        N50->setText(QCoreApplication::translate("nosto", "50 euroa", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("nosto", "Palaa takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nosto: public Ui_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
