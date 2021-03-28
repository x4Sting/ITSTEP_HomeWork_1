// Дан общий размер файла в байтах(размер задаётся в виде целого 
// неотрицательного числа). Разработайте программу, которая вычисляет,
// сколько это килобайтов, мегабайтов и т.д.

#include <iostream>
using namespace std;

int main() {
	const short COEF = 1024;
	unsigned int sizeInBytes;
	
	cout << "File size in bytes: ";
	cin >> sizeInBytes;

	double sizeInKB = (double)sizeInBytes / COEF;
	double sizeInMB = sizeInKB / COEF;
	double sizeInGB = sizeInMB / COEF;
	double sizeInTB = sizeInGB / COEF;

	cout << "Kilobyte:\t" << sizeInKB << endl;
	cout << "Megabyte:\t" << sizeInMB << endl;
	cout << "Gigabyte:\t" << sizeInGB << endl;
	cout << "Terabyte:\t" << sizeInTB << endl;

	system("pause");
	return 0;
}