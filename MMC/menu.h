#pragma once
// ===================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// ===================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);
void ChayChuongTrinh(DaySo a, int n);

// ===================================================
// Định nghĩa các hàm xử lý menu
// ===================================================

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Nhap mang";
	cout << endl << "2. Xuat mang";
	cout << endl << "3. Xuat so chan trong mang";
	cout << endl << "4. Tim so duong lon nhat";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}


int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");

		XuatMenu();

		cout << endl << "Nhap 1 so de chon menu : ";

		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}


void XuLyMenu(int menu, DaySo a, int n)
{
	int kq;
	switch (menu)
	{
	case 1:
		NhapMang(a, n);
		XuatMang(a, n);
		break;

	case 2:
		XuatMang(a, n);
		break;

	case 3:
		cout << "\nCac so chan trong mang la: \n";
		XuatChan(a, n);
		break;

	case 4:
		kq = TimVTSoDuongLonNhat(a, n);
		if (kq == -1)
			cout << "Khong co so duong trong mang";
		else
			cout << "So duong lon nhat o vi tri thu: " << kq + 1;
		break;

	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}

	if (menu > 0)
	{
		cout << endl << endl
			<< "Nhan 1 phim bat ky de tiep tuc";

		_getch();
	}
}

void ChayChuongTrinh(DaySo a, int n)
{

	int menu,
		soMenu = 4;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}