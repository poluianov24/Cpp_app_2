#include <iostream>
#include <conio.h>
using namespace std;


//���������� ������� �����. ���������, ������� �� �����, ��'���� �� ������� ����.


int main()
{
	double number;

	cout << "Enter a number: ";
	cin >> number;
	if (number > 0)
	{
		cout << "The number is positive";
	}
	else if (number < 0)
	{
		cout << "The number is negative";
	}
	else
	{
		cout << "The number is zero";
	}

	_getch();
	return 0;
}