#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "������� ��� �����: ";
	cin >> a >> b;

	if (a % b == 0)
	{
		cout << "����� " << a << " ������� �� ����� " << b << endl;
	}
	else
	{
		cout << "����� " << a << " �� ������� �� ����� " << b << endl;
	}
}