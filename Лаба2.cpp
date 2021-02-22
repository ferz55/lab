#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

long double factorial(int N)
{
	if (N < 0)
	{
		return 0;
	}
	if (N == 0)
	{
		return 1;
	}
	else
	{
		return N * factorial(N - 1);
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Эта программа предназначена для вычисления косинуса" << endl;

	double x;

	// ввод аргумента
	do {
		cout << "Введите аргумент x: ";
		cin >> x;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введите целое число!" << endl;
		}
		else {
			break;
		}
	} while (true);

	const int n = 10;
	int i;
	double summa = 0;

	for (i = 0; i < n; i++) {
		summa += ((pow(-1, i)) * pow(x, 2 * i)) / (factorial(2 * i));
	}

	cout << "cos (x) = " << summa << endl;
}