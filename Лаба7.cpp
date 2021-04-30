#include <iostream>
#include <climits>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class SimpleClass
{
public:
	static int x;
	static int n;
	void show();
} obj1, obj2;
int SimpleClass::x;
int SimpleClass::n;

int value()
{
	while (true)
	{
		cout << "Enter the argument: ";
		short obj1;
		cin >> obj1;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "The entered value is not correct, please try again " << endl;
		}
		else
		{
			return obj1;
		}
	}
}

int factorial(int obj2)
{
	return (obj2 == 0) ? 1 : obj2 * factorial(obj2 - 1);
}

double calculations(int obj1)
{
	double cos = 0;
	for (int i = 0; i < 8; i++) {
		cos += ((pow(-1, i)) * (pow(obj1, 2 * i))) / factorial(2 * i);
	}
	return cos;
}

int main()
{
	int obj1 = value();
	double cos = calculations(obj1);
	cout << "cos(" << obj1 << ") = " << cos << endl;
	system ("pause");
	return 0;
}