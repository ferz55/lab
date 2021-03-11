#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	int a[3], i;
	double sum = 0, result;

	for (i = 0; i < 3; i++) {
		cout << "Введите a[" << i << "] = ";
		cin >> a[i];
		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Введите целое число!" << endl;
			cout << "Введите a[" << i << "] = ";
			cin >> a[i];
		}
	}

	for (i = 0; i < 3; i++) {
		sum += a[i] * a[i];
	}

	result = abs(sqrt(sum));
	cout << "|a| = " << result << endl;
	return 0;
}