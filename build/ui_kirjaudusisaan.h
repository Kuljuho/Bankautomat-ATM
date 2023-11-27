/********************************************************************************
** Form generated from reading UI file 'kirjaudusisaan.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kirjauduSisaan
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *korttiTeksti;
    QLineEdit *salasanaKayttaja;
    QLineEdit *tunnusKayttaja;
    QLabel *pinTeksti;
    QPushButton *nappiKirjaudu;
    QLabel *logo_2;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *kirjauduTeksti;
    QGridLayout *gridLayout_2;
    QPushButton *N2;
    QPushButton *N0;
    QPushButton *N8;
    QPushButton *N5;
    QPushButton *N3;
    QPushButton *N1;
    QPushButton *N4;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N9;

    void setupUi(QDialog *kirjauduSisaan)
    {
        if (kirjauduSisaan->objectName().isEmpty())
            kirjauduSisaan->setObjectName("kirjauduSisaan");
        kirjauduSisaan->setEnabled(true);
        kirjauduSisaan->resize(1583, 820);
        kirjauduSisaan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(kirjauduSisaan);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(690, 610, 651, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        korttiTeksti = new QLabel(gridLayoutWidget);
        korttiTeksti->setObjectName("korttiTeksti");
        korttiTeksti->setMinimumSize(QSize(300, 50));
        korttiTeksti->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(18);
        korttiTeksti->setFont(font);
        korttiTeksti->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(korttiTeksti, 0, 0, 1, 1, Qt::AlignBottom);

        salasanaKayttaja = new QLineEdit(gridLayoutWidget);
        salasanaKayttaja->setObjectName("salasanaKayttaja");
        salasanaKayttaja->setMinimumSize(QSize(150, 50));
        salasanaKayttaja->setMaximumSize(QSize(150, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        salasanaKayttaja->setFont(font1);
        salasanaKayttaja->setLayoutDirection(Qt::RightToLeft);
        salasanaKayttaja->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        salasanaKayttaja->setMaxLength(7);
        salasanaKayttaja->setEchoMode(QLineEdit::Password);
        salasanaKayttaja->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(salasanaKayttaja, 1, 1, 1, 1);

        tunnusKayttaja = new QLineEdit(gridLayoutWidget);
        tunnusKayttaja->setObjectName("tunnusKayttaja");
        tunnusKayttaja->setMinimumSize(QSize(300, 50));
        tunnusKayttaja->setMaximumSize(QSize(300, 50));
        tunnusKayttaja->setFont(font1);
        tunnusKayttaja->setLayoutDirection(Qt::RightToLeft);
        tunnusKayttaja->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";\n"
"background-color: rgb(255, 255, 255);"));
        tunnusKayttaja->setMaxLength(19);
        tunnusKayttaja->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(tunnusKayttaja, 1, 0, 1, 1);

        pinTeksti = new QLabel(gridLayoutWidget);
        pinTeksti->setObjectName("pinTeksti");
        pinTeksti->setMinimumSize(QSize(150, 50));
        pinTeksti->setMaximumSize(QSize(150, 50));
        pinTeksti->setFont(font);
        pinTeksti->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(pinTeksti, 0, 1, 1, 1, Qt::AlignBottom);

        nappiKirjaudu = new QPushButton(gridLayoutWidget);
        nappiKirjaudu->setObjectName("nappiKirjaudu");
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
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        nappiKirjaudu->setPalette(palette);
        nappiKirjaudu->setFont(font);
        nappiKirjaudu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(nappiKirjaudu, 1, 2, 1, 1);

        logo_2 = new QLabel(kirjauduSisaan);
        logo_2->setObjectName("logo_2");
        logo_2->setGeometry(QRect(0, 0, 171, 191));
        logo_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        widget = new QWidget(kirjauduSisaan);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(800, 150, 423, 361));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 425, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        kirjauduTeksti = new QLabel(verticalLayoutWidget);
        kirjauduTeksti->setObjectName("kirjauduTeksti");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(26);
        kirjauduTeksti->setFont(font2);
        kirjauduTeksti->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	color: rgb(0, 61, 0);\n"
"	border: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
""));

        verticalLayout->addWidget(kirjauduTeksti);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        N2 = new QPushButton(verticalLayoutWidget);
        N2->setObjectName("N2");
        N2->setMinimumSize(QSize(130, 60));
        N2->setMaximumSize(QSize(130, 60));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(20);
        font3.setBold(false);
        N2->setFont(font3);
        N2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N2, 0, 1, 1, 1);

        N0 = new QPushButton(verticalLayoutWidget);
        N0->setObjectName("N0");
        N0->setMinimumSize(QSize(130, 60));
        N0->setMaximumSize(QSize(130, 60));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ubuntu")});
        font4.setPointSize(20);
        N0->setFont(font4);
        N0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N0, 3, 1, 1, 1);

        N8 = new QPushButton(verticalLayoutWidget);
        N8->setObjectName("N8");
        N8->setMinimumSize(QSize(130, 60));
        N8->setMaximumSize(QSize(130, 60));
        N8->setFont(font4);
        N8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N8, 2, 1, 1, 1);

        N5 = new QPushButton(verticalLayoutWidget);
        N5->setObjectName("N5");
        N5->setMinimumSize(QSize(130, 60));
        N5->setMaximumSize(QSize(130, 60));
        N5->setFont(font4);
        N5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N5, 1, 1, 1, 1);

        N3 = new QPushButton(verticalLayoutWidget);
        N3->setObjectName("N3");
        N3->setMinimumSize(QSize(130, 60));
        N3->setMaximumSize(QSize(130, 60));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ubuntu")});
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        N3->setFont(font5);
        N3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N3, 0, 2, 1, 1);

        N1 = new QPushButton(verticalLayoutWidget);
        N1->setObjectName("N1");
        N1->setMinimumSize(QSize(130, 60));
        N1->setMaximumSize(QSize(130, 60));
        N1->setFont(font4);
        N1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
""));

        gridLayout_2->addWidget(N1, 0, 0, 1, 1);

        N4 = new QPushButton(verticalLayoutWidget);
        N4->setObjectName("N4");
        N4->setMinimumSize(QSize(130, 60));
        N4->setMaximumSize(QSize(130, 60));
        N4->setFont(font4);
        N4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N4, 1, 0, 1, 1);

        N6 = new QPushButton(verticalLayoutWidget);
        N6->setObjectName("N6");
        N6->setMinimumSize(QSize(130, 60));
        N6->setMaximumSize(QSize(130, 60));
        N6->setFont(font4);
        N6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N6, 1, 2, 1, 1);

        N7 = new QPushButton(verticalLayoutWidget);
        N7->setObjectName("N7");
        N7->setMinimumSize(QSize(130, 60));
        N7->setMaximumSize(QSize(130, 60));
        N7->setFont(font4);
        N7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N7, 2, 0, 1, 1);

        N9 = new QPushButton(verticalLayoutWidget);
        N9->setObjectName("N9");
        N9->setMinimumSize(QSize(130, 60));
        N9->setMaximumSize(QSize(130, 60));
        N9->setFont(font4);
        N9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/nappipainamaton.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/nappipainettu.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_2->addWidget(N9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(kirjauduSisaan);

        QMetaObject::connectSlotsByName(kirjauduSisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjauduSisaan)
    {
        kirjauduSisaan->setWindowTitle(QCoreApplication::translate("kirjauduSisaan", "Dialog", nullptr));
        korttiTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "   Korttinumero:", nullptr));
        salasanaKayttaja->setPlaceholderText(QString());
        tunnusKayttaja->setPlaceholderText(QString());
        pinTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "  Pin-koodi:", nullptr));
        nappiKirjaudu->setText(QCoreApplication::translate("kirjauduSisaan", "Kirjaudu", nullptr));
        logo_2->setText(QString());
        kirjauduTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "Ole hyv\303\244 ja kirjaudu sis\303\244\303\244n.", nullptr));
        N2->setText(QCoreApplication::translate("kirjauduSisaan", "2", nullptr));
        N0->setText(QCoreApplication::translate("kirjauduSisaan", "0", nullptr));
        N8->setText(QCoreApplication::translate("kirjauduSisaan", "8", nullptr));
        N5->setText(QCoreApplication::translate("kirjauduSisaan", "5", nullptr));
        N3->setText(QCoreApplication::translate("kirjauduSisaan", "3", nullptr));
        N1->setText(QCoreApplication::translate("kirjauduSisaan", "1", nullptr));
        N4->setText(QCoreApplication::translate("kirjauduSisaan", "4", nullptr));
        N6->setText(QCoreApplication::translate("kirjauduSisaan", "6", nullptr));
        N7->setText(QCoreApplication::translate("kirjauduSisaan", "7", nullptr));
        N9->setText(QCoreApplication::translate("kirjauduSisaan", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjauduSisaan: public Ui_kirjauduSisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H
