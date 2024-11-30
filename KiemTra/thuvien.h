// Khai báo hằng và kiểu dữ liệu

// Khai báo nguyên mẫu hàm
int NhapSoNguyen();
void XuatSoChiaHetCho11(int n);
int TimSoDaoNguoc(int n);
bool KtSoHoanHao(int n);
void XuatSoHoanHao(int n);
// Các hàm xử lý
int NhapSoNguyen() 
{
	int n;

	do {
		cout << "Nhap mot so nguyen tu 100 den 10000: ";
		cin >> n;
		
		if (n < 100 || n > 10000)
			cout << "So n khong hop le. Vui long nhap lai.";
	
	} while (n < 100 || n > 10000);
	
	return n;
}

void XuatSoChiaHetCho11(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) 
	{
		if (i % 11 == 0)
		{
			cout << i << '\t';
			dem++;

			if (dem % 7 == 0)
				cout << i << endl;
		}	
	}				
}

int TimSoDaoNguoc(int n)
{
	int soDao = 0;
	while (n != 0) {
		soDao = soDao * 10 + n % 10;
		n = n / 10;
	}
	return soDao;
}

bool KtSoHoanHao(int n)
{
	int tong = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			tong += i;
	if (tong == n)
		return true;
	return false;
}

void XuatSoHoanHao(int n)
{
	cout << endl;
	for (int i = 1; i < n; i++)
		if (KtSoHoanHao(i))
			cout << i << '\t';
}
