/********************************************************************************
** Form generated from reading UI file 'creditvalikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITVALIKKO_H
#define UI_CREDITVALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_creditvalikko
{
public:
    QLabel *valitse;
    QPushButton *creditNappi;
    QPushButton *debitNappi;
    QLabel *logo;

    void setupUi(QDialog *creditvalikko)
    {
        if (creditvalikko->objectName().isEmpty())
            creditvalikko->setObjectName(QString::fromUtf8("creditvalikko"));
        creditvalikko->setEnabled(true);
        creditvalikko->resize(1583, 815);
        creditvalikko->setStyleSheet(QString::fromUtf8("background-image: url(:/tausta24.png);"));
        valitse = new QLabel(creditvalikko);
        valitse->setObjectName(QString::fromUtf8("valitse"));
        valitse->setGeometry(QRect(410, 170, 761, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(36);
        font.setBold(true);
        valitse->setFont(font);
        valitse->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));
        creditNappi = new QPushButton(creditvalikko);
        creditNappi->setObjectName(QString::fromUtf8("creditNappi"));
        creditNappi->setGeometry(QRect(320, 270, 581, 461));
        creditNappi->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/CREDIT.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        debitNappi = new QPushButton(creditvalikko);
        debitNappi->setObjectName(QString::fromUtf8("debitNappi"));
        debitNappi->setGeometry(QRect(750, 290, 581, 461));
        debitNappi->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/DEBIT.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        logo = new QLabel(creditvalikko);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 201, 161));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        debitNappi->raise();
        valitse->raise();
        creditNappi->raise();
        logo->raise();

        retranslateUi(creditvalikko);

        QMetaObject::connectSlotsByName(creditvalikko);
    } // setupUi

    void retranslateUi(QDialog *creditvalikko)
    {
        creditvalikko->setWindowTitle(QCoreApplication::translate("creditvalikko", "Dialog", nullptr));
        valitse->setText(QCoreApplication::translate("creditvalikko", "Valitse korttitapahtuman tyyppi:", nullptr));
        creditNappi->setText(QString());
        debitNappi->setText(QString());
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class creditvalikko: public Ui_creditvalikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITVALIKKO_H
