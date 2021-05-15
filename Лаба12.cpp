#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
void printArray(const T *array, int count)
{
	for (int i = 0; i < count; i++) {
		cout << "a[" << i << "]= " << array[i] << "  ";
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	const int intSize = 10,
		doubleSize = 10,
		floatSize = 10,
		charSize = 5;

	int intArray[intSize] = { 1,2,3,4,5,6,7,8,9,10 };
	double doubleArray[doubleSize] = { 1.42, 2.321, 41.3, 543.4, 1.231, 2.02, 3.12, 4.009, 7.321, 11.2 };
	float floatArray[floatSize] = { 1.35, 2.31, 3.20, 4.84, 5.87, 6.34, 73.43, 8.85, 9.34, 10.5 };
	char charArray[charSize] = ("ЯЗЫК");

	cout << "Тип int: " << endl;
	printArray(intArray, intSize);
	cout << endl;

	cout << "Тип double: " << endl;
	printArray(doubleArray, doubleSize);
	cout << endl;

	cout << "Тип float: " << endl;
	printArray(floatArray, floatSize);
	cout << endl;

	cout << "Тип char: " << endl;
	printArray(charArray, charSize);
	cout << endl;
}













/*

	for (int i = 0; i < SIZE; i++) {
		cout << "a[" << i << "]= " << array[i];
		cout << endl;
	}
*/