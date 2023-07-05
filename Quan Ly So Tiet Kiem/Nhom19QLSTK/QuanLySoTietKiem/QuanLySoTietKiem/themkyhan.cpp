#include "themkyhan.h"
#include "ui_themkyhan.h"
#include "Header.h"

ThemKyHan::ThemKyHan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThemKyHan)
{
    ui->setupUi(this);
    LoginSrceen conn;

    ui->label_9->hide();
}

ThemKyHan::~ThemKyHan()
{
    delete ui;
}

void ThemKyHan::on_pushButton_clicked()
{
    LoginSrceen conn;

    int maloaitietkiem, songayduocrut;
    QString tenloaitietkiem;
    QString laisuat;

    if(ui->radioButton->isChecked())
    {
        maloaitietkiem = 0;
        songayduocrut = 15;
    }
    else
    {
        maloaitietkiem = (ui->spinBox_2->value() * 12 + ui->spinBox->value())*30;
        songayduocrut = maloaitietkiem;
    }

    QString Songaytietkiem = QString::number(songayduocrut);

    ui->songayduocrut->setText(Songaytietkiem);

    tenloaitietkiem = ui->tenloaikyhan->text();
    laisuat = ui->laisuat->text();

    //if(!conn.connOpen())
       //0 return;
    //conn.connOpen();

    QSqlQuery qry;
    qry.prepare("INSERT INTO LoaiSoTietKiem VALUES (?,?,?,?)");

    qry.addBindValue(maloaitietkiem);
    qry.addBindValue(tenloaitietkiem);
    qry.addBindValue(laisuat);
    qry.addBindValue(songayduocrut);

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

void ThemKyHan::on_radioButton_2_clicked()
{
    ui->spinBox->show();
    ui->spinBox_2->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_9->hide();
}

void ThemKyHan::on_radioButton_clicked()
{
    ui->spinBox->hide();
    ui->spinBox_2->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_9->show();
}
