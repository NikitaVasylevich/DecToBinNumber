#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int j = 0;
	int c = 0;
	cout << "Введите десятичное число: ";	cin >> j;
	const int m = 10;
	int ar2[m] = {};

	for (int i = 0; j >= 2; i++)
	{
		ar2[i] = j % 2;
		j = j / 2;
		c = c++;
	}
	ar2[c] = j;
	cout << endl;

	cout << "Вывод двоичного числа:\n";
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i <= c; i++)
	{
		arr[i] = ar2[c - i];
		cout << arr[i];
	}
	cout << endl;
}