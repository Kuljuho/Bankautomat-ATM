/********************************************************************************
** Form generated from reading UI file 'kirjaudusisaan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUDUSISAAN_H
#define UI_KIRJAUDUSISAAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kirjauduSisaan
{
public:
    QLabel *kirjauduTeksti;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *korttiTeksti;
    QLineEdit *tunnusKayttaja;
    QLineEdit *salasanaKayttaja;
    QLabel *pinTeksti;
    QPushButton *nappiKirjaudu;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *N8;
    QPushButton *N4;
    QPushButton *N0;
    QPushButton *N1;
    QPushButton *N6;
    QPushButton *N3;
    QPushButton *N5;
    QPushButton *N7;
    QPushButton *N2;
    QPushButton *N9;

    void setupUi(QDialog *kirjauduSisaan)
    {
        if (kirjauduSisaan->objectName().isEmpty())
            kirjauduSisaan->setObjectName(QString::fromUtf8("kirjauduSisaan"));
        kirjauduSisaan->setEnabled(true);
        kirjauduSisaan->resize(1583, 820);
        kirjauduSisaan->setStyleSheet(QString::fromUtf8("background-image: url(:/tausta24.png);"));
        kirjauduTeksti = new QLabel(kirjauduSisaan);
        kirjauduTeksti->setObjectName(QString::fromUtf8("kirjauduTeksti"));
        kirjauduTeksti->setGeometry(QRect(470, 90, 611, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(26);
        kirjauduTeksti->setFont(font);
        kirjauduTeksti->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));
        gridLayoutWidget = new QWidget(kirjauduSisaan);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(470, 540, 651, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        korttiTeksti = new QLabel(gridLayoutWidget);
        korttiTeksti->setObjectName(QString::fromUtf8("korttiTeksti"));
        korttiTeksti->setMinimumSize(QSize(300, 50));
        korttiTeksti->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(18);
        korttiTeksti->setFont(font1);
        korttiTeksti->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(korttiTeksti, 0, 0, 1, 1, Qt::AlignBottom);

        tunnusKayttaja = new QLineEdit(gridLayoutWidget);
        tunnusKayttaja->setObjectName(QString::fromUtf8("tunnusKayttaja"));
        tunnusKayttaja->setMinimumSize(QSize(150, 50));
        tunnusKayttaja->setMaximumSize(QSize(150, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        tunnusKayttaja->setFont(font2);
        tunnusKayttaja->setLayoutDirection(Qt::RightToLeft);
        tunnusKayttaja->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Ubuntu\";"));
        tunnusKayttaja->setMaxLength(4);
        tunnusKayttaja->setEchoMode(QLineEdit::Password);
        tunnusKayttaja->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(tunnusKayttaja, 1, 1, 1, 1);

        salasanaKayttaja = new QLineEdit(gridLayoutWidget);
        salasanaKayttaja->setObjectName(QString::fromUtf8("salasanaKayttaja"));
        salasanaKayttaja->setMinimumSize(QSize(300, 50));
        salasanaKayttaja->setMaximumSize(QSize(300, 50));
        salasanaKayttaja->setFont(font2);
        salasanaKayttaja->setLayoutDirection(Qt::RightToLeft);
        salasanaKayttaja->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";\n"
"background-color: rgb(255, 255, 255);"));
        salasanaKayttaja->setMaxLength(19);
        salasanaKayttaja->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(salasanaKayttaja, 1, 0, 1, 1);

        pinTeksti = new QLabel(gridLayoutWidget);
        pinTeksti->setObjectName(QString::fromUtf8("pinTeksti"));
        pinTeksti->setMinimumSize(QSize(150, 50));
        pinTeksti->setMaximumSize(QSize(150, 50));
        pinTeksti->setFont(font1);
        pinTeksti->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));

        gridLayout->addWidget(pinTeksti, 0, 1, 1, 1, Qt::AlignBottom);

        nappiKirjaudu = new QPushButton(gridLayoutWidget);
        nappiKirjaudu->setObjectName(QString::fromUtf8("nappiKirjaudu"));
        nappiKirjaudu->setMinimumSize(QSize(150, 50));
        nappiKirjaudu->setMaximumSize(QSize(150, 50));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(64, 88, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        nappiKirjaudu->setPalette(palette);
        nappiKirjaudu->setFont(font1);
        nappiKirjaudu->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 88, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(nappiKirjaudu, 1, 2, 1, 1);

        layoutWidget = new QWidget(kirjauduSisaan);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(590, 190, 411, 331));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        N8 = new QPushButton(layoutWidget);
        N8->setObjectName(QString::fromUtf8("N8"));
        N8->setMinimumSize(QSize(100, 50));
        N8->setMaximumSize(QSize(100, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(14);
        N8->setFont(font3);
        N8->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N8, 3, 1, 1, 1);

        N4 = new QPushButton(layoutWidget);
        N4->setObjectName(QString::fromUtf8("N4"));
        N4->setMinimumSize(QSize(100, 50));
        N4->setMaximumSize(QSize(100, 50));
        N4->setFont(font3);
        N4->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N4, 1, 0, 1, 1);

        N0 = new QPushButton(layoutWidget);
        N0->setObjectName(QString::fromUtf8("N0"));
        N0->setMinimumSize(QSize(100, 50));
        N0->setMaximumSize(QSize(100, 50));
        N0->setFont(font3);
        N0->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"selection-background-color: rgb(185, 255, 111);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N0, 5, 1, 1, 1);

        N1 = new QPushButton(layoutWidget);
        N1->setObjectName(QString::fromUtf8("N1"));
        N1->setMinimumSize(QSize(100, 50));
        N1->setMaximumSize(QSize(100, 50));
        N1->setFont(font3);
        N1->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);\n"
"border-color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(N1, 0, 0, 1, 1);

        N6 = new QPushButton(layoutWidget);
        N6->setObjectName(QString::fromUtf8("N6"));
        N6->setMinimumSize(QSize(100, 50));
        N6->setMaximumSize(QSize(100, 50));
        N6->setFont(font3);
        N6->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N6, 1, 2, 1, 1);

        N3 = new QPushButton(layoutWidget);
        N3->setObjectName(QString::fromUtf8("N3"));
        N3->setMinimumSize(QSize(100, 50));
        N3->setMaximumSize(QSize(100, 50));
        N3->setFont(font3);
        N3->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N3, 0, 2, 1, 1);

        N5 = new QPushButton(layoutWidget);
        N5->setObjectName(QString::fromUtf8("N5"));
        N5->setMinimumSize(QSize(100, 50));
        N5->setMaximumSize(QSize(100, 50));
        N5->setFont(font3);
        N5->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N5, 1, 1, 1, 1);

        N7 = new QPushButton(layoutWidget);
        N7->setObjectName(QString::fromUtf8("N7"));
        N7->setMinimumSize(QSize(100, 50));
        N7->setMaximumSize(QSize(100, 50));
        N7->setFont(font3);
        N7->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N7, 3, 0, 1, 1);

        N2 = new QPushButton(layoutWidget);
        N2->setObjectName(QString::fromUtf8("N2"));
        N2->setMinimumSize(QSize(100, 50));
        N2->setMaximumSize(QSize(100, 50));
        N2->setFont(font3);
        N2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N2, 0, 1, 1, 1);

        N9 = new QPushButton(layoutWidget);
        N9->setObjectName(QString::fromUtf8("N9"));
        N9->setMinimumSize(QSize(100, 50));
        N9->setMaximumSize(QSize(100, 50));
        N9->setFont(font3);
        N9->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 233, 229);\n"
"color: rgb(64, 88, 100);"));

        gridLayout_2->addWidget(N9, 3, 2, 1, 1);


        retranslateUi(kirjauduSisaan);

        QMetaObject::connectSlotsByName(kirjauduSisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjauduSisaan)
    {
        kirjauduSisaan->setWindowTitle(QCoreApplication::translate("kirjauduSisaan", "Dialog", nullptr));
        kirjauduTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "Tervetuloa! Ole hyv\303\244 ja kirjaudu sis\303\244\303\244n.", nullptr));
        korttiTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "Korttinumero:", nullptr));
        tunnusKayttaja->setPlaceholderText(QString());
        salasanaKayttaja->setPlaceholderText(QString());
        pinTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "Pin-koodi:", nullptr));
        nappiKirjaudu->setText(QCoreApplication::translate("kirjauduSisaan", "Kirjaudu", nullptr));
        N8->setText(QCoreApplication::translate("kirjauduSisaan", "8", nullptr));
        N4->setText(QCoreApplication::translate("kirjauduSisaan", "4", nullptr));
        N0->setText(QCoreApplication::translate("kirjauduSisaan", "0", nullptr));
        N1->setText(QCoreApplication::translate("kirjauduSisaan", "1", nullptr));
        N6->setText(QCoreApplication::translate("kirjauduSisaan", "6", nullptr));
        N3->setText(QCoreApplication::translate("kirjauduSisaan", "3", nullptr));
        N5->setText(QCoreApplication::translate("kirjauduSisaan", "5", nullptr));
        N7->setText(QCoreApplication::translate("kirjauduSisaan", "7", nullptr));
        N2->setText(QCoreApplication::translate("kirjauduSisaan", "2", nullptr));
        N9->setText(QCoreApplication::translate("kirjauduSisaan", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjauduSisaan: public Ui_kirjauduSisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H
