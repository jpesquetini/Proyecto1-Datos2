/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QLineEdit *player1GetName;
    QLabel *label1;
    QLabel *player2Name;
    QLabel *pageHits;
    QLabel *player1Score;
    QLabel *label4;
    QLabel *label7;
    QLabel *usedMemory;
    QLabel *loadedPages;
    QLabel *label2;
    QLabel *welcomeLabel;
    QLineEdit *player2GetName;
    QLabel *player1Name;
    QLabel *label5;
    QLabel *player2Score;
    QLabel *pageFaults;
    QLabel *label3;
    QLabel *label6;
    QLabel *unloadedPages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(500, 400);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        player1GetName = new QLineEdit(centralwidget);
        player1GetName->setObjectName(QString::fromUtf8("player1GetName"));
        player1GetName->setGeometry(QRect(10, 70, 141, 20));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 50, 141, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label1->setFont(font);
        player2Name = new QLabel(centralwidget);
        player2Name->setObjectName(QString::fromUtf8("player2Name"));
        player2Name->setGeometry(QRect(10, 240, 161, 16));
        player2Name->setFont(font);
        pageHits = new QLabel(centralwidget);
        pageHits->setObjectName(QString::fromUtf8("pageHits"));
        pageHits->setGeometry(QRect(270, 280, 81, 16));
        QFont font1;
        font1.setPointSize(14);
        pageHits->setFont(font1);
        player1Score = new QLabel(centralwidget);
        player1Score->setObjectName(QString::fromUtf8("player1Score"));
        player1Score->setGeometry(QRect(60, 210, 50, 16));
        player1Score->setFont(font1);
        label4 = new QLabel(centralwidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(240, 120, 101, 16));
        label4->setFont(font);
        label7 = new QLabel(centralwidget);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(240, 310, 81, 16));
        label7->setFont(font);
        usedMemory = new QLabel(centralwidget);
        usedMemory->setObjectName(QString::fromUtf8("usedMemory"));
        usedMemory->setGeometry(QRect(240, 70, 200, 16));
        usedMemory->setFont(font1);
        loadedPages = new QLabel(centralwidget);
        loadedPages->setObjectName(QString::fromUtf8("loadedPages"));
        loadedPages->setGeometry(QRect(240, 140, 130, 30));
        loadedPages->setFont(font1);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(10, 100, 141, 16));
        label2->setFont(font);
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(175, 5, 110, 30));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(false);
        welcomeLabel->setFont(font2);
        player2GetName = new QLineEdit(centralwidget);
        player2GetName->setObjectName(QString::fromUtf8("player2GetName"));
        player2GetName->setGeometry(QRect(10, 120, 141, 20));
        player1Name = new QLabel(centralwidget);
        player1Name->setObjectName(QString::fromUtf8("player1Name"));
        player1Name->setGeometry(QRect(10, 190, 151, 16));
        player1Name->setFont(font);
        label5 = new QLabel(centralwidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(240, 180, 111, 16));
        label5->setFont(font);
        player2Score = new QLabel(centralwidget);
        player2Score->setObjectName(QString::fromUtf8("player2Score"));
        player2Score->setGeometry(QRect(60, 260, 50, 16));
        player2Score->setFont(font1);
        pageFaults = new QLabel(centralwidget);
        pageFaults->setObjectName(QString::fromUtf8("pageFaults"));
        pageFaults->setGeometry(QRect(270, 330, 81, 16));
        pageFaults->setFont(font1);
        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(240, 50, 111, 16));
        label3->setFont(font);
        label6 = new QLabel(centralwidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(240, 260, 71, 16));
        label6->setFont(font);
        unloadedPages = new QLabel(centralwidget);
        unloadedPages->setObjectName(QString::fromUtf8("unloadedPages"));
        unloadedPages->setGeometry(QRect(240, 200, 260, 30));
        unloadedPages->setFont(font1);
        Server->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Server);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        Server->setMenuBar(menubar);
        statusbar = new QStatusBar(Server);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Server->setStatusBar(statusbar);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        label1->setText(QCoreApplication::translate("Server", "Enter Player1's name:", nullptr));
        player2Name->setText(QCoreApplication::translate("Server", "Player2's Score:", nullptr));
        pageHits->setText(QCoreApplication::translate("Server", "0", nullptr));
        player1Score->setText(QCoreApplication::translate("Server", "0", nullptr));
        label4->setText(QCoreApplication::translate("Server", "Loaded Pages:", nullptr));
        label7->setText(QCoreApplication::translate("Server", "Page Faults:", nullptr));
        usedMemory->setText(QCoreApplication::translate("Server", "0", nullptr));
        loadedPages->setText(QCoreApplication::translate("Server", "Page 1, Page 2", nullptr));
        label2->setText(QCoreApplication::translate("Server", "Enter Player2's name:", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Server", "Welcome", nullptr));
        player1Name->setText(QCoreApplication::translate("Server", "Player1's Score:", nullptr));
        label5->setText(QCoreApplication::translate("Server", "Unloaded Pages:", nullptr));
        player2Score->setText(QCoreApplication::translate("Server", "0", nullptr));
        pageFaults->setText(QCoreApplication::translate("Server", "0", nullptr));
        label3->setText(QCoreApplication::translate("Server", "Memory in Use:", nullptr));
        label6->setText(QCoreApplication::translate("Server", "Page Hits:", nullptr));
        unloadedPages->setText(QCoreApplication::translate("Server", "Page 3, Page 4, Page 5, Page 6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
