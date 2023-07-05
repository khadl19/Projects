/********************************************************************************
** Form generated from reading UI file 'phieuruttien.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHIEURUTTIEN_H
#define UI_PHIEURUTTIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_phieuruttien
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *phieuruttien)
    {
        if (phieuruttien->objectName().isEmpty())
            phieuruttien->setObjectName(QString::fromUtf8("phieuruttien"));
        phieuruttien->resize(1189, 560);
        verticalLayout_2 = new QVBoxLayout(phieuruttien);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(phieuruttien);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setPointSize(14);
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font1);
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setFont(font1);

        horizontalLayout->addWidget(lineEdit_8);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 1, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(phieuruttien);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(phieuruttien);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(lineEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(phieuruttien);

        QMetaObject::connectSlotsByName(phieuruttien);
    } // setupUi

    void retranslateUi(QDialog *phieuruttien)
    {
        phieuruttien->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("phieuruttien", "Phi\341\272\277u r\303\272t ti\341\273\201n", nullptr));
        label_5->setText(QCoreApplication::translate("phieuruttien", "M\303\243 s\341\273\221", nullptr));
        label_7->setText(QCoreApplication::translate("phieuruttien", "Kh\303\241ch h\303\240ng", nullptr));
        label_3->setText(QString());
        label_6->setText(QCoreApplication::translate("phieuruttien", "Ng\303\240y r\303\272t", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("phieuruttien", "dd/MM/yyyy", nullptr));
        label_8->setText(QCoreApplication::translate("phieuruttien", "S\341\273\221 ti\341\273\201n r\303\272t", nullptr));
        label->setText(QCoreApplication::translate("phieuruttien", ".000 VN\304\220", nullptr));
        pushButton->setText(QCoreApplication::translate("phieuruttien", "Tr\341\273\237 v\341\273\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("phieuruttien", "R\303\272t ti\341\273\201n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class phieuruttien: public Ui_phieuruttien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHIEURUTTIEN_H
