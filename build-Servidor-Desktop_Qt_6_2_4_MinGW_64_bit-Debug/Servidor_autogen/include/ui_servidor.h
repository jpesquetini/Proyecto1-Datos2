/********************************************************************************
** Form generated from reading UI file 'servidor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVIDOR_H
#define UI_SERVIDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Servidor
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QLabel *label1;
    QLineEdit *player1GetName;
    QLabel *label2;
    QLineEdit *player2GetName;
    QLabel *player1Name;
    QLabel *player2Name;
    QLabel *player1Score;
    QLabel *player2Score;
    QLabel *label3;
    QLabel *usedMemory;
    QLabel *label_2;
    QLabel *loadedPages;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Servidor)
    {
        if (Servidor->objectName().isEmpty())
            Servidor->setObjectName(QString::fromUtf8("Servidor"));
        Servidor->resize(500, 400);
        centralwidget = new QWidget(Servidor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(175, 5, 110, 30));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        welcomeLabel->setFont(font);
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 50, 141, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label1->setFont(font1);
        player1GetName = new QLineEdit(centralwidget);
        player1GetName->setObjectName(QString::fromUtf8("player1GetName"));
        player1GetName->setGeometry(QRect(10, 70, 141, 20));
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(10, 100, 141, 16));
        label2->setFont(font1);
        player2GetName = new QLineEdit(centralwidget);
        player2GetName->setObjectName(QString::fromUtf8("player2GetName"));
        player2GetName->setGeometry(QRect(10, 120, 141, 20));
        player1Name = new QLabel(centralwidget);
        player1Name->setObjectName(QString::fromUtf8("player1Name"));
        player1Name->setGeometry(QRect(10, 190, 151, 16));
        player1Name->setFont(font1);
        player2Name = new QLabel(centralwidget);
        player2Name->setObjectName(QString::fromUtf8("player2Name"));
        player2Name->setGeometry(QRect(10, 240, 161, 16));
        player2Name->setFont(font1);
        player1Score = new QLabel(centralwidget);
        player1Score->setObjectName(QString::fromUtf8("player1Score"));
        player1Score->setGeometry(QRect(60, 210, 50, 16));
        QFont font2;
        font2.setPointSize(14);
        player1Score->setFont(font2);
        player2Score = new QLabel(centralwidget);
        player2Score->setObjectName(QString::fromUtf8("player2Score"));
        player2Score->setGeometry(QRect(60, 260, 50, 16));
        player2Score->setFont(font2);
        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(240, 50, 111, 16));
        label3->setFont(font1);
        usedMemory = new QLabel(centralwidget);
        usedMemory->setObjectName(QString::fromUtf8("usedMemory"));
        usedMemory->setGeometry(QRect(240, 70, 200, 16));
        usedMemory->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 120, 101, 16));
        label_2->setFont(font1);
        loadedPages = new QLabel(centralwidget);
        loadedPages->setObjectName(QString::fromUtf8("loadedPages"));
        loadedPages->setGeometry(QRect(240, 140, 130, 30));
        loadedPages->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 180, 111, 16));
        label->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 200, 260, 30));
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 260, 71, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 280, 81, 16));
        label_5->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 310, 81, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 330, 81, 16));
        label_7->setFont(font2);
        Servidor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Servidor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        Servidor->setMenuBar(menubar);
        statusbar = new QStatusBar(Servidor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Servidor->setStatusBar(statusbar);

        retranslateUi(Servidor);

        QMetaObject::connectSlotsByName(Servidor);
    } // setupUi

    void retranslateUi(QMainWindow *Servidor)
    {
        Servidor->setWindowTitle(QCoreApplication::translate("Servidor", "Servidor", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Servidor", "Welcome", nullptr));
        label1->setText(QCoreApplication::translate("Servidor", "Enter Player1's name:", nullptr));
        label2->setText(QCoreApplication::translate("Servidor", "Enter Player2's name:", nullptr));
        player1Name->setText(QCoreApplication::translate("Servidor", "Player1's Score:", nullptr));
        player2Name->setText(QCoreApplication::translate("Servidor", "Player2's Score:", nullptr));
        player1Score->setText(QCoreApplication::translate("Servidor", "0", nullptr));
        player2Score->setText(QCoreApplication::translate("Servidor", "0", nullptr));
        label3->setText(QCoreApplication::translate("Servidor", "Memory in Use:", nullptr));
        usedMemory->setText(QCoreApplication::translate("Servidor", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Servidor", "Loaded Pages:", nullptr));
        loadedPages->setText(QCoreApplication::translate("Servidor", "Page 1, Page 2", nullptr));
        label->setText(QCoreApplication::translate("Servidor", "Unloaded Pages:", nullptr));
        label_3->setText(QCoreApplication::translate("Servidor", "Page 3, Page 4, Page 5, Page 6", nullptr));
        label_4->setText(QCoreApplication::translate("Servidor", "Page Hits:", nullptr));
        label_5->setText(QCoreApplication::translate("Servidor", "0", nullptr));
        label_6->setText(QCoreApplication::translate("Servidor", "Page Faults:", nullptr));
        label_7->setText(QCoreApplication::translate("Servidor", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Servidor: public Ui_Servidor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVIDOR_H
