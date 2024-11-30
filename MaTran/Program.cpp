#include <iostream>
#include<conio.h>

using namespace std;

#include"thuvien.h"

int main() {
	MaTran a;
	int size, stt;
	cout << "Nhap vao kich thuoc cua ma tran: ";
	cin >> size;
	

	NhapMaTran(a, size);
	XuatMaTran(a, size);

	HoanVi2Cot(a, size, 0, 2);
	XuatMaTran(a, size);
	
}