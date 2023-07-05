#include "doanhso.h"
#include "ui_doanhso.h"
#include "Header.h"

DoanhSo::DoanhSo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoanhSo)
{
    ui->setupUi(this);
    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.db);

    qry->prepare("select TenLoaiTietKiem from LoaiSoTietKiem");

    if(qry->exec());
    else
    {
        QMessageBox::critical(this, "error", qry->lastError().text());
    }
    model->setQuery(*qry);

    ui->comboBox->setModel(model);

    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit_2->setDate(QDate::currentDate());
}

DoanhSo::~DoanhSo()
{
    delete ui;
}

void DoanhSo::on_pushButton_clicked()
{
    MainWindow *qmainwindow;
    qmainwindow = new MainWindow(this);
    qmainwindow->show();
    hide();
}

void DoanhSo::on_pushButton_2_clicked()
{
    //ui->dateEdit->setDisplayFormat()
    Date = ui->dateEdit->date();
    QString day = QString::number(Date.day());
    QString month = QString::number(Date.month());
    QString year = QString::number(Date.year());
    QString m = month + "-" + day + "-" + year;

    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.db);

    qry->prepare("select TenLoaiTietKiem as 'Tên loại tiết kiệm', SoTienGui as 'Số tiền gởi (VNĐ)', SoTienRut as 'Số tiền rút (VNĐ)', (SoTienGui - SoTienRut) as 'Chêch lệch (VNĐ)' from ( select P.MaLoaiTietKiem, SUM(SoTienGoi) AS SoTienGui, CASE WHEN SUM(SoTienRut) IS  NULL THEN 0 ELSE SUM(SoTienRut) END AS SoTienRut from PhieuGoiTien as P FULL OUTER JOIN PhieuRutTien as PR ON P.MaPhieuGoiTien = PR.MaPhieuGoiTien where P.NgayMoPhieu = '"+m+"' or PR.NgayRut = '"+m+"' group by P.MaLoaiTietKiem ) as A, LoaiSoTietKiem as L where A.MaLoaiTietKiem = L.MaLoaiTietKiem");
    if(qry->exec());
    else
    {
        QMessageBox::critical(this, "error3", qry->lastError().text());
    }
    model->setQuery(*qry);

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void DoanhSo::on_pushButton_3_clicked()
{
    int maloaitietkiem = -1;
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
        QMessageBox::critical(this, "error2", qry.lastError().text());
    }

    Date2 = ui->dateEdit_2->date();
    QString month = QString::number(Date2.month());
    QString year = QString::number(Date2.year());
    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry2 = new QSqlQuery(conn.db);

    qry2->prepare("select tDate, LoaiSoTietKiem.TenLoaiTietKiem ,SoMo, SoDong from (select tDate, MaLoaiTietKiem, SUM(SoTienGui) as SoMo, SUM(SoTienRut) as SoDong from( select P.NgayMoPhieu as tDate,P.MaLoaiTietKiem, COUNT(P.MaPhieuGoiTien) AS SoTienGui, CASE WHEN 0 = 0 THEN 0 END AS SoTienRut from PhieuGoiTien as P FULL OUTER JOIN PhieuRutTien as PR ON P.MaPhieuGoiTien = PR.MaPhieuGoiTien group by P.MaLoaiTietKiem, NgayMoPhieu having COUNT(P.MaPhieuGoiTien) > 0 UNION select PR.NgayRut as tDate,P.MaLoaiTietKiem, CASE WHEN 0 = 0 THEN 0 END as SoTienGui, CASE WHEN COUNT(P.MaPhieuGoiTien) IS  NULL THEN 0 ELSE COUNT(P.MaPhieuGoiTien) END AS SoTienRut from PhieuGoiTien as P FULL OUTER JOIN PhieuRutTien as PR ON P.MaPhieuGoiTien = PR.MaPhieuGoiTien group by P.MaLoaiTietKiem, PR.NgayRut having COUNT(P.MaPhieuGoiTien) > 0 ) as T where MaLoaiTietKiem = ? and Month(tDate) = '"+month+"' and year(tDate) = '"+year+"' group by tDate, MaLoaiTietKiem) as F, LoaiSoTietKiem where F.MaLoaiTietKiem = LoaiSoTietKiem.MaLoaiTietKiem");
    qry2->addBindValue(maloaitietkiem);
    if(qry2->exec());
    else
    {
        QMessageBox::critical(this, "error1", qry2->lastError().text());
    }
    model->setQuery(*qry2);

    ui->tableView_2->setModel(model);
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
