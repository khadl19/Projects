/********************************************************************************
** Form generated from reading UI file 'phieugoitien.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHIEUGOITIEN_H
#define UI_PHIEUGOITIEN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_PhieuGoiTien
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *khachhang;
    QLineEdit *khachhangEditText;
    QLabel *cmnd;
    QLineEdit *cmndEditText;
    QLabel *diachi;
    QLineEdit *diachiEditText;
    QLabel *loaitietkiem;
    QComboBox *comboBox;
    QLabel *sotiengoi;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sotiengoiEditText;
    QLabel *label_2;
    QLabel *ngaymophieu;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *PhieuGoiTien)
    {
        if (PhieuGoiTien->objectName().isEmpty())
            PhieuGoiTien->setObjectName(QString::fromUtf8("PhieuGoiTien"));
        PhieuGoiTien->resize(1188, 560);
        verticalLayout_2 = new QVBoxLayout(PhieuGoiTien);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(PhieuGoiTien);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 127, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 56, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        groupBox->setPalette(palette);
        QFont font;
        font.setPointSize(22);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        khachhang = new QLabel(groupBox);
        khachhang->setObjectName(QString::fromUtf8("khachhang"));
        QFont font1;
        font1.setPointSize(14);
        khachhang->setFont(font1);

        gridLayout->addWidget(khachhang, 0, 0, 1, 1);

        khachhangEditText = new QLineEdit(groupBox);
        khachhangEditText->setObjectName(QString::fromUtf8("khachhangEditText"));
        khachhangEditText->setFont(font1);

        gridLayout->addWidget(khachhangEditText, 0, 1, 1, 1);

        cmnd = new QLabel(groupBox);
        cmnd->setObjectName(QString::fromUtf8("cmnd"));
        cmnd->setFont(font1);

        gridLayout->addWidget(cmnd, 0, 2, 1, 1);

        cmndEditText = new QLineEdit(groupBox);
        cmndEditText->setObjectName(QString::fromUtf8("cmndEditText"));
        cmndEditText->setFont(font1);

        gridLayout->addWidget(cmndEditText, 0, 3, 1, 1);

        diachi = new QLabel(groupBox);
        diachi->setObjectName(QString::fromUtf8("diachi"));
        diachi->setFont(font1);

        gridLayout->addWidget(diachi, 1, 0, 1, 1);

        diachiEditText = new QLineEdit(groupBox);
        diachiEditText->setObjectName(QString::fromUtf8("diachiEditText"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(255, 63, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(127, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(170, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        diachiEditText->setPalette(palette1);
        diachiEditText->setFont(font1);

        gridLayout->addWidget(diachiEditText, 1, 1, 1, 1);

        loaitietkiem = new QLabel(groupBox);
        loaitietkiem->setObjectName(QString::fromUtf8("loaitietkiem"));
        loaitietkiem->setFont(font1);
        loaitietkiem->setMargin(0);

        gridLayout->addWidget(loaitietkiem, 1, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        gridLayout->addWidget(comboBox, 1, 3, 1, 1);

        sotiengoi = new QLabel(groupBox);
        sotiengoi->setObjectName(QString::fromUtf8("sotiengoi"));
        sotiengoi->setFont(font1);

        gridLayout->addWidget(sotiengoi, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sotiengoiEditText = new QLineEdit(groupBox);
        sotiengoiEditText->setObjectName(QString::fromUtf8("sotiengoiEditText"));
        sotiengoiEditText->setFont(font1);

        horizontalLayout_2->addWidget(sotiengoiEditText);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        ngaymophieu = new QLabel(groupBox);
        ngaymophieu->setObjectName(QString::fromUtf8("ngaymophieu"));
        ngaymophieu->setFont(font1);

        gridLayout->addWidget(ngaymophieu, 2, 2, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font1);
        dateEdit->setMinimumDate(QDate(2020, 6, 26));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 2, 3, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(PhieuGoiTien);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(PhieuGoiTien);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(khachhangEditText, cmndEditText);
        QWidget::setTabOrder(cmndEditText, diachiEditText);
        QWidget::setTabOrder(diachiEditText, comboBox);
        QWidget::setTabOrder(comboBox, sotiengoiEditText);
        QWidget::setTabOrder(sotiengoiEditText, dateEdit);
        QWidget::setTabOrder(dateEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(PhieuGoiTien);

        QMetaObject::connectSlotsByName(PhieuGoiTien);
    } // setupUi

    void retranslateUi(QDialog *PhieuGoiTien)
    {
        PhieuGoiTien->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("PhieuGoiTien", "Phi\341\272\277u g\341\273\237i ti\341\273\201n", nullptr));
        khachhang->setText(QCoreApplication::translate("PhieuGoiTien", "Kh\303\241ch h\303\240ng: ", nullptr));
        cmnd->setText(QCoreApplication::translate("PhieuGoiTien", "CMND", nullptr));
        diachi->setText(QCoreApplication::translate("PhieuGoiTien", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        loaitietkiem->setText(QCoreApplication::translate("PhieuGoiTien", "Lo\341\272\241i ti\341\272\277t ki\341\273\207m", nullptr));
        sotiengoi->setText(QCoreApplication::translate("PhieuGoiTien", "S\341\273\221 ti\341\273\201n g\341\273\237i", nullptr));
        label_2->setText(QCoreApplication::translate("PhieuGoiTien", ".000 VN\304\220", nullptr));
        ngaymophieu->setText(QCoreApplication::translate("PhieuGoiTien", "Ng\303\240y m\341\273\237 phi\341\272\277u", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("PhieuGoiTien", "dd/MM/yyyy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PhieuGoiTien", "Tr\341\273\237 v\341\273\201", nullptr));
        pushButton->setText(QCoreApplication::translate("PhieuGoiTien", "G\341\273\237i ti\341\273\201n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhieuGoiTien: public Ui_PhieuGoiTien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHIEUGOITIEN_H
