/********************************************************************************
** Form generated from reading UI file 'accurate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCURATE_H
#define UI_ACCURATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accurate
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QSpinBox *RedS;
    QSpinBox *BlueS;
    QSpinBox *GreenS;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *CyanS;
    QSpinBox *MagentaS;
    QSpinBox *YellowS;
    QSpinBox *BlackS;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *HueS;
    QSpinBox *SaturationS;
    QSpinBox *ValueS;

    void setupUi(QWidget *Accurate)
    {
        if (Accurate->objectName().isEmpty())
            Accurate->setObjectName(QString::fromUtf8("Accurate"));
        Accurate->resize(456, 292);
        verticalLayout_7 = new QVBoxLayout(Accurate);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Accurate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Accurate);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Accurate);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        RedS = new QSpinBox(Accurate);
        RedS->setObjectName(QString::fromUtf8("RedS"));

        verticalLayout_4->addWidget(RedS);

        BlueS = new QSpinBox(Accurate);
        BlueS->setObjectName(QString::fromUtf8("BlueS"));

        verticalLayout_4->addWidget(BlueS);

        GreenS = new QSpinBox(Accurate);
        GreenS->setObjectName(QString::fromUtf8("GreenS"));

        verticalLayout_4->addWidget(GreenS);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(Accurate);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(Accurate);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(Accurate);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_10 = new QLabel(Accurate);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        CyanS = new QSpinBox(Accurate);
        CyanS->setObjectName(QString::fromUtf8("CyanS"));

        verticalLayout_5->addWidget(CyanS);

        MagentaS = new QSpinBox(Accurate);
        MagentaS->setObjectName(QString::fromUtf8("MagentaS"));

        verticalLayout_5->addWidget(MagentaS);

        YellowS = new QSpinBox(Accurate);
        YellowS->setObjectName(QString::fromUtf8("YellowS"));

        verticalLayout_5->addWidget(YellowS);

        BlackS = new QSpinBox(Accurate);
        BlackS->setObjectName(QString::fromUtf8("BlackS"));

        verticalLayout_5->addWidget(BlackS);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(Accurate);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(Accurate);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(Accurate);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        HueS = new QSpinBox(Accurate);
        HueS->setObjectName(QString::fromUtf8("HueS"));

        verticalLayout_6->addWidget(HueS);

        SaturationS = new QSpinBox(Accurate);
        SaturationS->setObjectName(QString::fromUtf8("SaturationS"));

        verticalLayout_6->addWidget(SaturationS);

        ValueS = new QSpinBox(Accurate);
        ValueS->setObjectName(QString::fromUtf8("ValueS"));

        verticalLayout_6->addWidget(ValueS);


        horizontalLayout_3->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_4);


        retranslateUi(Accurate);

        QMetaObject::connectSlotsByName(Accurate);
    } // setupUi

    void retranslateUi(QWidget *Accurate)
    {
        Accurate->setWindowTitle(QCoreApplication::translate("Accurate", "Form", nullptr));
        label->setText(QCoreApplication::translate("Accurate", "Red", nullptr));
        label_2->setText(QCoreApplication::translate("Accurate", "Blue", nullptr));
        label_3->setText(QCoreApplication::translate("Accurate", "Green", nullptr));
        label_4->setText(QCoreApplication::translate("Accurate", "Cyan", nullptr));
        label_5->setText(QCoreApplication::translate("Accurate", "Magenta", nullptr));
        label_6->setText(QCoreApplication::translate("Accurate", "Yellow", nullptr));
        label_10->setText(QCoreApplication::translate("Accurate", "Black", nullptr));
        label_7->setText(QCoreApplication::translate("Accurate", "Hue", nullptr));
        label_8->setText(QCoreApplication::translate("Accurate", "Saturation", nullptr));
        label_9->setText(QCoreApplication::translate("Accurate", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accurate: public Ui_Accurate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCURATE_H
