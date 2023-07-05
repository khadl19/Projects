#include "phieuruttien.h"
#include "ui_phieuruttien.h"
#include "Header.h"

phieuruttien::phieuruttien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::phieuruttien)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
}

phieuruttien::~phieuruttien()
{
    delete ui;
}

void phieuruttien::on_pushButton_clicked()
{
    MainWindow *qmainwindow;
    qmainwindow = new MainWindow(this);
    qmainwindow->show();
    hide();
}

void phieuruttien::on_pushButton_2_clicked()
{
    int count =0;
    QSqlQuery qry1;
    qry1.prepare("select MaLoaiTietKiem, SoTienGoi, SoDu, MaPhieuGoiTien, TenKhachHang, NgayMoPhieu from PhieuGoiTien where MaPhieuGoiTien = '"+ui->lineEdit->text()+"'");
    if(qry1.exec())
    {
        while (qry1.next())
        {
             maloaitietkiem = qry1.value(0).toInt();
             sotiengoi = qry1.value(1).toInt();
             sodu = qry1.value(2).toInt();
             maphieugoitien = qry1.value(3).toInt();
             tenkhachhang = qry1.value(4).toString();
             ngaymophieu = qry1.value(5).toDate();
        }
    }

    qry1.prepare("select MaPhieuGoiTien from PhieuGoiTien");
    if(qry1.exec())
    {
        while (qry1.next())
        {
             if(maphieugoitien == qry1.value(0).toInt()) count++;
        }

        if(count == 0)
        {
            QMessageBox::critical(this, "error2", "Không Tim Thấy Mã Phiếu");
            sodu = 0;
        }
    }

    sotienrut = ui->lineEdit_8->text().toInt() * 1000;
    QDate ngayrut = ui->dateEdit->date();
    QString day = QString::number(ngayrut.day());
    QString month = QString::number(ngayrut.month());
    QString year = QString::number(ngayrut.year());
    QString m = month + "-" + day + "-" + year;

    int a = ngaymophieu.daysTo(ngayrut);
    QSqlQuery qryKh;
    qryKh.prepare("select LoaiSoTietKiem.SoNgayDuocRut from LoaiSoTietKiem where LoaiSoTietKiem.MaLoaiTietKiem = ?");
    qryKh.addBindValue(maloaitietkiem);
    if(qryKh.exec())
    {
        while (qryKh.next())
        {
            songayduocrut = qryKh.value(0).toInt();
        }
    }
    else
    {
        QMessageBox::critical(this, "error5", qryKh.lastError().text());
    }
    if(a<songayduocrut)
        QMessageBox::critical(this, "ERROR", "Chưa Tới Hạn Rút");

    else
    {
        if(sodu<sotienrut && sodu != 0 && sotienrut!= 0)
        {
            QMessageBox::critical(this, "ERROR", "Số Tiền Bạn Yêu Cầu Lớn Hơn Số Tiền Trong Sổ");
        }

        else
        {
            sodu = sodu - sotienrut;
            QSqlQuery qryU;
            qryU.prepare("UPDATE PhieuGoiTien SET SoDu = ? WHERE MaPhieuGoiTien = ?");
            qryU.addBindValue(sodu);
            qryU.addBindValue(maphieugoitien);

            if(qryU.exec());
            else
            {
                QMessageBox::critical(this, "errorU", qryU.lastError().text());
            }

            QSqlQuery qry3;
            qry3.prepare("select max(PhieuRutTien.MaPhieuRutTien) from PhieuRutTien");
            if(qry3.exec())
            {
                while (qry3.next())
                {
                    maphieuruttien = qry3.value(0).toInt() + 1;
                }
            }
            else
            {
                QMessageBox::critical(this, "error3", qry3.lastError().text());
            }
            QSqlQuery qry4;
            qry4.prepare("INSERT INTO PhieuRutTien VALUES (?,?,?,'"+m+"', ?, ?)");

            qry4.addBindValue(maphieuruttien);
            qry4.addBindValue(tenkhachhang);
            qry4.addBindValue(sotienrut);
            qry4.addBindValue(maloaitietkiem);
            qry4.addBindValue(maphieugoitien);
            laisuat = 0 ;
            //QMessageBox::critical(this, "Save", "Saved");
            QSqlQuery qry5;
            qry5.prepare("select LoaiSoTietKiem.LaiSuat from LoaiSoTietKiem where LoaiSoTietKiem.MaLoaiTietKiem = ?");
            qry5.addBindValue(maloaitietkiem);
            if(qry4.exec())
            {
                if(qry5.exec())
                {
                    while (qry5.next())
                    {
                        laisuat = qry5.value(0).toFloat();
                    }
                }
                else
                {
                    QMessageBox::critical(this, "error5", qry5.lastError().text());
                }

                double sotiennhan = laisuat*sotienrut/100 + sotienrut;
                QString STN = QString::number(sotiennhan);
                QString str = QString::number(sotienrut);
                QString ls = QString::number((laisuat));

                QMessageBox a;
                a.setText("Khách Hàng: "+tenkhachhang+"\nSố Tiền Rút: "+str+" VNĐ\nLãi Suất: "+ls+" %/năm\nSố Tiền Rút Được: "+STN+"");
                a.exec();
                //conn.connClose()
            }

            if(sodu ==0)
            {
                QSqlQuery qrydel;
                qrydel.prepare("DELETE FROM PhieuRutTien WHERE MaPhieuGoiTien = ?;DELETE FROM PhieuGoiTien WHERE MaPhieuGoiTien = ?;");
                qrydel.addBindValue(maphieugoitien);
                qrydel.addBindValue(maphieugoitien);
                if(qrydel.exec());
                else
                {
                    QMessageBox::critical(this, "errordel", qrydel.lastError().text());
                }
            }
            if(count !=0)
            {
                MainWindow *qmainwindow;
                qmainwindow = new MainWindow(this);
                qmainwindow->show();
                this->hide();
            }
        }
    }
}

void phieuruttien::on_lineEdit_editingFinished()
{
    QSqlQuery qry1;
    qry1.prepare("select TenKhachHang from PhieuGoiTien where MaPhieuGoiTien = '"+ui->lineEdit->text()+"'");
    if(qry1.exec())
    {
        while (qry1.next())
        {
             ui->label_3->setText(qry1.value(0).toString());
             ui->label_3->adjustSize();
        }
    }

}
