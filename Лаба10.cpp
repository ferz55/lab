# include <iostream>
# include <stdlib.h>
# include <conio.h>

using namespace std;

struct complex {
	double a, b;
};

class Complex {
	complex comp;
public:
	Complex(double x = 0, double y = 0) {
		comp.a = x;
		comp.b = y;
	}
	Complex operator +(const Complex& c);
	Complex operator -(const Complex& c);
	Complex operator *(const Complex& c);
	Complex operator /(const Complex& c);
	Complex read();
	void Display();
};

Complex Complex::operator +(const Complex& c)
{
	Complex z;
	z.comp.a = comp.a + c.comp.a;
	z.comp.b = comp.b + c.comp.b;
	return z;
}
Complex Complex::operator -(const Complex& c) {
	Complex z;
	z.comp.a = comp.a - c.comp.a;
	z.comp.b = comp.b - c.comp.b;
	return z;
}
Complex Complex::operator *(const Complex& c) {
	Complex z;
	z.comp.a = comp.a * c.comp.a - comp.b * c.comp.b;
	z.comp.b = comp.a * c.comp.b + comp.b * c.comp.a;
	return z;
}
Complex Complex::operator /(const Complex& c) {
	Complex z;
	z.comp.a = (comp.a * c.comp.a + comp.b * c.comp.b) / (comp.a * comp.a + comp.b * comp.b);
	z.comp.b = (comp.b * c.comp.a - comp.a * c.comp.b) / (comp.a * comp.a + comp.b * comp.b);
	return z;
}
void Complex::Display() {
	if (comp.b >= 0)
		cout << comp.a << "+" << comp.b << "i\n";
	else
		cout << comp.a << comp.b << "i\n";
}
Complex Complex::read() {
	double x, y;
	cout << "Действительная часть: ";
	cin >> x;
	cout << "Мнимая часть:        : ";
	cin >> y;
	Complex a = Complex(x, y);
	return a;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Complex a, b, c;
	cout << "Первое число:" << endl;
	a = a.read();
	cout << "Второе число:" << endl;
	b = b.read();

	c = a + b;
	c.Display();

	c = a - b;
	c.Display();

	c = a * b;
	c.Display();

	c = a / b;
	c.Display();

	return 0;
}