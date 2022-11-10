/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textSaldo;
    QVBoxLayout *verticalLayout;
    QLineEdit *sTili1;
    QLineEdit *sTili2;
    QLineEdit *sTili3;
    QLineEdit *sTili4;
    QLineEdit *sTili5;
    QHBoxLayout *horizontalLayout;
    QPushButton *sSaldo;
    QPushButton *sClose;

    void setupUi(QDialog *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QString::fromUtf8("Saldo"));
        Saldo->resize(700, 500);
        Saldo->setMinimumSize(QSize(700, 500));
        Saldo->setMaximumSize(QSize(700, 500));
        verticalLayout_2 = new QVBoxLayout(Saldo);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        textSaldo = new QTextEdit(Saldo);
        textSaldo->setObjectName(QString::fromUtf8("textSaldo"));
        textSaldo->setReadOnly(true);

        verticalLayout_2->addWidget(textSaldo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sTili1 = new QLineEdit(Saldo);
        sTili1->setObjectName(QString::fromUtf8("sTili1"));
        sTili1->setReadOnly(true);

        verticalLayout->addWidget(sTili1);

        sTili2 = new QLineEdit(Saldo);
        sTili2->setObjectName(QString::fromUtf8("sTili2"));
        sTili2->setReadOnly(true);

        verticalLayout->addWidget(sTili2);

        sTili3 = new QLineEdit(Saldo);
        sTili3->setObjectName(QString::fromUtf8("sTili3"));
        sTili3->setReadOnly(true);

        verticalLayout->addWidget(sTili3);

        sTili4 = new QLineEdit(Saldo);
        sTili4->setObjectName(QString::fromUtf8("sTili4"));
        sTili4->setReadOnly(true);

        verticalLayout->addWidget(sTili4);

        sTili5 = new QLineEdit(Saldo);
        sTili5->setObjectName(QString::fromUtf8("sTili5"));
        sTili5->setReadOnly(true);

        verticalLayout->addWidget(sTili5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sSaldo = new QPushButton(Saldo);
        sSaldo->setObjectName(QString::fromUtf8("sSaldo"));
        sSaldo->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(16);
        sSaldo->setFont(font);

        horizontalLayout->addWidget(sSaldo);

        sClose = new QPushButton(Saldo);
        sClose->setObjectName(QString::fromUtf8("sClose"));
        sClose->setMaximumSize(QSize(200, 16777215));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        sClose->setFont(font1);

        horizontalLayout->addWidget(sClose);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QDialog *Saldo)
    {
        Saldo->setWindowTitle(QCoreApplication::translate("Saldo", "Dialog", nullptr));
        sSaldo->setText(QCoreApplication::translate("Saldo", "Saldon haku", nullptr));
        sClose->setText(QCoreApplication::translate("Saldo", "P\303\244\303\244valikkoon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
