#ifndef SUAKYHAN_H
#define SUAKYHAN_H

#include <QDialog>

namespace Ui {
class SuaKyHan;
}

class SuaKyHan : public QDialog
{
    Q_OBJECT

public:
    int mltk;
    explicit SuaKyHan(QWidget *parent = nullptr);
    ~SuaKyHan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SuaKyHan *ui;
};

#endif // SUAKYHAN_H
