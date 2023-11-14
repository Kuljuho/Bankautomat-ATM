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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_kirjauduSisaan
{
public:
    QPushButton *nappiKirjaudu;
    QLineEdit *tunnusKayttaja;
    QLineEdit *salasanaKayttaja;
    QLabel *kirjauduTeksti;

    void setupUi(QDialog *kirjauduSisaan)
    {
        if (kirjauduSisaan->objectName().isEmpty())
            kirjauduSisaan->setObjectName(QString::fromUtf8("kirjauduSisaan"));
        kirjauduSisaan->resize(465, 379);
        nappiKirjaudu = new QPushButton(kirjauduSisaan);
        nappiKirjaudu->setObjectName(QString::fromUtf8("nappiKirjaudu"));
        nappiKirjaudu->setGeometry(QRect(160, 240, 131, 51));
        tunnusKayttaja = new QLineEdit(kirjauduSisaan);
        tunnusKayttaja->setObjectName(QString::fromUtf8("tunnusKayttaja"));
        tunnusKayttaja->setGeometry(QRect(90, 180, 131, 41));
        salasanaKayttaja = new QLineEdit(kirjauduSisaan);
        salasanaKayttaja->setObjectName(QString::fromUtf8("salasanaKayttaja"));
        salasanaKayttaja->setGeometry(QRect(230, 180, 131, 41));
        kirjauduTeksti = new QLabel(kirjauduSisaan);
        kirjauduTeksti->setObjectName(QString::fromUtf8("kirjauduTeksti"));
        kirjauduTeksti->setGeometry(QRect(160, 80, 141, 51));
        QFont font;
        font.setPointSize(16);
        kirjauduTeksti->setFont(font);

        retranslateUi(kirjauduSisaan);

        QMetaObject::connectSlotsByName(kirjauduSisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjauduSisaan)
    {
        kirjauduSisaan->setWindowTitle(QCoreApplication::translate("kirjauduSisaan", "Dialog", nullptr));
        nappiKirjaudu->setText(QCoreApplication::translate("kirjauduSisaan", "Kirjaudu", nullptr));
        kirjauduTeksti->setText(QCoreApplication::translate("kirjauduSisaan", "Kirjaudu sis\303\244\303\244n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjauduSisaan: public Ui_kirjauduSisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H
