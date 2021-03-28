// Масса динозавра задаётся в граммах(масса задаётся целым неотрицательным
// числом). Разработайте программу, которая вычисляет, сколько это
// килограммов, центнеров и тонн.

#include <iostream>
using namespace std;

int main() {
	unsigned int gram;

	cout << "Input the mass of the dinosaur (g): ";
	cin >> gram;

	double kg = gram * 1.0e-3;
	double centner = kg * 1.0e-2;
	double ton = centner * 1.0e-1;

	cout << "Dinosaur mass in kilograms:\t" << kg << endl;
	cout << "Dinosaur mass in centners:\t" << centner << endl;
	cout << "Dinosaur mass in tons:\t\t" << ton << endl;

	system("pause");
	return 0;
}