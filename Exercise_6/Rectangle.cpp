// Разработайте программу нахождения периметра и площади прямоугольника
// с заданными сторонами a и b

#include <iostream>
using namespace std;

int main() {

	double sideA;
	double sideB;

	cout << "The side A of the rectangle is: \t";
	cin >> sideA;
	cout << "The side B of the rectangle is: \t";
	cin >> sideB;

	double perimeter = (sideA + sideB) * 2;
	double square = sideA * sideB;

	cout << "Perimetr:\t" << perimeter << endl;
	cout << "Square:\t\t" << square << endl;

	system("pause");
	return 0;
}