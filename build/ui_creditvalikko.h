/********************************************************************************
** Form generated from reading UI file 'creditvalikko.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
    QLabel *label;

    void setupUi(QDialog *creditvalikko)
    {
        if (creditvalikko->objectName().isEmpty())
            creditvalikko->setObjectName("creditvalikko");
        creditvalikko->setEnabled(true);
        creditvalikko->resize(1583, 815);
        creditvalikko->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        valitse = new QLabel(creditvalikko);
        valitse->setObjectName("valitse");
        valitse->setGeometry(QRect(410, 170, 761, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(36);
        font.setBold(true);
        valitse->setFont(font);
        valitse->setStyleSheet(QString::fromUtf8("color: rgb(64, 88, 100);"));
        creditNappi = new QPushButton(creditvalikko);
        creditNappi->setObjectName("creditNappi");
        creditNappi->setGeometry(QRect(320, 270, 581, 461));
        creditNappi->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/CREDIT.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        debitNappi = new QPushButton(creditvalikko);
        debitNappi->setObjectName("debitNappi");
        debitNappi->setGeometry(QRect(750, 290, 581, 461));
        debitNappi->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/DEBIT.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        logo = new QLabel(creditvalikko);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label = new QLabel(creditvalikko);
        label->setObjectName("label");
        label->setGeometry(QRect(1210, 10, 281, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        debitNappi->raise();
        valitse->raise();
        creditNappi->raise();
        logo->raise();
        label->raise();

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
        label->setText(QCoreApplication::translate("creditvalikko", "Olet nyt kirjautuneena.....", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditvalikko: public Ui_creditvalikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITVALIKKO_H
