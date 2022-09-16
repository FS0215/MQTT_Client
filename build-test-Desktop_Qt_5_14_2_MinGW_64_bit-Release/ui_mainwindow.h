/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditHost;
    QLabel *label_2;
    QSpinBox *spinBoxPort;
    QPushButton *buttonConnect;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditTopic;
    QPushButton *buttonSubscribe;
    QLabel *label_4;
    QLineEdit *lineEditMessage;
    QPushButton *buttonPublish;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *editLog;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonQuit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditHost = new QLineEdit(centralwidget);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));

        gridLayout->addWidget(lineEditHost, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxPort = new QSpinBox(centralwidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMaximum(99999);
        spinBoxPort->setValue(1883);

        gridLayout->addWidget(spinBoxPort, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        buttonConnect = new QPushButton(centralwidget);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));

        horizontalLayout->addWidget(buttonConnect);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEditTopic = new QLineEdit(centralwidget);
        lineEditTopic->setObjectName(QString::fromUtf8("lineEditTopic"));

        gridLayout_2->addWidget(lineEditTopic, 0, 1, 1, 1);

        buttonSubscribe = new QPushButton(centralwidget);
        buttonSubscribe->setObjectName(QString::fromUtf8("buttonSubscribe"));

        gridLayout_2->addWidget(buttonSubscribe, 0, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        lineEditMessage = new QLineEdit(centralwidget);
        lineEditMessage->setObjectName(QString::fromUtf8("lineEditMessage"));

        gridLayout_2->addWidget(lineEditMessage, 1, 1, 1, 1);

        buttonPublish = new QPushButton(centralwidget);
        buttonPublish->setObjectName(QString::fromUtf8("buttonPublish"));

        gridLayout_2->addWidget(buttonPublish, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editLog = new QPlainTextEdit(groupBox);
        editLog->setObjectName(QString::fromUtf8("editLog"));

        horizontalLayout_2->addWidget(editLog);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonQuit = new QPushButton(centralwidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));

        horizontalLayout_3->addWidget(buttonQuit);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
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
        label->setText(QCoreApplication::translate("MainWindow", "Host:", nullptr));
        lineEditHost->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        buttonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Topic:", nullptr));
        buttonSubscribe->setText(QCoreApplication::translate("MainWindow", "Subscribe", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        buttonPublish->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Log Messages", nullptr));
        buttonQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
