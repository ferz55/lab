#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int fibonacci_sequence(int number);

int main()
{
	setlocale(LC_ALL, "Ru");

	cout << "Данная программа вычисляет числа из последовательности Фибоначчи (0,1,1,2,3,5,8,13,21...)" << endl;

	int number;
	cout << "Введите количество чисел из последовательсти: " << endl;
	cin >> number;

	for (int i = 0; i < number; i++) {
		cout << fibonacci_sequence(i) << " ";
	}
}

int fibonacci_sequence(int number)
{
	if ((number == 0) || (number == 1))
	{
		return number;
	}
	else
	{
		return fibonacci_sequence(number - 1) + fibonacci_sequence(number - 2);
	}
}
