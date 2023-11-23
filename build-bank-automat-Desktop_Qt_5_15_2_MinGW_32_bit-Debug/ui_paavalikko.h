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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_paaValikko
{
public:
    QPushButton *nostoNappi;
    QPushButton *lahjoitusNappi;
    QPushButton *kirjauduUlosNappi;
    QPushButton *tapahtumatNappi;
    QPushButton *saldoNappi;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *paaValikko)
    {
        if (paaValikko->objectName().isEmpty())
            paaValikko->setObjectName(QString::fromUtf8("paaValikko"));
        paaValikko->resize(1584, 818);
        paaValikko->setStyleSheet(QString::fromUtf8("background-image: url(:/tausta24.png);"));
        nostoNappi = new QPushButton(paaValikko);
        nostoNappi->setObjectName(QString::fromUtf8("nostoNappi"));
        nostoNappi->setGeometry(QRect(620, 260, 161, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(22);
        nostoNappi->setFont(font);
        nostoNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        lahjoitusNappi = new QPushButton(paaValikko);
        lahjoitusNappi->setObjectName(QString::fromUtf8("lahjoitusNappi"));
        lahjoitusNappi->setGeometry(QRect(500, 360, 261, 51));
        lahjoitusNappi->setFont(font);
        lahjoitusNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        kirjauduUlosNappi = new QPushButton(paaValikko);
        kirjauduUlosNappi->setObjectName(QString::fromUtf8("kirjauduUlosNappi"));
        kirjauduUlosNappi->setGeometry(QRect(680, 460, 191, 51));
        kirjauduUlosNappi->setFont(font);
        kirjauduUlosNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        tapahtumatNappi = new QPushButton(paaValikko);
        tapahtumatNappi->setObjectName(QString::fromUtf8("tapahtumatNappi"));
        tapahtumatNappi->setGeometry(QRect(810, 360, 221, 51));
        tapahtumatNappi->setFont(font);
        tapahtumatNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        saldoNappi = new QPushButton(paaValikko);
        saldoNappi->setObjectName(QString::fromUtf8("saldoNappi"));
        saldoNappi->setGeometry(QRect(810, 260, 161, 51));
        saldoNappi->setFont(font);
        saldoNappi->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        plainTextEdit = new QPlainTextEdit(paaValikko);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(630, 90, 361, 111));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(26);
        plainTextEdit->setFont(font1);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        label = new QLabel(paaValikko);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1010, 20, 281, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        pushButton = new QPushButton(paaValikko);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1310, 20, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));

        retranslateUi(paaValikko);

        QMetaObject::connectSlotsByName(paaValikko);
    } // setupUi

    void retranslateUi(QDialog *paaValikko)
    {
        paaValikko->setWindowTitle(QCoreApplication::translate("paaValikko", "Dialog", nullptr));
        nostoNappi->setText(QCoreApplication::translate("paaValikko", "Nosto", nullptr));
        lahjoitusNappi->setText(QCoreApplication::translate("paaValikko", "Nosto + lahjoitus", nullptr));
        kirjauduUlosNappi->setText(QCoreApplication::translate("paaValikko", "Kirjaudu ulos", nullptr));
        tapahtumatNappi->setText(QCoreApplication::translate("paaValikko", "Tilitapahtumat", nullptr));
        saldoNappi->setText(QCoreApplication::translate("paaValikko", "Saldo", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("paaValikko", "P\303\244\303\244valikko", nullptr));
        label->setText(QCoreApplication::translate("paaValikko", "Olet nyt kirjautuneena.....", nullptr));
        pushButton->setText(QCoreApplication::translate("paaValikko", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paaValikko: public Ui_paaValikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAAVALIKKO_H
