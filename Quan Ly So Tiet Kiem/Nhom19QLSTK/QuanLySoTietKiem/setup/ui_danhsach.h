/********************************************************************************
** Form generated from reading UI file 'danhsach.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANHSACH_H
#define UI_DANHSACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DanhSach
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DanhSach)
    {
        if (DanhSach->objectName().isEmpty())
            DanhSach->setObjectName(QString::fromUtf8("DanhSach"));
        DanhSach->resize(1800, 1000);
        verticalLayout = new QVBoxLayout(DanhSach);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DanhSach);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font1;
        font1.setPointSize(14);
        tableView->setFont(font1);

        horizontalLayout->addWidget(tableView);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(DanhSach);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DanhSach);

        QMetaObject::connectSlotsByName(DanhSach);
    } // setupUi

    void retranslateUi(QDialog *DanhSach)
    {
        DanhSach->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("DanhSach", "Danh s\303\241ch kh\303\241ch h\303\240ng", nullptr));
        pushButton->setText(QCoreApplication::translate("DanhSach", "Tr\341\273\237 v\341\273\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DanhSach: public Ui_DanhSach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANHSACH_H
