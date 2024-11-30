// ===================================================
// Định nghĩa các hằng số và kiểu dữ liệu mới
// ===================================================


// ===================================================
// Khai báo nguyên mẫu các hàm xử lý
// ===================================================
void XuatCacSoTu1DenN(int n);
int TinhTongLeTu1ToiN(int n);
int TinhTBSoChanTu1DenN(int n);

// ===================================================
// Định nghĩa các hàm xử lý
// ===================================================
void XuatCacSoTu1DenN(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		dem++;
		if (dem % 10 == 0)
			cout << endl;
	}

}

int TinhTongLeTu1ToiN(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++)
		if (i % 2 == 1)
			tong += i;

	return tong;
}

int TinhTBSoChanTu1DenN(int n) {
	int tong = 0, dem = 0;
	for (int i = 2; i <= n; i++)
		if (i % 2 != 0) {
			tong += i;
			dem++;
		}
	cout << tong;
	return tong / dem;
}