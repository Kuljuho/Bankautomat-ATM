/********************************************************************************
** Form generated from reading UI file 'onnistui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONNISTUI_H
#define UI_ONNISTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_onnistui
{
public:
    QLabel *label;
    QLabel *logo;

    void setupUi(QDialog *onnistui)
    {
        if (onnistui->objectName().isEmpty())
            onnistui->setObjectName("onnistui");
        onnistui->resize(1490, 679);
        label = new QLabel(onnistui);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 260, 611, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(48);
        label->setFont(font);
        logo = new QLabel(onnistui);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));

        retranslateUi(onnistui);

        QMetaObject::connectSlotsByName(onnistui);
    } // setupUi

    void retranslateUi(QDialog *onnistui)
    {
        onnistui->setWindowTitle(QCoreApplication::translate("onnistui", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("onnistui", "Tapahtuma onnistui!", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class onnistui: public Ui_onnistui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONNISTUI_H
