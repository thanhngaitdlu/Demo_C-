#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DaySo a;
	int so;
	cout << "Nhap vao so phan tu cua mang = ";
	cin >> so;

	ChayChuongTrinh(a, so);



	_getch();
	return 1;
}