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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Palitre;
    QAction *action_2;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *Main_label;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QSlider *RedSlider;
    QSlider *BlueSlider;
    QSlider *GreenSlider;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QSlider *CyanSlider;
    QSlider *MagentaSlider;
    QSlider *YellowSlider;
    QSlider *BlackSlider;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_6;
    QSlider *HueSlider;
    QSlider *SaturationSlider;
    QSlider *ValueSlider;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        Palitre = new QAction(MainWindow);
        Palitre->setObjectName(QString::fromUtf8("Palitre"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        Main_label = new QLabel(centralwidget);
        Main_label->setObjectName(QString::fromUtf8("Main_label"));
        Main_label->setScaledContents(true);

        verticalLayout_7->addWidget(Main_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        RedSlider = new QSlider(centralwidget);
        RedSlider->setObjectName(QString::fromUtf8("RedSlider"));
        RedSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(RedSlider);

        BlueSlider = new QSlider(centralwidget);
        BlueSlider->setObjectName(QString::fromUtf8("BlueSlider"));
        BlueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(BlueSlider);

        GreenSlider = new QSlider(centralwidget);
        GreenSlider->setObjectName(QString::fromUtf8("GreenSlider"));
        GreenSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(GreenSlider);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        CyanSlider = new QSlider(centralwidget);
        CyanSlider->setObjectName(QString::fromUtf8("CyanSlider"));
        CyanSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(CyanSlider);

        MagentaSlider = new QSlider(centralwidget);
        MagentaSlider->setObjectName(QString::fromUtf8("MagentaSlider"));
        MagentaSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(MagentaSlider);

        YellowSlider = new QSlider(centralwidget);
        YellowSlider->setObjectName(QString::fromUtf8("YellowSlider"));
        YellowSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(YellowSlider);

        BlackSlider = new QSlider(centralwidget);
        BlackSlider->setObjectName(QString::fromUtf8("BlackSlider"));
        BlackSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(BlackSlider);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_5->addWidget(label_11);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        HueSlider = new QSlider(centralwidget);
        HueSlider->setObjectName(QString::fromUtf8("HueSlider"));
        HueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(HueSlider);

        SaturationSlider = new QSlider(centralwidget);
        SaturationSlider->setObjectName(QString::fromUtf8("SaturationSlider"));
        SaturationSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(SaturationSlider);

        ValueSlider = new QSlider(centralwidget);
        ValueSlider->setObjectName(QString::fromUtf8("ValueSlider"));
        ValueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(ValueSlider);


        horizontalLayout_3->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Palitre);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Palitre->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\273\320\270\321\202\321\200\320\260", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\321\213\320\271 \320\262\320\262\320\276\320\264", nullptr));
        Main_label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cyan", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Black", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Hue", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\273\320\270\321\202\321\200\320\260, \321\202\320\276\321\207\320\275\321\213\320\271 \320\262\320\262\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
