/********************************************************************************
** Form generated from reading UI file 'lahjoitus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAHJOITUS_H
#define UI_LAHJOITUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *logo;
    QLabel *logo_2;

    void setupUi(QDialog *lahjoitus)
    {
        if (lahjoitus->objectName().isEmpty())
            lahjoitus->setObjectName("lahjoitus");
        lahjoitus->resize(1589, 727);
        lahjoitus->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(lahjoitus);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(507, 190, 751, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        L10 = new QPushButton(gridLayoutWidget);
        L10->setObjectName("L10");
        L10->setMinimumSize(QSize(350, 100));
        L10->setMaximumSize(QSize(350, 100));
        QFont font;
        font.setPointSize(22);
        L10->setFont(font);
        L10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L10, 0, 1, 1, 1);

        L5 = new QPushButton(gridLayoutWidget);
        L5->setObjectName("L5");
        L5->setMinimumSize(QSize(350, 100));
        L5->setMaximumSize(QSize(350, 100));
        L5->setFont(font);
        L5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L5, 0, 0, 1, 1);

        L20 = new QPushButton(gridLayoutWidget);
        L20->setObjectName("L20");
        L20->setMinimumSize(QSize(350, 100));
        L20->setMaximumSize(QSize(350, 100));
        L20->setFont(font);
        L20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L20, 1, 0, 1, 1);

        L2 = new QPushButton(gridLayoutWidget);
        L2->setObjectName("L2");
        L2->setMinimumSize(QSize(350, 100));
        L2->setMaximumSize(QSize(350, 100));
        L2->setFont(font);
        L2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L2, 1, 1, 1, 1);

        L1 = new QPushButton(gridLayoutWidget);
        L1->setObjectName("L1");
        L1->setMinimumSize(QSize(350, 100));
        L1->setMaximumSize(QSize(350, 100));
        L1->setFont(font);
        L1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L1, 2, 0, 1, 1);

        L15 = new QPushButton(gridLayoutWidget);
        L15->setObjectName("L15");
        L15->setMinimumSize(QSize(350, 100));
        L15->setMaximumSize(QSize(350, 100));
        L15->setFont(font);
        L15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(L15, 2, 1, 1, 1);

        takaisinNappi = new QPushButton(lahjoitus);
        takaisinNappi->setObjectName("takaisinNappi");
        takaisinNappi->setGeometry(QRect(1300, 600, 261, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(22);
        takaisinNappi->setFont(font1);
        takaisinNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/buttonpainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(lahjoitus);
        label->setObjectName("label");
        label->setGeometry(QRect(1180, 20, 281, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        logo = new QLabel(lahjoitus);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo2.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        logo_2 = new QLabel(lahjoitus);
        logo_2->setObjectName("logo_2");
        logo_2->setGeometry(QRect(0, 0, 171, 191));
        logo_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));

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
        label->setText(QCoreApplication::translate("lahjoitus", "Olet nyt kirjautuneena.....", nullptr));
        logo->setText(QString());
        logo_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lahjoitus: public Ui_lahjoitus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAHJOITUS_H
