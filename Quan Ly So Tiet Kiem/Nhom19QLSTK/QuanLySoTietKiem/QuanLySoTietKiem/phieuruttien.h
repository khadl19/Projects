#ifndef PHIEURUTTIEN_H
#define PHIEURUTTIEN_H

#include <QDialog>
#include <QDate>

namespace Ui {
class phieuruttien;
}

class phieuruttien : public QDialog
{
    Q_OBJECT

public:
    explicit phieuruttien(QWidget *parent = nullptr);
    ~phieuruttien();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_editingFinished();

private:
    Ui::phieuruttien *ui;
    int maphieugoitien, maphieuruttien;
    QString tenkhachhang;
    int sotienrut;
    QDate ngayrut, ngaymophieu;
    int maloaitietkiem;
    int laisuat;
    int sotiengoi;
    int sodu;
    int songayduocrut;
};

#endif // PHIEURUTTIEN_H
