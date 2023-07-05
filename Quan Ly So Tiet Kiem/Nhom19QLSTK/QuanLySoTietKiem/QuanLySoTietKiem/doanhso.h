#ifndef DOANHSO_H
#define DOANHSO_H

#include <QDialog>
#include <QDate>
namespace Ui {
class DoanhSo;
}

class DoanhSo : public QDialog
{
    Q_OBJECT

public:
    explicit DoanhSo(QWidget *parent = nullptr);
    ~DoanhSo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DoanhSo *ui;
    QDate Date;
    QDate Date2;
};

#endif // DOANHSO_H
