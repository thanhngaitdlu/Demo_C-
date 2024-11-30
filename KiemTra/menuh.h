// ===================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// ===================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int& n);
void ChayChuongTrinh(int& n);

// ===================================================
// Định nghĩa các hàm xử lý menu
// ===================================================

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Nhap so nguyen n";
	cout << endl << "2. Xuat cac so chia het cho 11";
	cout << endl << "3. Xuat so dao nguoc";
	cout << endl << "4. Xuat cac so hoan hao";
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


void XuLyMenu(int menu, int& n)
{
	int soDao;
	switch (menu)
	{
	case 1:
		n = NhapSoNguyen();
		break;

	case 2:
		XuatSoChiaHetCho11(n);
		break;

	case 3:
		soDao = TimSoDaoNguoc(n);
		cout << "So dao cua " << n << " la: " << soDao;
		break;

	case 4:
		XuatSoHoanHao(n);
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

void ChayChuongTrinh(int& n)
{

	int menu,
		soMenu = 4;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}
