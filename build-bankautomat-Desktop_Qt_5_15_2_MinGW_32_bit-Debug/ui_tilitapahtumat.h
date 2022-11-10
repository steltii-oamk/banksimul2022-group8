/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *tilit1;
    QLineEdit *tilit2;
    QLineEdit *tilit3;
    QLineEdit *tilit4;
    QLineEdit *tilit5;
    QLineEdit *tilit6;
    QLineEdit *tilit7;
    QLineEdit *tilit8;
    QLineEdit *tilit9;
    QLineEdit *tilit10;
    QHBoxLayout *horizontalLayout;
    QPushButton *tClose;
    QPushButton *tTaakse;
    QPushButton *tEteen;

    void setupUi(QDialog *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QString::fromUtf8("Tilitapahtumat"));
        Tilitapahtumat->resize(700, 500);
        Tilitapahtumat->setMaximumSize(QSize(700, 500));
        verticalLayout = new QVBoxLayout(Tilitapahtumat);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tilit1 = new QLineEdit(Tilitapahtumat);
        tilit1->setObjectName(QString::fromUtf8("tilit1"));
        tilit1->setMinimumSize(QSize(0, 35));
        tilit1->setReadOnly(true);

        verticalLayout_2->addWidget(tilit1);

        tilit2 = new QLineEdit(Tilitapahtumat);
        tilit2->setObjectName(QString::fromUtf8("tilit2"));
        tilit2->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(tilit2);

        tilit3 = new QLineEdit(Tilitapahtumat);
        tilit3->setObjectName(QString::fromUtf8("tilit3"));
        tilit3->setMinimumSize(QSize(0, 35));
        tilit3->setReadOnly(true);

        verticalLayout_2->addWidget(tilit3);

        tilit4 = new QLineEdit(Tilitapahtumat);
        tilit4->setObjectName(QString::fromUtf8("tilit4"));
        tilit4->setMinimumSize(QSize(0, 35));
        tilit4->setReadOnly(true);

        verticalLayout_2->addWidget(tilit4);

        tilit5 = new QLineEdit(Tilitapahtumat);
        tilit5->setObjectName(QString::fromUtf8("tilit5"));
        tilit5->setMinimumSize(QSize(0, 35));
        tilit5->setReadOnly(true);

        verticalLayout_2->addWidget(tilit5);

        tilit6 = new QLineEdit(Tilitapahtumat);
        tilit6->setObjectName(QString::fromUtf8("tilit6"));
        tilit6->setMinimumSize(QSize(0, 35));
        tilit6->setReadOnly(true);

        verticalLayout_2->addWidget(tilit6);

        tilit7 = new QLineEdit(Tilitapahtumat);
        tilit7->setObjectName(QString::fromUtf8("tilit7"));
        tilit7->setMinimumSize(QSize(0, 35));
        tilit7->setReadOnly(true);

        verticalLayout_2->addWidget(tilit7);

        tilit8 = new QLineEdit(Tilitapahtumat);
        tilit8->setObjectName(QString::fromUtf8("tilit8"));
        tilit8->setMinimumSize(QSize(0, 35));
        tilit8->setReadOnly(true);

        verticalLayout_2->addWidget(tilit8);

        tilit9 = new QLineEdit(Tilitapahtumat);
        tilit9->setObjectName(QString::fromUtf8("tilit9"));
        tilit9->setMinimumSize(QSize(0, 35));
        tilit9->setReadOnly(true);

        verticalLayout_2->addWidget(tilit9);

        tilit10 = new QLineEdit(Tilitapahtumat);
        tilit10->setObjectName(QString::fromUtf8("tilit10"));
        tilit10->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(tilit10);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(100);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tClose = new QPushButton(Tilitapahtumat);
        tClose->setObjectName(QString::fromUtf8("tClose"));
        tClose->setMinimumSize(QSize(150, 75));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        tClose->setFont(font);

        horizontalLayout->addWidget(tClose);

        tTaakse = new QPushButton(Tilitapahtumat);
        tTaakse->setObjectName(QString::fromUtf8("tTaakse"));
        tTaakse->setMinimumSize(QSize(150, 75));
        QFont font1;
        font1.setPointSize(16);
        tTaakse->setFont(font1);

        horizontalLayout->addWidget(tTaakse);

        tEteen = new QPushButton(Tilitapahtumat);
        tEteen->setObjectName(QString::fromUtf8("tEteen"));
        tEteen->setMinimumSize(QSize(150, 75));
        tEteen->setFont(font1);

        horizontalLayout->addWidget(tEteen);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QDialog *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QCoreApplication::translate("Tilitapahtumat", "Dialog", nullptr));
        tClose->setText(QCoreApplication::translate("Tilitapahtumat", "P\303\244\303\244valikkoon", nullptr));
        tTaakse->setText(QCoreApplication::translate("Tilitapahtumat", "Takaisin", nullptr));
        tEteen->setText(QCoreApplication::translate("Tilitapahtumat", "Eteenp\303\244in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
