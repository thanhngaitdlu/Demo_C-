#include<iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main() {
	unsigned int soLuong= 4;
	DsKhachHang ds = {
		{35643564, "Phan Thanh Nga", 20},
		{94465678, "Tran Van A", 10},
		{43545467, "Nguyen Thi B", 0},
		{35643564, "Dang Mai Anh", 20}
	};

	//DsKhachHang ds;
	//cout << "Ban muon nhap bao nhieu khach hang: ";
	//cin >> soLuong;

	//NhapDsKH(ds, soLuong);

	XuatDsKh(ds, soLuong);
	/*int vt = TimVtKHCoDiemCaoNhat(ds, soLuong);
	cout << "Khach hang co diem cao nhat: \n";
	XuatMotKhachHang(ds[vt]);
	cout << "\nDanh sach khach hang co diem cao nhat: \n";
	TimKhCoDiemLonNhat(ds, soLuong);*/
	int sdt, vt, diem;
	cout << "Nhap so dien thoai can cap nhat: ";
	cin >> sdt;
	vt = TimKHTheoSDT(ds, soLuong, sdt);
	if (vt == -1)
		cout << "\nKhong co khach hang co sdt nay";
	else
	{
		cout << "\nNhap vao diem can cap nhat";
		cin >> diem;
		CapNhatDiem(ds[vt], diem);
		cout << "\nKhach hang sau khi cap nhat diem: \n";
		XuatMotKhachHang(ds[vt]);
	}
		

	return 1;
}