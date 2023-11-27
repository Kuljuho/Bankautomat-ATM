/********************************************************************************
** Form generated from reading UI file 'paavalikko.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAAVALIKKO_H
#define UI_PAAVALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paaValikko
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *logo;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *nostoNappi;
    QPushButton *lahjoitusNappi;
    QPushButton *tapahtumatNappi;
    QPushButton *saldoNappi;
    QPushButton *kirjauduUlosNappi;
    QPushButton *takaisinNappi;

    void setupUi(QDialog *paaValikko)
    {
        if (paaValikko->objectName().isEmpty())
            paaValikko->setObjectName("paaValikko");
        paaValikko->resize(1345, 818);
        paaValikko->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(paaValikko);
        label->setObjectName("label");
        label->setGeometry(QRect(930, 10, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        pushButton = new QPushButton(paaValikko);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1190, 10, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 127);"));
        logo = new QLabel(paaValikko);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 171, 191));
        logo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/poorbanklogo.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        verticalLayoutWidget = new QWidget(paaValikko);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(470, 130, 402, 482));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(400, 200));
        label_2->setMaximumSize(QSize(400, 200));
        label_2->setSizeIncrement(QSize(0, 5));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(36);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image: url(:/buttontausta.png);\n"
"	background-color: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}"));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        nostoNappi = new QPushButton(verticalLayoutWidget);
        nostoNappi->setObjectName("nostoNappi");
        nostoNappi->setMinimumSize(QSize(400, 50));
        nostoNappi->setMaximumSize(QSize(400, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(22);
        nostoNappi->setFont(font2);
        nostoNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(nostoNappi);

        lahjoitusNappi = new QPushButton(verticalLayoutWidget);
        lahjoitusNappi->setObjectName("lahjoitusNappi");
        lahjoitusNappi->setMinimumSize(QSize(400, 50));
        lahjoitusNappi->setMaximumSize(QSize(400, 50));
        lahjoitusNappi->setFont(font2);
        lahjoitusNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(lahjoitusNappi);

        tapahtumatNappi = new QPushButton(verticalLayoutWidget);
        tapahtumatNappi->setObjectName("tapahtumatNappi");
        tapahtumatNappi->setMinimumSize(QSize(400, 50));
        tapahtumatNappi->setMaximumSize(QSize(400, 50));
        tapahtumatNappi->setFont(font2);
        tapahtumatNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(tapahtumatNappi);

        saldoNappi = new QPushButton(verticalLayoutWidget);
        saldoNappi->setObjectName("saldoNappi");
        saldoNappi->setMinimumSize(QSize(400, 50));
        saldoNappi->setMaximumSize(QSize(400, 50));
        saldoNappi->setFont(font2);
        saldoNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(saldoNappi);

        kirjauduUlosNappi = new QPushButton(verticalLayoutWidget);
        kirjauduUlosNappi->setObjectName("kirjauduUlosNappi");
        kirjauduUlosNappi->setMinimumSize(QSize(400, 50));
        kirjauduUlosNappi->setMaximumSize(QSize(400, 50));
        kirjauduUlosNappi->setFont(font2);
        kirjauduUlosNappi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(kirjauduUlosNappi);

        takaisinNappi = new QPushButton(paaValikko);
        takaisinNappi->setObjectName("takaisinNappi");
        takaisinNappi->setGeometry(QRect(1030, 700, 261, 91));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(20);
        takaisinNappi->setFont(font3);
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

        retranslateUi(paaValikko);

        QMetaObject::connectSlotsByName(paaValikko);
    } // setupUi

    void retranslateUi(QDialog *paaValikko)
    {
        paaValikko->setWindowTitle(QCoreApplication::translate("paaValikko", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("paaValikko", "Olet nyt kirjautuneena.....", nullptr));
        pushButton->setText(QCoreApplication::translate("paaValikko", "PushButton", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("paaValikko", "P\303\244\303\244valikko", nullptr));
        nostoNappi->setText(QCoreApplication::translate("paaValikko", "Nosto", nullptr));
        lahjoitusNappi->setText(QCoreApplication::translate("paaValikko", "Nosto + lahjoitus", nullptr));
        tapahtumatNappi->setText(QCoreApplication::translate("paaValikko", "Tilitapahtumat", nullptr));
        saldoNappi->setText(QCoreApplication::translate("paaValikko", "Saldo", nullptr));
        kirjauduUlosNappi->setText(QCoreApplication::translate("paaValikko", "Kirjaudu ulos", nullptr));
        takaisinNappi->setText(QCoreApplication::translate("paaValikko", "Palaa takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paaValikko: public Ui_paaValikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAAVALIKKO_H
