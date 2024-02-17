
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	double myarray[3][5];
	double midA = 0, midB = 0, midC = 0, mid = 0;

	cout << "Введите массив построчно\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> myarray[i][j];
			mid += myarray[i][j];
		}
		cout << endl;
		switch (i)
		{
			case 0:
				midA = mid / 5;
				break;
			case 1:
				midB = mid / 5;
				break;
			case 2:
				midC = mid / 5;
				break;
		}
		mid = 0;
	}
	cout << "Cреднее значение строк:\n" << midA << " " << midB << " " << midC;

	return 0;
}
