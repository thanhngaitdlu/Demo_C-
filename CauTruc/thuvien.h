// Khai bao kieu du lieu va hang
#define MAX 100
#define TAB '\t'

typedef char Chuoi[MAX];

struct KhachHang
{
	unsigned int SoDienThoai;
	Chuoi HoTen;
	unsigned int DiemTichLuy;
};

typedef KhachHang DsKhachHang[MAX];

// Khai bao nguyen mau ham
void XuatMotKhachHang(KhachHang kh);
void XuatDsKh(DsKhachHang ds, int soLuong);
void NhapKhachHang(KhachHang& kh);
void NhapDsKH(DsKhachHang ds, int soLuong);
int TimVtKHCoDiemCaoNhat(DsKhachHang ds, int soLuong);
int TimDiemLonNhat(DsKhachHang ds, int soLuong);
void TimKhCoDiemLonNhat(DsKhachHang ds, int soLuong);
int TimKHTheoSDT(DsKhachHang ds, int soLuong, int sdt);
void CapNhatDiem(KhachHang& kh, int diem);

// Dinh nghia ham
void XuatMotKhachHang(KhachHang kh) {
	cout << kh.SoDienThoai
		<< TAB
		<< kh.HoTen
		<< TAB
		<< kh.DiemTichLuy;
}

void XuatDsKh(DsKhachHang ds, int soLuong) 
{
	for (int i = 0; i < soLuong; i++)
	{
		XuatMotKhachHang(ds[i]);
		cout << endl;
	}
}

void NhapKhachHang(KhachHang& kh) 
{
	cout << "Nhap so dien thoai: ";
	cin >> kh.SoDienThoai;

	cout << "Nhap ho ten: ";
	cin.ignore(1);
	_flushall();
	gets_s(kh.HoTen);

	cout << "Nhap vao diem tich luy:";
	cin >> kh.DiemTichLuy;
}

void NhapDsKH(DsKhachHang ds, int soLuong)
{
	for (int i = 0; i < soLuong; i++)
	{
		cout << "Nhap khach hang thu " << i + 1 << ": ";
		NhapKhachHang(ds[i]);
	}
}

int TimVtKHCoDiemCaoNhat(DsKhachHang ds, int soLuong)
{
	int vt = -1, max = 0;
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].DiemTichLuy >= max) {
			max = ds[i].DiemTichLuy;
			vt = i;
		}
	}
	return vt;
}

int TimDiemLonNhat(DsKhachHang ds, int soLuong)
{
	int max = 0;
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].DiemTichLuy > max) {
			max = ds[i].DiemTichLuy;
		}
	}
	return max;
}

void TimKhCoDiemLonNhat(DsKhachHang ds, int soLuong)
{
	int diemLonNhat = TimDiemLonNhat(ds, soLuong);

	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].DiemTichLuy == diemLonNhat)
		{
			XuatMotKhachHang(ds[i]);
			cout << endl;
		}
			
	}
}

int TimKHTheoSDT(DsKhachHang ds, int soLuong, int sdt)
{
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].SoDienThoai == sdt)
			return i;
	}
	return -1;
}

void CapNhatDiem(KhachHang& kh, int diem) {
	kh.DiemTichLuy += diem;
}
