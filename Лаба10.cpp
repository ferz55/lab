#include <iostream>

// Re - действительная часть
using namespace std;

class complex {
public:
	double Re, Im;
};

complex operator+(complex x, complex y) {
    complex z;
    z.Re = x.Re + y.Re;
    z.Im = x.Im + y.Im;
    return z;
}

complex operator-(complex x, complex y) {
    complex z;
    z.Re = x.Re - y.Re;
    z.Im = x.Im - y.Im;
    return z;
}

complex operator*(complex x, complex y) {
    complex z;
    z.Re = x.Re * y.Re - x.Im * y.Im;
    z.Im = x.Im * y.Re + x.Re * y.Im;
    return z;
}

complex operator/(complex x, complex y) {
    complex z;
    z.Re = (x.Re * y.Re + x.Im * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    z.Im = (x.Im * y.Re - x.Re * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    return z;
}

int main()
{
    setlocale(LC_ALL, "Russian");


	complex a,b,c;
    cout << "Действительнвая часть 1-го числа: " << endl;
    cin >> a.Re;
    cout << "Мнимая часть 1-го числа:        : " << endl;
    cin >> a.Im;

    cout << "Действительнвая часть 2-го числа: " << endl;
    cin >> b.Re;
    cout << "Мнимая часть 2-го числа:        : " << endl;
    cin >> b.Im;
    c = a + b;

    cout << "Результаты сложения:" << endl;
    cout << c.Re << "+" << c.Im << "i" << endl;


    c = a - b;

    cout << "Результаты вычитания:" << endl;
    if (b.Im >= a.Im) {
        cout << c.Re << c.Im << "i" << endl;
    }
    else {
        cout << c.Re << "+" << c.Im << "i" << endl;
    }

    c = a * b;

    cout << "Результаты умножения:" << endl;
    cout << c.Re << "+" << c.Im << "i" << endl;

    c = a / b;

    cout << "Результат деления:" << endl;
    if (b.Im >= a.Im) {
        cout << c.Re << c.Im << "i" << endl;
    }
    else {
        cout << c.Re << "+" << c.Im << "i" << endl;
    }

}