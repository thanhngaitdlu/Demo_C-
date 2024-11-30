//Hang so va kieu du lieu

#define SIZE	100

typedef int MaTran[SIZE][SIZE];

// Khai bao nguyen mau ham
void NhapMaTran(MaTran a, int n);
void XuatMaTran(MaTran a, int n);
int TinhTongTamGiacDuoi(MaTran a, int n);
int TinhTong(MaTran a, int size);
void HoanVi2Cot(MaTran a, int size, int cot1, int cot2);

// Cac ham xu ly
void NhapMaTran(MaTran a, int n) {
	for (int hang = 0; hang < n; hang++) {
		for (int cot = 0; cot < n; cot++)
		{
			//a[0][0] = 
			cout << "a[" << hang << "][" << cot << "] = ";
			cin >> a[hang][cot];
		}
	}
}

void XuatMaTran(MaTran a, int n) {
	for (int hang = 0; hang < n; hang++) {
		for (int cot = 0; cot < n; cot++)
		{
			cout << a[hang][cot] << "\t";
		}
		cout << endl;
	}
}

int TinhTongTamGiacDuoi(MaTran a, int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			tong += a[i][j];
		}
	}
	return tong;
}

int TinhTongHang(MaTran a, int n, int sttHang)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[sttHang][i];
	}

	return tong;

}

int TinhTong(MaTran a, int size) 
{
	int tong = 0;
	for (int hang = 0; hang < size; hang++)
	{
		for (int cot = 0; cot < size; cot++)
		{
			tong += a[hang][cot];
		}
	}
	return tong;
}

void HoanVi2Cot(MaTran a, int size, int cot1, int cot2)
{
	int tam;
	
	for (int hang = 0; hang < size; hang++)
	{
		tam = a[hang][cot1];
		a[hang][cot1] = a[hang][cot2];
		a[hang][cot2] = tam;
	}
}

