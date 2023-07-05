#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Header.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()//phieu goi tien
{
    PhieuGoiTien *phieugoitien;
    phieugoitien = new PhieuGoiTien(this);
    phieugoitien->show();
    hide();
}

void MainWindow::on_pushButton_3_clicked()//phieu rut tien
{
    phieuruttien *pruttien;
    pruttien = new phieuruttien(this);
    pruttien->show();
    hide();
}

void MainWindow::on_pushButton_6_clicked()//
{
    DoanhSo *doanhso;
    doanhso = new DoanhSo(this);
    doanhso->show();
    hide();
}

void MainWindow::on_pushButton_4_clicked()//danh sach
{
    DanhSach *danhsach;
    danhsach = new DanhSach();
    danhsach->show();
    hide();
}

void MainWindow::on_CAIDAT_clicked()
{
    caidat *Caidat;
    Caidat = new caidat();
    Caidat->show();
    hide();
}
