// –азработайте программу нахождени€ периметра и площади квадрата
// с заданной стороной а

#include <iostream>
using namespace std;

int main() {

	double sideA;
	
	cout << "The side of the square is: \t";
	cin >> sideA;

	double perimetr = sideA * 4;
	double square = pow(sideA, 2);

	cout << "Perimetr:\t" << perimetr << endl;
	cout << "Square:\t\t" << square << endl;

	system("pause");
	return 0;
}