/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *onnistuiNappi;
    QLabel *logo;

    void setupUi(QDialog *nosto)
    {
        if (nosto->objectName().isEmpty())
            nosto->setObjectName("nosto");
        nosto->resize(1572, 697);
        nosto->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(nosto);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(610, 140, 608, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        N5 = new QPushButton(gridLayoutWidget);
        N5->setObjectName("N5");
        N5->setEnabled(true);
        N5->setMinimumSize(QSize(300, 100));
        N5->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(22);
        N5->setFont(font);
        N5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N5, 0, 0, 1, 1);

        N10 = new QPushButton(gridLayoutWidget);
        N10->setObjectName("N10");
        N10->setMinimumSize(QSize(300, 100));
        N10->setMaximumSize(QSize(300, 100));
        N10->setFont(font);
        N10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N10, 1, 0, 1, 1);

        N20 = new QPushButton(gridLayoutWidget);
        N20->setObjectName("N20");
        N20->setMinimumSize(QSize(300, 100));
        N20->setMaximumSize(QSize(300, 100));
        N20->setFont(font);
        N20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N20, 2, 0, 1, 1);

        N30 = new QPushButton(gridLayoutWidget);
        N30->setObjectName("N30");
        N30->setMinimumSize(QSize(300, 100));
        N30->setMaximumSize(QSize(300, 100));
        N30->setFont(font);
        N30->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N30, 1, 1, 1, 1);

        N25 = new QPushButton(gridLayoutWidget);
        N25->setObjectName("N25");
        N25->setMinimumSize(QSize(300, 100));
        N25->setMaximumSize(QSize(300, 100));
        N25->setFont(font);
        N25->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N25, 0, 1, 1, 1);

        N50 = new QPushButton(gridLayoutWidget);
        N50->setObjectName("N50");
        N50->setMinimumSize(QSize(300, 100));
        N50->setMaximumSize(QSize(300, 100));
        N50->setFont(font);
        N50->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(N50, 2, 1, 1, 1);

        takaisinNappi = new QPushButton(nosto);
        takaisinNappi->setObjectName("takaisinNappi");
        takaisinNappi->setGeometry(QRect(250, 180, 271, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(20);
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
        label = new QLabel(nosto);
        label->setObjectName("label");
        label->setGeometry(QRect(1170, 20, 281, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        onnistuiNappi = new QPushButton(nosto);
        onnistuiNappi->setObjectName("onnistuiNappi");
        onnistuiNappi->setGeometry(QRect(260, 360, 241, 81));
        onnistuiNappi->setFont(font1);
        onnistuiNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        logo = new QLabel(nosto);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));

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
        label->setText(QCoreApplication::translate("nosto", "Olet nyt kirjautuneena.....", nullptr));
        onnistuiNappi->setText(QCoreApplication::translate("nosto", "Onnistui", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nosto: public Ui_nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
