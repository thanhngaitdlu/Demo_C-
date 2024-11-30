#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DaySo a;
	int n, so, vt; 
	cout << "Nhap so phan tu cua day so: ";
	cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);

	/*cout << endl << "Nhap so can tim ";
	cin >> so;
	vt = TimViTriDauTienCuaX(a, n, so);
	if (vt == -1)
		cout << endl << so << " khong co trong day a";
	else
		cout << endl << so << " nam o vi tri thu " << vt+1;

	vt = TimVTSoNTCuoi(a, n);
	if (vt == -1)
		cout << endl << "Khong co so nguyen to trong day a";
	else
		cout << endl <<" So nguyen to cuoi day nam o vi tri thu " << vt + 1;

	cout << endl << "Nhap so can tim ";
	cin >> so;
	vt = DemSoLanXuatHien(a, n, so);
	cout << so << " xuat hien " << vt << " lan trong day a";*/

	//TimPTXuatHienNN(a, n);
	int dem = DemSoCo3ChuSo(a, n);
	if (dem == 0)
		cout << "Khong co so co 3 chu so trong mang";
	else
		cout << "Co " << dem << " so co 3 chu so trong mang";

	return 1;
}
