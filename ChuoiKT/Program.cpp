#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"

int main() {
	Chuoi s;
	char kt;
	cout << "Nhap vao mot chuoi: ";
	_flushall();
	gets_s(s);

	cout << "\nChuoi ban vua nhap: ";
	cout << s;

	int cd = LayChieuDaiChuoi(s);
	cout << "\nChuoi vua nhap co chieu dai la: " << cd;

	/*cout << "Nhap vao ki tu muon dem: ";
	cin >> kt;
	cd = DemKtXTrongChuoi(s, kt);

	cout << "Co " << cd<< "ki tu " << kt << " trong chuoi " << s;*/ 

	//ChenXTaiViTri(s, 'X', 4);
	//cout << s;

	DoiThanhChuoiInHoa(s);
	cout << "\n" << s;
	return 1;
}