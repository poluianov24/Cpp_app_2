#include <iostream>
#include <conio.h>
using namespace std;


//���������� � ��������� ������� 5 ������
//��������.���������, �� ��������� ������� �� ������.
//������� ������ ������, ���� ���� ������� ��� 4 � ����


int main()
{
	double rating, average=0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter a rating: ";
		cin >> rating;
		average += rating;
	}
	average /= 5;
	cout << average;
	
	_getch();
	return 0;
}