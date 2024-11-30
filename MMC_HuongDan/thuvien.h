// Khai báo hằng và kdl 
#define MAX 1000
#define TAB '\t'

typedef int DaySo[MAX];

// Khai báo nguyên mẫu hàm
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int TimViTriDauTienCuaX(DaySo a, int n, int x);
bool KTNguyenTo(int n);
int TimVTSoNTCuoi(DaySo a, int n);
int DemSoLanXuatHien(DaySo a, int n, int x);
void TimPTXuatHienNN(DaySo a, int n);
int TimPTNhoNhat(DaySo a, int n);
int TimSoAmLN(DaySo a, int n);
int DemSLChiaHet3KhongChiaHet4(DaySo a, int n);
int DemSoChuSo(int so);
int DemSoCo3ChuSo(DaySo a, int n);

// Hàm xử lý
void NhapMang(DaySo a, int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void XuatMang(DaySo a, int n)
{ 
	cout << "Day so da nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
		
	}

}

int TimViTriDauTienCuaX(DaySo a, int n, int x)
{
	for (int i = 0; i < n; i++) 
		if (a[i] == x)
			return i;
	return -1;
}
bool KTNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}
int TimVTSoNTCuoi(DaySo a, int n)
{
	for (int i = n-1; i >= 0; i--)
		if (KTNguyenTo(a[i]))
			return i;
	return -1;
}
/*
int TimViTriDauTienCuaX(DaySo a, int n, int x)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
		if (a[i] == x) {
			vt = i;
			break;
		}			
	return vt;
}*/


int DemSoLanXuatHien(DaySo a, int n, int x) {
	int soLanXh = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			soLanXh++;
	return soLanXh;
}

void TimPTXuatHienNN(DaySo a, int n)
{
	int ptMax = 0, solanXhMax = 0, soLan = 0;

	for (int i = 0; i < n; i++)
	{
		soLan = DemSoLanXuatHien(a, n, a[i]);
		if (soLan > solanXhMax) {
			solanXhMax = soLan;
			ptMax = a[i];
		}
	}

	cout << ptMax 
		<< " xuat hien nhieu nhat. So lan xuat hien la: " 
		<< solanXhMax;
}
int TimPTNhoNhat(DaySo a, int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

int TimSoAmLN(DaySo a, int n)
{
	int max = INT32_MIN;
		
	for (int i = 0; i < n; i++)
	{	
		if (a[i] < 0 && a[i] > max)
			max = a[i];
	}

	return max;

}

int DemSLChiaHet3KhongChiaHet4(DaySo a, int n) 
{
	int dem = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0 && a[i] % 4 != 0)
			dem++;
	}

	return dem;
}

int DemSoChuSo(int so) {
	int dem = 0;
	while (so != 0) {
		dem++;
		so /= 10;// so = so/10
	}
		return dem;
}
// so = 24, dem =0
//dem = 1, so = 2
// dem = 2, so = 0

int DemSoCo3ChuSo(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (DemSoChuSo(a[i]) == 3)
			dem++;
	}
	return dem;
}

int DemSoXuatHienItNhatKLan(DaySo a, int n, int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (DemSoLanXuatHien(a, n, a[i]) >= k)
			dem++;
	}
	return dem;
}