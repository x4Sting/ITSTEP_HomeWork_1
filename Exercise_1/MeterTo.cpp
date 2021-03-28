// Для закрепления написания простейших программ с использованием языка
// программирования С++ попробуйте создать простенькие программы - конверторы
// для различных шкал температур(из градусов Цельсия в градусы Фаренгейта или 
// Кельвина и наоборот) или для различных валют(к примеру, из бел.руб.в евро 
// или наоборот). Можно использовать любую предметную область для создания 
// однотипных приложений(к примеру, конвертор значений углов из градусы в радианы и наоборот).

// Конвертор расстояния из метров

#include <iostream>
using namespace std;

int main() {
	const double MILE_COEF = 0.000621371;
	const double YARD_COEF = 1.09361;
	const double FEET_COEF = 3.28084;
	const double INCH_COEF = 39.3701;
	double meter;

	cout << "Input the distance (m): ";
	cin >> meter;

	cout << "Distance in miles:\t" << meter * MILE_COEF << endl;
	cout << "Distance in yards:\t" << meter * YARD_COEF << endl;
	cout << "Distance in feet:\t" << meter * FEET_COEF << endl;
	cout << "Distance in inches:\t" << meter * INCH_COEF << endl;

	system("pause");
	return 0;
}