#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	int so;
	cout << "Nhap mot so nguyen duong N = ";
	cin >> so;
	
	ChayChuongTrinh(so);
	


	_getch();
	return 1;
}