#include <iostream>
#include <conio.h>
using namespace std;


//���������� ������� � ��������� �����.����
//���� �����, ��������� ���� �� ���, ������ � �������
//�� ���.��������� ������� �� �����.


int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	if (number % 2 == 0)
	{
		number *= 3;
		cout << number;
	}
	else
	{
		double number_dou = static_cast<double>(number);
		number_dou /= 2;
		cout << number_dou;
	}

	_getch();
	return 0;
}