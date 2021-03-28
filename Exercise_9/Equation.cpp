// Разработать программу решения линейного уравнение, заданного в виде 
// Ax + B = 0 (коэффициент A не равен 0)

#include <iostream>
using namespace std;

int main() {

	double a, b;

	cout << "Enter value A:\t";
	cin >> a;
	cout << "Enter value B:\t";
	cin >> b;

	double x = -b / a;

	cout << "\nEquation:\t" << a << "*X+" << b << "=0" << endl;
	cout << "Solution:\tX=" << x << endl;
	
	system("pause");
	return 0;
}