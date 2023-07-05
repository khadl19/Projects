#ifndef CAIDAT_H
#define CAIDAT_H
#include <QDialog>
namespace Ui {
class caidat;
}

class caidat : public QDialog
{
    Q_OBJECT

public:
    int maLoaiTietKiem=0;
    QString laiSuat, tenLoaitietkiem;
    int soNgayDuocRut;
    explicit caidat(QWidget *parent = nullptr);
    ~caidat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::caidat *ui;
    QString val;
};

#endif // CAIDAT_H
