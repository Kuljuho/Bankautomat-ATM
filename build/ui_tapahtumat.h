/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QPushButton *takaisinNappi;
    QLabel *kirjautunut;
    QLabel *logo;
    QTextEdit *tapahtumaKentta;

    void setupUi(QDialog *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName("tapahtumat");
        tapahtumat->resize(1577, 689);
        takaisinNappi = new QPushButton(tapahtumat);
        takaisinNappi->setObjectName("takaisinNappi");
        takaisinNappi->setGeometry(QRect(1260, 540, 261, 81));
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
        kirjautunut = new QLabel(tapahtumat);
        kirjautunut->setObjectName("kirjautunut");
        kirjautunut->setGeometry(QRect(1100, 20, 281, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        kirjautunut->setFont(font1);
        kirjautunut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        logo = new QLabel(tapahtumat);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        tapahtumaKentta = new QTextEdit(tapahtumat);
        tapahtumaKentta->setObjectName("tapahtumaKentta");
        tapahtumaKentta->setGeometry(QRect(260, 100, 821, 501));
        QFont font2;
        font2.setPointSize(24);
        tapahtumaKentta->setFont(font2);

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QDialog *tapahtumat)
    {
        tapahtumat->setWindowTitle(QCoreApplication::translate("tapahtumat", "Dialog", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("tapahtumat", "Palaa takaisin", nullptr));
        kirjautunut->setText(QCoreApplication::translate("tapahtumat", "Olet nyt kirjautuneena.....", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
