/********************************************************************************
** Form generated from reading UI file 'suakyhan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUAKYHAN_H
#define UI_SUAKYHAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SuaKyHan
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *SuaKyHan)
    {
        if (SuaKyHan->objectName().isEmpty())
            SuaKyHan->setObjectName(QString::fromUtf8("SuaKyHan"));
        SuaKyHan->resize(382, 300);
        verticalLayout_2 = new QVBoxLayout(SuaKyHan);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(SuaKyHan);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(SuaKyHan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SuaKyHan);

        QMetaObject::connectSlotsByName(SuaKyHan);
    } // setupUi

    void retranslateUi(QDialog *SuaKyHan)
    {
        SuaKyHan->setWindowTitle(QCoreApplication::translate("SuaKyHan", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SuaKyHan", "S\341\273\254A LO\341\272\240I TI\341\272\276T KI\341\273\206M", nullptr));
        label->setText(QCoreApplication::translate("SuaKyHan", "T\303\252n lo\341\272\241i ti\341\272\277t ki\341\273\207m:", nullptr));
        label_3->setText(QCoreApplication::translate("SuaKyHan", "L\303\243i su\341\272\245t:", nullptr));
        label_5->setText(QCoreApplication::translate("SuaKyHan", "%/n\304\203m", nullptr));
        label_2->setText(QCoreApplication::translate("SuaKyHan", "S\341\273\221 ng\303\240y \304\221\306\260\341\273\243c r\303\272t:", nullptr));
        label_4->setText(QCoreApplication::translate("SuaKyHan", "ilki", nullptr));
        pushButton->setText(QCoreApplication::translate("SuaKyHan", "S\341\273\255a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuaKyHan: public Ui_SuaKyHan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUAKYHAN_H
