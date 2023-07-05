#include "suakyhan.h"
#include "ui_suakyhan.h"
#include "Header.h"
SuaKyHan::SuaKyHan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuaKyHan)
{
    ui->setupUi(this);
    QSqlQuery qry;
    qry.prepare("select Maglobal from ThamSo");
    if(qry.exec())
    {
        while (qry.next())
        {
            mltk = qry.value(0).toInt();
        }
    }
    if(qry.exec());
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

    if(mltk != 0)
    {
        ui->label_2->hide();
        ui->lineEdit_2->hide();
    }

  //  QSqlQuery qry2;

    QString tltk;

    qry.prepare("Select LoaiSoTietKiem.TenLoaiTietKiem from LoaiSoTietKiem where LoaiSoTietKiem.MaLoaiTietKiem = ?");
    qry.addBindValue(mltk);
    if(qry.exec())
    {
        while (qry.next())
        {
            tltk = qry.value(0).toString();
        }
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

    ui->label_4->setText(tltk);
}

SuaKyHan::~SuaKyHan()
{
    delete ui;
}
void SuaKyHan::on_pushButton_clicked()
{

    QString laisuat;
    int songayduocrut;
    //if(!conn.connOpen())
    //    return;
    //conn.connOpen();
    QSqlQuery qry;

    if(mltk !=0)
    {
        laisuat = ui->lineEdit->text();
        qry.prepare("UPDATE LoaiSoTietkiem SET LaiSuat = ? WHERE MaLoaiTietKiem = ?");
        qry.addBindValue(laisuat);
        qry.addBindValue(mltk);
    }

    else
    {
        laisuat = ui->lineEdit->text();
        songayduocrut = ui->lineEdit_2->text().toInt();
        qry.prepare("UPDATE LoaiSoTietkiem SET LaiSuat = ?, SoNgayDuocRut = ? WHERE MaLoaiTietKiem = ?");
        qry.addBindValue(laisuat);
        qry.addBindValue(songayduocrut);
        qry.addBindValue(mltk);
    }

    if(qry.exec())
    {
        //QMessageBox::critical(this, "Save", "Saved");
        QMessageBox::about(this, "Done", "Done");
        //conn.connClose();
        this->hide();
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

    this->hide();
}
