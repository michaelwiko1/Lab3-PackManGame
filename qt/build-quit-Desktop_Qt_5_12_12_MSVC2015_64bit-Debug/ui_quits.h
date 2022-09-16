/********************************************************************************
** Form generated from reading UI file 'quits.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITS_H
#define UI_QUITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quits
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *quits)
    {
        if (quits->objectName().isEmpty())
            quits->setObjectName(QString::fromUtf8("quits"));
        quits->resize(800, 600);
        centralwidget = new QWidget(quits);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        quits->setCentralWidget(centralwidget);
        menubar = new QMenuBar(quits);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        quits->setMenuBar(menubar);
        statusbar = new QStatusBar(quits);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        quits->setStatusBar(statusbar);

        retranslateUi(quits);

        QMetaObject::connectSlotsByName(quits);
    } // setupUi

    void retranslateUi(QMainWindow *quits)
    {
        quits->setWindowTitle(QApplication::translate("quits", "quits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quits: public Ui_quits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITS_H
