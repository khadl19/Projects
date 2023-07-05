#include "phieugoitien.h"
#include "ui_phieugoitien.h"
#include "Header.h"

PhieuGoiTien::PhieuGoiTien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhieuGoiTien)
{
    ui->setupUi(this);
    ui->dateEdit->setMinimumDate(QDate::currentDate());
    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.db);

    qry->prepare("select TenLoaiTietKiem from LoaiSoTietKiem");

    qry->exec();
    model->setQuery(*qry);
    if(qry->exec());
    else
    {
        QMessageBox::critical(this, "error", qry->lastError().text());
    }

    ui->comboBox->setModel(model);

}

PhieuGoiTien::~PhieuGoiTien()
{
    delete ui;
}

void PhieuGoiTien::on_pushButton_2_clicked()
{
    MainWindow *qmainwindow;
    qmainwindow = new MainWindow(this);
    qmainwindow->show();
    hide();
}

void PhieuGoiTien::on_pushButton_clicked()
{
    QSqlQuery qry;
    qry.prepare("select * from LoaiSoTietKiem where TenLoaiTietKiem = '"+ui->comboBox->currentText()+"'");
    if(qry.exec())
    {
        while (qry.next())
        {
            maloaitietkiem = qry.value(0).toInt();
        }
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

    QSqlQuery qry2;
    qry2.prepare("select max(PhieuGoiTien.MaPhieuGoiTien) from PhieuGoiTien");
    if(qry2.exec())
    {
        while (qry2.next())
        {
            maphieugoitien = qry2.value(0).toInt();
        }
    }
    else
    {
        QMessageBox::critical(this, "error", qry2.lastError().text());
    }

    maphieugoitien++;
    khachhang = ui->khachhangEditText->text();
    cmnd = ui->cmndEditText->text();
    diachi = ui->diachiEditText->text();
    sotiengoi = ui->sotiengoiEditText->text().toInt() * 1000;
    Ngaymophieu = ui->dateEdit->date();
    QString day = QString::number(Ngaymophieu.day());
    QString month = QString::number(Ngaymophieu.month());
    QString year = QString::number(Ngaymophieu.year());
    QString m = month + "-" + day + "-" + year;
    dongso = 1;

    qry.prepare("INSERT INTO PhieuGoiTien VALUES (?,?,?,?,?,?,'"+m+"',?,?)");

    qry.addBindValue(maphieugoitien);
    qry.addBindValue(khachhang);
    qry.addBindValue(cmnd);
    qry.addBindValue(diachi);
    qry.addBindValue(maloaitietkiem);
    qry.addBindValue(sotiengoi);
   // qry.addBindValue('12/11/2018');
    qry.addBindValue(dongso);
    qry.addBindValue(sotiengoi);
    QString stg = QString::number(sotiengoi);
    int sotiengoitoithieu;
    QString mpgt = QString::number(maphieugoitien);
    QSqlQuery qryKh;
    qryKh.prepare("select ThamSo.SoTienGoiToiThieu from ThamSo");
    if(qryKh.exec())
    {
        while (qryKh.next())
        {
            sotiengoitoithieu = qryKh.value(0).toInt();
        }
    }
    else
    {
        QMessageBox::critical(this, "error5", qryKh.lastError().text());
    }
    QString stgtt = QString::number(sotiengoitoithieu);
    if(sotiengoi<sotiengoitoithieu)
    {
        QMessageBox::critical(this, "ERROR", "Số Tiền Gởi Tối Thiểu Là: "+stgtt+"");
    }
    else
    {
        if(qry.exec())
        {
            //QMessageBox::critical(this, "Save", "Saved");
            QMessageBox a;
            a.setText("Mở Phiếu Thành Công\nTên Khách Hàng: "+khachhang+"\nMã số phiếu: "+mpgt+"\nSố Tiền Gởi:"+stg+" VNĐ\n" );
            a.exec();
            //conn.connClose();
            MainWindow *qmainwindow;
            qmainwindow = new MainWindow(this);
            qmainwindow->show();
            this->hide();
        }
        else
        {
            QMessageBox::critical(this, "error", qry.lastError().text());
        }
    }
}
