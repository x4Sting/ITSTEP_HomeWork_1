// Разработайте программу нахождения максимального и минимального 
// значения из двух чисел a и b

#include <iostream>
using namespace std;

int main() {

	double firstNumber;
	double secondNumber;

	cout << "Enter the first number: \t";
	cin >> firstNumber;
	cout << "Enter the second number: \t";
	cin >> secondNumber;

	if (firstNumber != secondNumber) {
		double maximumValue = max(firstNumber, secondNumber);
		double minimumValue = min(firstNumber, secondNumber);

		cout << "Maximum value:\t" << maximumValue << endl;
		cout << "Minimum value:\t" << minimumValue << endl;
	}
	else cout << "The values are equal" << endl;

	system("pause");
	return 0; 
}