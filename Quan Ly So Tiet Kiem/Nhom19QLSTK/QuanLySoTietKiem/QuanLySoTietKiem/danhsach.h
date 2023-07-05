#ifndef DANHSACH_H
#define DANHSACH_H

#include <QDialog>

namespace Ui {
class DanhSach;
}

class DanhSach : public QDialog
{
    Q_OBJECT

public:
    explicit DanhSach(QWidget *parent = nullptr);
    ~DanhSach();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DanhSach *ui;
};

#endif // DANHSACH_H
