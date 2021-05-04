#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

class SimpleClass
{
public:
	static int x;
	static int n;

    int factorial(int obj2)
    {
        return (obj2 == 0) ? 1 : obj2 * factorial(obj2 - 1);
    }
    double cos()
    {
        double cos = 0;
        for (int i = 0; i < 8; i++) {
            cos += ((pow(-1, i)) * (pow(x, 2 * i))) / factorial(2 * i);
        }
        return cos;
    }
};
int SimpleClass::x;
int SimpleClass::n;

int main()
{
	setlocale(LC_ALL, "Russian");
	SimpleClass obj1;


    do {
        cout << "Введите аргумент x: ";
        cin >> obj1.x;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }
        else break;
    } while (true);

    cout << "cos(" << obj1.x << ") = " << obj1.cos();
}