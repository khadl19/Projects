/********************************************************************************
** Form generated from reading UI file 'loginsrceen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSRCEEN_H
#define UI_LOGINSRCEEN_H

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

class Ui_LoginSrceen
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *LoginSrceen)
    {
        if (LoginSrceen->objectName().isEmpty())
            LoginSrceen->setObjectName(QString::fromUtf8("LoginSrceen"));
        LoginSrceen->resize(600, 312);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginSrceen->sizePolicy().hasHeightForWidth());
        LoginSrceen->setSizePolicy(sizePolicy);
        LoginSrceen->setMaximumSize(QSize(800, 600));
        verticalLayout_2 = new QVBoxLayout(LoginSrceen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(LoginSrceen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(LoginSrceen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(LoginSrceen);

        QMetaObject::connectSlotsByName(LoginSrceen);
    } // setupUi

    void retranslateUi(QDialog *LoginSrceen)
    {
        groupBox->setTitle(QCoreApplication::translate("LoginSrceen", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginSrceen", "T\303\252n \304\221\304\203ng nh\341\272\255p:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginSrceen", "M\341\272\255t kh\341\272\251u:", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginSrceen", "login", nullptr));
        (void)LoginSrceen;
    } // retranslateUi

};

namespace Ui {
    class LoginSrceen: public Ui_LoginSrceen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSRCEEN_H
