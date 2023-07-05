#include "danhsach.h"
#include "ui_danhsach.h"
#include "Header.h"

DanhSach::DanhSach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DanhSach)
{
    ui->setupUi(this);
    LoginSrceen conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    //conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.db);

    //qry->prepare("select F.MP as 'Mã Phiếu Gởi Tiền', LoaiSoTietKiem.TenLoaiTietKiem, F.TKH as 'Tên Khách Hàng', F.SD as 'Số Dư (VNĐ)' from LoaiSoTietKiem,( select PhieuGoiTien.MaPhieuGoiTien as MP, PhieuGoiTien.MaLoaiTietKiem,PhieuGoiTien.TenKhachHang as TKH ,(PhieuGoiTien.SoTienGoi - PhieuRutTien.SoTienRut) as SD from PhieuGoiTien, PhieuRutTien where PhieuRutTien.MaPhieuGoiTien = PhieuGoiTien.MaPhieuGoiTien UNION select PhieuGoiTien.MaPhieuGoiTien, PhieuGoiTien.MaLoaiTietKiem,PhieuGoiTien.TenKhachHang , PhieuGoiTien.SoTienGoi from PhieuGoiTien where PhieuGoiTien.MaPhieuGoiTien NOT IN (select PhieuGoiTien.MaPhieuGoiTien from PhieuGoiTien, PhieuRutTien where PhieuRutTien.MaPhieuGoiTien = PhieuGoiTien.MaPhieuGoiTien)) as F where F.MaLoaiTietKiem = LoaiSoTietKiem.MaLoaiTietKiem");
    qry->prepare("select PhieuGoiTien.MaPhieuGoiTien as 'Mã Phiếu Tiết Kiệm',LoaiSoTietKiem.TenLoaiTietKiem as 'Tên Loại Tiết Kiệm', PhieuGoiTien.TenKhachHang as 'Tên Khách Hàng', PhieuGoiTien.SoDu as 'Số Dư (VNĐ)' from LoaiSoTietKiem, PhieuGoiTien where LoaiSoTietKiem.MaLoaiTietKiem = PhieuGoiTien.MaLoaiTietKiem");
    if(qry->exec());
    else
    {
        QMessageBox::critical(this, "error", qry->lastError().text());
    }

    model->setQuery(*qry);

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

DanhSach::~DanhSach()
{
    delete ui;
}

void DanhSach::on_pushButton_clicked()
{
    MainWindow *qmainwindow;
    qmainwindow = new MainWindow(this);
    qmainwindow->show();
    hide();
}
