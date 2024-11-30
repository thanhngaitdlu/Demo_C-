// ===================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// ===================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int n);
void ChayChuongTrinh(int n);

// ===================================================
// Định nghĩa các hàm xử lý menu
// ===================================================

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Xuat cac so tu 1 den N";
	cout << endl << "2. Tinh tong cac so le tu 1 den N";
	cout << endl << "3. Tinh trung binh cua cac so chan";
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


void XuLyMenu(int menu, int n)
{
	int kq;
	switch (menu)
	{
	case 1:
		XuatCacSoTu1DenN(n);
		break;

	case 2:
		kq = TinhTongLeTu1ToiN(n);
		cout << "Tong cac so tu 1 den " << n 
			<< " la: " << kq;
		break;

	case 3:
		kq = TinhTBSoChanTu1DenN(n);
		cout << "Trung binh cua cac so chan tu 1 den "
			<< n << " la: " << kq;
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

void ChayChuongTrinh(int n)
{
	
	int menu,		
		soMenu = 3;	

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}
