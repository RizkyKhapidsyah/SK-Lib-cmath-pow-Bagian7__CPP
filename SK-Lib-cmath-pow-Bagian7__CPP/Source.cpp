#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	long double nilai_dasar = 7.2, hasil;
	int eksponen = -2;
	hasil = pow(nilai_dasar, eksponen);
	cout << nilai_dasar << " ^ " << eksponen << " = " << hasil << endl;

	int nilai_dasar_int = -8, eksponen_int = 3;
	double hasil2;
	hasil2 = pow(nilai_dasar_int, eksponen_int);
	cout << nilai_dasar_int << " ^ " << eksponen_int << " = " << hasil2;

	_getch();
	return 0;
}