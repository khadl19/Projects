#ifndef THEMKYHAN_H
#define THEMKYHAN_H

#include <QDialog>

namespace Ui {
class ThemKyHan;
}

class ThemKyHan : public QDialog
{
    Q_OBJECT

public:
    explicit ThemKyHan(QWidget *parent = nullptr);
    ~ThemKyHan();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

private:
    Ui::ThemKyHan *ui;
};

#endif // THEMKYHAN_H
