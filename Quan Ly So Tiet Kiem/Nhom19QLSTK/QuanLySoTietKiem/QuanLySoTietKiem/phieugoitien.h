#ifndef PHIEUGOITIEN_H
#define PHIEUGOITIEN_H

#include <QDialog>
#include <QDate>

namespace Ui {
class PhieuGoiTien;
}

class PhieuGoiTien : public QDialog
{
    Q_OBJECT

public:
    explicit PhieuGoiTien(QWidget *parent = nullptr);
    ~PhieuGoiTien();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::PhieuGoiTien *ui;
    int maphieugoitien = 0;
    QString khachhang, cmnd, diachi;
    int maloaitietkiem;
    int sotiengoi;
    QDate Ngaymophieu;
    int dongso;
};

#endif // PHIEUGOITIEN_H
