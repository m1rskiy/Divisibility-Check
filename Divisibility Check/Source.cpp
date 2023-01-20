#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;

	if (a % b == 0)
	{
		cout << "Число " << a << " делится на число " << b << endl;
	}
	else
	{
		cout << "Число " << a << " не делится на число " << b << endl;
	}
}