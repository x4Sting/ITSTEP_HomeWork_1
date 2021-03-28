// Попробуйте разработать программу, которая меняет местами содержимое
// двух переменных a и b (приведите несколько вариантов обмена значения
// местами)

#include <iostream>
using namespace std;

void WriteConsole(int a, int b, string text);
 
int main() {

	int a;
	int b;
	
	cout << "Enter value A:\t";
	cin >> a;
	cout << "Enter value B:\t";
	cin >> b;

	// Обмен через буфер
	int temp = a;
	a = b;
	b = temp;

	WriteConsole(a, b, "buffer:\t");

	// Обмен через функцию swap()
	swap(a, b);

	WriteConsole(a, b, "swap():\t");

	// Обмен через арифметические операциии
	a += b;
	b = a - b;
	a -= b;

	WriteConsole(a, b, "arithmetic operation (+/-):\t");

	a *= b;
	b = a / b;
	a /= b;

	WriteConsole(a, b, "arithmetic operation (*|/):\t");

	// Обмен через логическую операцию XOR
	a ^= b;
	b ^= a;
	a ^= b;
	
	WriteConsole(a, b, "logical operations:\t");

	system("pause");
	return 0;
}

void WriteConsole(int a, int b, string text) {
	cout << "Value A after " << text << a << endl;
	cout << "Value B after " << text << b << endl;
}
