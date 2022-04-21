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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *tTaakse;
    QPushButton *tEteen;

    void setupUi(QDialog *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QString::fromUtf8("Tilitapahtumat"));
        Tilitapahtumat->resize(871, 644);
        verticalLayout = new QVBoxLayout(Tilitapahtumat);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(Tilitapahtumat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(Tilitapahtumat);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(100);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(Tilitapahtumat);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 75));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

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
        pushButton->setText(QCoreApplication::translate("Tilitapahtumat", "P\303\244\303\244valikkoon", nullptr));
        tTaakse->setText(QCoreApplication::translate("Tilitapahtumat", "Takaisin", nullptr));
        tEteen->setText(QCoreApplication::translate("Tilitapahtumat", "Eteenp\303\244in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
