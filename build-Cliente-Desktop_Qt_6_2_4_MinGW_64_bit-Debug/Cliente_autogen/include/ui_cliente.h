/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cliente
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cliente)
    {
        if (cliente->objectName().isEmpty())
            cliente->setObjectName(QString::fromUtf8("cliente"));
        cliente->resize(800, 600);
        centralwidget = new QWidget(cliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cliente->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cliente);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        cliente->setMenuBar(menubar);
        statusbar = new QStatusBar(cliente);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cliente->setStatusBar(statusbar);

        retranslateUi(cliente);

        QMetaObject::connectSlotsByName(cliente);
    } // setupUi

    void retranslateUi(QMainWindow *cliente)
    {
        cliente->setWindowTitle(QCoreApplication::translate("cliente", "cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cliente: public Ui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
