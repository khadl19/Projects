#ifndef LOGINSRCEEN_H
#define LOGINSRCEEN_H
#include <QDialog>
#include "mainwindow.h"
#include <QtSql>

namespace Ui {
class LoginSrceen;
}

class LoginSrceen : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;
    void connClose()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-ITFF5LI\\DIEN;DATABASE=QuanLySoTietKiem;UID="";PWD="";WSID="";Trusted_connection=yes");

        if(!db.open())
            return false;
        else return true;
    }

public:
    explicit LoginSrceen(QWidget *parent = nullptr);
    ~LoginSrceen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginSrceen *ui;
    QMainWindow *mainWindow;
};

#endif // LOGINSRCEEN_H
