#include "loginsrceen.h"
#include "ui_loginsrceen.h"
#include "Header.h"

LoginSrceen::LoginSrceen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginSrceen)
{
    ui->setupUi(this);
}

LoginSrceen::~LoginSrceen()
{
    delete ui;
}

void LoginSrceen::on_pushButton_clicked()
{
 /*   */
    QString user, password;
    user=ui->lineEdit->text();
    password=ui->lineEdit_2->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Login where ten ='"+user+"'and password ='"+password+"'");

    if(qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count == 1)
        {
            //connClose();
            mainWindow = new MainWindow(this);
            mainWindow->show();
            hide();
        }
        if(count < 1)
        {
            QMessageBox::about(this, "ERROR", "Tên người dùng và mật khẩu không hợp lệ");
        }
    }
    if(qry.exec());
    else
    {
        QMessageBox::critical(this, "error", qry.lastError().text());
    }
}
