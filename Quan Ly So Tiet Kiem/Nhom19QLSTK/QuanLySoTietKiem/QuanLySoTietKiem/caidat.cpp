#include "caidat.h"
#include "ui_caidat.h"
#include "Header.h"

caidat::caidat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caidat)
{
    ui->setupUi(this);
    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.db);

    qry->prepare("select TenLoaiTietKiem from LoaiSoTietKiem");

    qry->exec();
    model->setQuery(*qry);

    ui->listView->setModel(model);
    //conn.close();

}

caidat::~caidat()
{
    delete ui;
}

void caidat::on_pushButton_clicked()
{
    MainWindow *qmainwindow;
    qmainwindow = new MainWindow(this);
    qmainwindow->show();
    hide();
}

void caidat::on_pushButton_2_clicked()
{
    ThemKyHan *themkyhan;
    themkyhan = new ThemKyHan(this);
    themkyhan->show();
}


void caidat::on_listView_clicked(const QModelIndex &index)
{
    val = ui->listView->model()->data(index).toString();

    LoginSrceen conn;
    //conn.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from LoaiSoTietKiem where TenLoaiTietKiem='"+val+"'");

    if(qry.exec())
    {
        while (qry.next())
        {
            maLoaiTietKiem = qry.value(0).toInt();
            laiSuat = qry.value(2).toString();
            soNgayDuocRut = qry.value(3).toInt();
        }
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

}
void caidat::on_pushButton_3_clicked()
{
    QSqlQuery qry;
    qry.prepare("UPDATE ThamSo SET Maglobal = ?");
    qry.addBindValue(maLoaiTietKiem);
    if(qry.exec())
    {
            SuaKyHan *suakyhan;
            suakyhan = new SuaKyHan(this);
            suakyhan->show();
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

}

void caidat::on_pushButton_4_clicked()
{
    QSqlQuery qry;
    qry.prepare("delete from LoaiSoTietKiem where TenLoaiTietKiem= ?");
    qry.addBindValue(val);

    if(qry.exec())
    {
        QMessageBox::about(this, "Done", "Done");
    }
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }

}

void caidat::on_pushButton_5_clicked()
{
    QSqlQuery qry;
    int sotiengoitoithieu;
    sotiengoitoithieu = ui->lineEdit->text().toInt()*1000;
    qry.prepare("UPDATE ThamSo SET SoTienGoiToiThieu = ?");
    qry.addBindValue(sotiengoitoithieu);

    if(qry.exec())
    {
        QMessageBox::about(this, "Done", "Done");
        MainWindow *qmainwindow;
        qmainwindow = new MainWindow(this);
        qmainwindow->show();
        hide();
    }
    else
    {
        QMessageBox::critical(this, "errora", qry.lastError().text());
    }

}
