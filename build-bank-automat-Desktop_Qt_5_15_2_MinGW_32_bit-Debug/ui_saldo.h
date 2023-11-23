/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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

    void setupUi(QDialog *saldo)
    {
        if (saldo->objectName().isEmpty())
            saldo->setObjectName(QString::fromUtf8("saldo"));
        saldo->resize(1583, 689);
        takaisinNappi = new QPushButton(saldo);
        takaisinNappi->setObjectName(QString::fromUtf8("takaisinNappi"));
        takaisinNappi->setGeometry(QRect(1150, 550, 291, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(22);
        takaisinNappi->setFont(font);
        saldoTeksti = new QLabel(saldo);
        saldoTeksti->setObjectName(QString::fromUtf8("saldoTeksti"));
        saldoTeksti->setGeometry(QRect(560, 220, 141, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(20);
        saldoTeksti->setFont(font1);
        saldoKentta = new QLineEdit(saldo);
        saldoKentta->setObjectName(QString::fromUtf8("saldoKentta"));
        saldoKentta->setGeometry(QRect(710, 220, 241, 71));
        saldoKentta->setFont(font1);

        retranslateUi(saldo);

        QMetaObject::connectSlotsByName(saldo);
    } // setupUi

    void retranslateUi(QDialog *saldo)
    {
        saldo->setWindowTitle(QCoreApplication::translate("saldo", "Dialog", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("saldo", "Palaa takaisin", nullptr));
        saldoTeksti->setText(QCoreApplication::translate("saldo", "Tilin saldo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saldo: public Ui_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
