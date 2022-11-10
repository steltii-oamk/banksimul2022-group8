/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lNosto;
    QCheckBox *creditDebit;
    QVBoxLayout *verticalLayout;
    QPushButton *b20e;
    QPushButton *b40e;
    QPushButton *b50e;
    QPushButton *b100e;
    QPushButton *bMuu;
    QPushButton *nClose;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(700, 500);
        Nosto->setMinimumSize(QSize(700, 500));
        Nosto->setMaximumSize(QSize(700, 500));
        verticalLayout_3 = new QVBoxLayout(Nosto);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(160, -1, 10, -1);
        lNosto = new QLabel(Nosto);
        lNosto->setObjectName(QString::fromUtf8("lNosto"));
        lNosto->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        lNosto->setFont(font);
        lNosto->setMouseTracking(false);
        lNosto->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lNosto);

        creditDebit = new QCheckBox(Nosto);
        creditDebit->setObjectName(QString::fromUtf8("creditDebit"));
        creditDebit->setMaximumSize(QSize(150, 150));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setUnderline(true);
        creditDebit->setFont(font1);
        creditDebit->setLayoutDirection(Qt::LeftToRight);
        creditDebit->setAutoRepeat(false);
        creditDebit->setTristate(false);

        horizontalLayout->addWidget(creditDebit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(50, -1, 50, -1);
        b20e = new QPushButton(Nosto);
        b20e->setObjectName(QString::fromUtf8("b20e"));
        QFont font2;
        font2.setPointSize(16);
        b20e->setFont(font2);

        verticalLayout->addWidget(b20e);

        b40e = new QPushButton(Nosto);
        b40e->setObjectName(QString::fromUtf8("b40e"));
        b40e->setFont(font2);

        verticalLayout->addWidget(b40e);

        b50e = new QPushButton(Nosto);
        b50e->setObjectName(QString::fromUtf8("b50e"));
        b50e->setFont(font2);

        verticalLayout->addWidget(b50e);

        b100e = new QPushButton(Nosto);
        b100e->setObjectName(QString::fromUtf8("b100e"));
        b100e->setFont(font2);

        verticalLayout->addWidget(b100e);

        bMuu = new QPushButton(Nosto);
        bMuu->setObjectName(QString::fromUtf8("bMuu"));
        bMuu->setFont(font2);

        verticalLayout->addWidget(bMuu);

        nClose = new QPushButton(Nosto);
        nClose->setObjectName(QString::fromUtf8("nClose"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(true);
        nClose->setFont(font3);

        verticalLayout->addWidget(nClose);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "Dialog", nullptr));
        lNosto->setText(QCoreApplication::translate("Nosto", "Valitse haluttu summa", nullptr));
        creditDebit->setText(QCoreApplication::translate("Nosto", "Credit", nullptr));
        b20e->setText(QCoreApplication::translate("Nosto", "20\342\202\254", nullptr));
        b40e->setText(QCoreApplication::translate("Nosto", "40\342\202\254", nullptr));
        b50e->setText(QCoreApplication::translate("Nosto", "50\342\202\254", nullptr));
        b100e->setText(QCoreApplication::translate("Nosto", "100\342\202\254", nullptr));
        bMuu->setText(QCoreApplication::translate("Nosto", "Muu summa", nullptr));
        nClose->setText(QCoreApplication::translate("Nosto", "P\303\244\303\244valikkoon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
