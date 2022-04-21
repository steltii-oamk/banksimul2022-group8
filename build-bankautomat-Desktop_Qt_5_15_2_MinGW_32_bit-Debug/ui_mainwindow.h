/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *bSaldo;
    QPushButton *bTilitapahtumat;
    QPushButton *bNosto;
    QPushButton *bUlos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 500);
        MainWindow->setMinimumSize(QSize(700, 500));
        MainWindow->setMaximumSize(QSize(700, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setMargin(0);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(50, -1, 50, -1);
        bSaldo = new QPushButton(centralwidget);
        bSaldo->setObjectName(QString::fromUtf8("bSaldo"));
        bSaldo->setEnabled(true);
        bSaldo->setMinimumSize(QSize(150, 75));
        QFont font1;
        font1.setPointSize(16);
        bSaldo->setFont(font1);

        verticalLayout->addWidget(bSaldo);

        bTilitapahtumat = new QPushButton(centralwidget);
        bTilitapahtumat->setObjectName(QString::fromUtf8("bTilitapahtumat"));
        bTilitapahtumat->setMinimumSize(QSize(150, 75));
        bTilitapahtumat->setFont(font1);

        verticalLayout->addWidget(bTilitapahtumat);

        bNosto = new QPushButton(centralwidget);
        bNosto->setObjectName(QString::fromUtf8("bNosto"));
        bNosto->setMinimumSize(QSize(150, 75));
        bNosto->setFont(font1);

        verticalLayout->addWidget(bNosto);

        bUlos = new QPushButton(centralwidget);
        bUlos->setObjectName(QString::fromUtf8("bUlos"));
        bUlos->setMinimumSize(QSize(150, 75));
        bUlos->setFont(font1);
        bUlos->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(bUlos);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_3->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Valitse haluttu toiminto", nullptr));
        bSaldo->setText(QCoreApplication::translate("MainWindow", "Saldo", nullptr));
        bTilitapahtumat->setText(QCoreApplication::translate("MainWindow", "Tilitapahtumat", nullptr));
        bNosto->setText(QCoreApplication::translate("MainWindow", "Nosto", nullptr));
        bUlos->setText(QCoreApplication::translate("MainWindow", "Kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
