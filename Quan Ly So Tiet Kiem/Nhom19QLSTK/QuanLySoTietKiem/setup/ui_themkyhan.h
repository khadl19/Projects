/********************************************************************************
** Form generated from reading UI file 'themkyhan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMKYHAN_H
#define UI_THEMKYHAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThemKyHan
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *tenloaikyhan;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *laisuat;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *songayduocrut;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *ThemKyHan)
    {
        if (ThemKyHan->objectName().isEmpty())
            ThemKyHan->setObjectName(QString::fromUtf8("ThemKyHan"));
        ThemKyHan->resize(489, 306);
        verticalLayout = new QVBoxLayout(ThemKyHan);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ThemKyHan);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        tenloaikyhan = new QLineEdit(groupBox);
        tenloaikyhan->setObjectName(QString::fromUtf8("tenloaikyhan"));
        tenloaikyhan->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, tenloaikyhan);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout_6->addWidget(radioButton_2);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout_5->addWidget(radioButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setFont(font1);

        horizontalLayout_2->addWidget(spinBox_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font1);

        horizontalLayout_2->addWidget(spinBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_2->addWidget(label_9);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        laisuat = new QLineEdit(groupBox);
        laisuat->setObjectName(QString::fromUtf8("laisuat"));
        laisuat->setFont(font1);

        horizontalLayout_3->addWidget(laisuat);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        songayduocrut = new QLabel(groupBox);
        songayduocrut->setObjectName(QString::fromUtf8("songayduocrut"));
        songayduocrut->setMinimumSize(QSize(30, 30));
        songayduocrut->setFont(font1);
        songayduocrut->setFrameShape(QFrame::Box);
        songayduocrut->setTextFormat(Qt::AutoText);

        horizontalLayout_4->addWidget(songayduocrut);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(ThemKyHan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ThemKyHan);

        QMetaObject::connectSlotsByName(ThemKyHan);
    } // setupUi

    void retranslateUi(QDialog *ThemKyHan)
    {
        ThemKyHan->setWindowTitle(QCoreApplication::translate("ThemKyHan", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ThemKyHan", "TH\303\212M LO\341\272\240I TI\341\272\276T KI\341\273\206M", nullptr));
        label->setText(QCoreApplication::translate("ThemKyHan", "T\303\252n lo\341\272\241i ti\341\272\277t ki\341\273\207m:", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ThemKyHan", "C\303\263 k\341\273\263 h\341\272\241n", nullptr));
        radioButton->setText(QCoreApplication::translate("ThemKyHan", "kh\303\264ng k\341\273\263 h\341\272\241n", nullptr));
        label_2->setText(QCoreApplication::translate("ThemKyHan", "Gi\303\241 tr\341\273\213 k\341\273\263 h\341\272\241n:", nullptr));
        label_6->setText(QCoreApplication::translate("ThemKyHan", "n\304\203m", nullptr));
        label_5->setText(QCoreApplication::translate("ThemKyHan", "th\303\241ng", nullptr));
        label_9->setText(QCoreApplication::translate("ThemKyHan", "v\303\264 k\303\254 h\341\272\241n", nullptr));
        label_3->setText(QCoreApplication::translate("ThemKyHan", "L\303\243i su\341\272\245t:", nullptr));
        label_7->setText(QCoreApplication::translate("ThemKyHan", "%/n\304\203m", nullptr));
        label_4->setText(QCoreApplication::translate("ThemKyHan", "S\341\273\221 ng\303\240y \304\221\306\260\341\273\243c r\303\272t:", nullptr));
        songayduocrut->setText(QString());
        label_8->setText(QCoreApplication::translate("ThemKyHan", "ng\303\240y", nullptr));
        pushButton->setText(QCoreApplication::translate("ThemKyHan", "Th\303\252m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThemKyHan: public Ui_ThemKyHan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMKYHAN_H
