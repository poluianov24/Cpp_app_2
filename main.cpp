#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить два числа. Вивести на екран менше з цих чисел.


int main()
{
	double n_1, n_2;

	cout << "Enter a number #1: ";
	cin >> n_1;
	cout << "Enter a number #2: ";
	cin >> n_2;
	if (n_1 < n_2)
	{
		cout << "The smaller number is " << n_1;
	}
	else if (n_2 < n_1)
	{
		cout << "The smaller number is " << n_2;
	}
	else
	{
		cout << "Numbers are the same and equal to " << n_1;
	}

	_getch();
	return 0;
}