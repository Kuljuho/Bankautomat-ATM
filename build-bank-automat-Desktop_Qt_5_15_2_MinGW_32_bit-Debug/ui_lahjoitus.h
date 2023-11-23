/********************************************************************************
** Form generated from reading UI file 'lahjoitus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAHJOITUS_H
#define UI_LAHJOITUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lahjoitus
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *L10;
    QPushButton *L5;
    QPushButton *L20;
    QPushButton *L2;
    QPushButton *L1;
    QPushButton *L15;
    QPushButton *takaisinNappi;

    void setupUi(QDialog *lahjoitus)
    {
        if (lahjoitus->objectName().isEmpty())
            lahjoitus->setObjectName(QString::fromUtf8("lahjoitus"));
        lahjoitus->resize(1589, 727);
        lahjoitus->setStyleSheet(QString::fromUtf8("background-image: url(:/tausta24.png);"));
        gridLayoutWidget = new QWidget(lahjoitus);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(550, 190, 421, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        L10 = new QPushButton(gridLayoutWidget);
        L10->setObjectName(QString::fromUtf8("L10"));

        gridLayout->addWidget(L10, 0, 1, 1, 1);

        L5 = new QPushButton(gridLayoutWidget);
        L5->setObjectName(QString::fromUtf8("L5"));

        gridLayout->addWidget(L5, 0, 0, 1, 1);

        L20 = new QPushButton(gridLayoutWidget);
        L20->setObjectName(QString::fromUtf8("L20"));

        gridLayout->addWidget(L20, 1, 0, 1, 1);

        L2 = new QPushButton(gridLayoutWidget);
        L2->setObjectName(QString::fromUtf8("L2"));

        gridLayout->addWidget(L2, 1, 1, 1, 1);

        L1 = new QPushButton(gridLayoutWidget);
        L1->setObjectName(QString::fromUtf8("L1"));

        gridLayout->addWidget(L1, 2, 0, 1, 1);

        L15 = new QPushButton(gridLayoutWidget);
        L15->setObjectName(QString::fromUtf8("L15"));

        gridLayout->addWidget(L15, 2, 1, 1, 1);

        takaisinNappi = new QPushButton(lahjoitus);
        takaisinNappi->setObjectName(QString::fromUtf8("takaisinNappi"));
        takaisinNappi->setGeometry(QRect(150, 100, 291, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(22);
        takaisinNappi->setFont(font);
        takaisinNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(lahjoitus);

        QMetaObject::connectSlotsByName(lahjoitus);
    } // setupUi

    void retranslateUi(QDialog *lahjoitus)
    {
        lahjoitus->setWindowTitle(QCoreApplication::translate("lahjoitus", "Dialog", nullptr));
        L10->setText(QCoreApplication::translate("lahjoitus", "10", nullptr));
        L5->setText(QCoreApplication::translate("lahjoitus", "5 (Lahjoitus ", nullptr));
        L20->setText(QCoreApplication::translate("lahjoitus", "20", nullptr));
        L2->setText(QCoreApplication::translate("lahjoitus", "25", nullptr));
        L1->setText(QCoreApplication::translate("lahjoitus", "30", nullptr));
        L15->setText(QCoreApplication::translate("lahjoitus", "50", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("lahjoitus", "Palaa takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lahjoitus: public Ui_lahjoitus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAHJOITUS_H
