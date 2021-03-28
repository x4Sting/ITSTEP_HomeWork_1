// Значение расстояния между двумя городами задаётся в сантиметрах
// Разработайте программу, которая вычисляет, сколько это километров и метров

#include <iostream>
using namespace std;

int main() {
	double distanceCm;
	
	cout << "Enter distance (cm): ";
	cin >> distanceCm;

	double distanceM = distanceCm / 100;
	double distanceKm = distanceM / 1000;

	cout << "In meters:\t" << distanceM << endl;
	cout << "In kilometers:\t" << distanceKm << endl;

	system("pause");
	return 0;
}