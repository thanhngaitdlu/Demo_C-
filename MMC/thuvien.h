#pragma once
// ===================================================
// Định nghĩa các hằng số và kiểu dữ liệu mới
// ===================================================
#define MAX 1000
#define	TAB	'\t'

typedef int DaySo[MAX];

// ===================================================
// Khai báo nguyên mẫu các hàm xử lý
// ===================================================
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
bool KtChan(int n);
void XuatChan(DaySo a, int n);
int TimPTLonNhat(DaySo a, int n);
// ===================================================
// Định nghĩa các hàm xử lý
// ===================================================

void NhapMang(DaySo a, int n) {

	for (int i = 0; i < n; i++) {
		cout << "a [" << i << "] = ";
		cin >> a[i];
		cout << endl;
	}
}

void XuatMang(DaySo a, int n) {
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

bool KtChan(int n) {
	return (n % 2 == 0);
}

void XuatChan(DaySo a, int n) {
	cout << endl;
	for (int i = 0; i < n; i++)
		if (KtChan(a[i]))
			cout << a[i] << TAB;
}

int TimPTLonNhat(DaySo a, int n) {
	int max = INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int TimVTSoDuongLonNhat(DaySo a, int n) {
	int max = a[0], vt = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] > max) {
			max = a[i];
			vt = i;
		}
			
	}
	return vt;
}