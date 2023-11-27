/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_saldo
{
public:
    QPushButton *takaisinNappi;
    QLabel *saldoTeksti;
    QLineEdit *saldoKentta;
    QLabel *label;
    QLabel *logo;

    void setupUi(QDialog *saldo)
    {
        if (saldo->objectName().isEmpty())
            saldo->setObjectName("saldo");
        saldo->resize(1583, 689);
        takaisinNappi = new QPushButton(saldo);
        takaisinNappi->setObjectName("takaisinNappi");
        takaisinNappi->setGeometry(QRect(1020, 580, 261, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(22);
        takaisinNappi->setFont(font);
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
        saldoTeksti = new QLabel(saldo);
        saldoTeksti->setObjectName("saldoTeksti");
        saldoTeksti->setGeometry(QRect(560, 220, 141, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(20);
        saldoTeksti->setFont(font1);
        saldoKentta = new QLineEdit(saldo);
        saldoKentta->setObjectName("saldoKentta");
        saldoKentta->setGeometry(QRect(700, 230, 241, 71));
        saldoKentta->setFont(font1);
        label = new QLabel(saldo);
        label->setObjectName("label");
        label->setGeometry(QRect(1150, 20, 281, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        logo = new QLabel(saldo);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));

        retranslateUi(saldo);

        QMetaObject::connectSlotsByName(saldo);
    } // setupUi

    void retranslateUi(QDialog *saldo)
    {
        saldo->setWindowTitle(QCoreApplication::translate("saldo", "Dialog", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("saldo", "Palaa takaisin", nullptr));
        saldoTeksti->setText(QCoreApplication::translate("saldo", "Tilin saldo:", nullptr));
        label->setText(QCoreApplication::translate("saldo", "Olet nyt kirjautuneena.....", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class saldo: public Ui_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
