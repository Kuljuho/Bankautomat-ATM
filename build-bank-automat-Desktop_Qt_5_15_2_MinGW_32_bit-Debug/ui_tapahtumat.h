/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QPushButton *takaisinNappi;

    void setupUi(QDialog *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName(QString::fromUtf8("tapahtumat"));
        tapahtumat->resize(1577, 689);
        takaisinNappi = new QPushButton(tapahtumat);
        takaisinNappi->setObjectName(QString::fromUtf8("takaisinNappi"));
        takaisinNappi->setGeometry(QRect(930, 150, 291, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(22);
        takaisinNappi->setFont(font);

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QDialog *tapahtumat)
    {
        tapahtumat->setWindowTitle(QCoreApplication::translate("tapahtumat", "Dialog", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("tapahtumat", "Palaa takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
