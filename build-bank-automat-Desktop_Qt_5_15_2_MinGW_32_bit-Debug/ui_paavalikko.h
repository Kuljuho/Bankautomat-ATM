/********************************************************************************
** Form generated from reading UI file 'paavalikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAAVALIKKO_H
#define UI_PAAVALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_paaValikko
{
public:
    QPushButton *ottoNappi;
    QPushButton *ottoLahjoitusNappi;
    QPushButton *kirjauduUlosNappi;
    QPushButton *tapahtumatNappi;
    QPushButton *saldoNappi;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *paaValikko)
    {
        if (paaValikko->objectName().isEmpty())
            paaValikko->setObjectName(QString::fromUtf8("paaValikko"));
        paaValikko->resize(400, 300);
        ottoNappi = new QPushButton(paaValikko);
        ottoNappi->setObjectName(QString::fromUtf8("ottoNappi"));
        ottoNappi->setGeometry(QRect(10, 110, 161, 51));
        QFont font;
        font.setPointSize(16);
        ottoNappi->setFont(font);
        ottoLahjoitusNappi = new QPushButton(paaValikko);
        ottoLahjoitusNappi->setObjectName(QString::fromUtf8("ottoLahjoitusNappi"));
        ottoLahjoitusNappi->setGeometry(QRect(10, 170, 161, 51));
        ottoLahjoitusNappi->setFont(font);
        kirjauduUlosNappi = new QPushButton(paaValikko);
        kirjauduUlosNappi->setObjectName(QString::fromUtf8("kirjauduUlosNappi"));
        kirjauduUlosNappi->setGeometry(QRect(10, 230, 161, 51));
        kirjauduUlosNappi->setFont(font);
        tapahtumatNappi = new QPushButton(paaValikko);
        tapahtumatNappi->setObjectName(QString::fromUtf8("tapahtumatNappi"));
        tapahtumatNappi->setGeometry(QRect(230, 230, 161, 51));
        tapahtumatNappi->setFont(font);
        saldoNappi = new QPushButton(paaValikko);
        saldoNappi->setObjectName(QString::fromUtf8("saldoNappi"));
        saldoNappi->setGeometry(QRect(230, 170, 161, 51));
        saldoNappi->setFont(font);
        plainTextEdit = new QPlainTextEdit(paaValikko);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 10, 171, 61));
        QFont font1;
        font1.setPointSize(26);
        plainTextEdit->setFont(font1);

        retranslateUi(paaValikko);

        QMetaObject::connectSlotsByName(paaValikko);
    } // setupUi

    void retranslateUi(QDialog *paaValikko)
    {
        paaValikko->setWindowTitle(QCoreApplication::translate("paaValikko", "Dialog", nullptr));
        ottoNappi->setText(QCoreApplication::translate("paaValikko", "Otto", nullptr));
        ottoLahjoitusNappi->setText(QCoreApplication::translate("paaValikko", "Otto + lahjoitus", nullptr));
        kirjauduUlosNappi->setText(QCoreApplication::translate("paaValikko", "Kirjaudu ulos", nullptr));
        tapahtumatNappi->setText(QCoreApplication::translate("paaValikko", "Tilitapahtumat", nullptr));
        saldoNappi->setText(QCoreApplication::translate("paaValikko", "Saldo", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("paaValikko", "P\303\244\303\244valikko", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paaValikko: public Ui_paaValikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAAVALIKKO_H
