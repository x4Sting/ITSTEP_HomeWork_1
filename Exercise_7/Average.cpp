// Разработайте программу нахождения среднего арифметического и среднего
// геометрического двух неотрицательных чисел a и b

#include <iostream>
using namespace std;

int main() {

	double firstNumber;
	double secondNumber;

	cout << "Enter the first number: \t";
	cin >> firstNumber;
	cout << "Enter the second number: \t";
	cin >> secondNumber;

	double arithmeticMean = (firstNumber + secondNumber) / 2;
	double geometricMean = sqrt(firstNumber * secondNumber);

	cout << "Arithmetic mean:\t" << arithmeticMean << endl;
	cout << "Geometric mean:\t" << geometricMean << endl;

	system("pause");
	return 0;
}