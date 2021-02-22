#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Эта программа находил угол а, под которым тело брошено по отношению к горизонту, когда известны начальная скорость V и время полёта Т." << endl;

	double V = 0.0;

	do {
		cout << "Введите скорость V: ";
		cin >> V;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Необходимо ввести вещественное число!" << endl;
		}
		else break;
	} while (true);

	double T = 0.0;

	do {
		cout << "Введите время полёта Т: ";
		cin >> T;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Необходимо ввести вещественное число!" << endl;
		}
		else break;
	} while (true);

	int g = 10; 

	double angle = 0;
	const double PI = 3.141592653589793;
	angle = asin((g * T) / (2 * V)) * (180 / PI);


	cout << "Угол а в градусах равен: " << angle << endl;
}