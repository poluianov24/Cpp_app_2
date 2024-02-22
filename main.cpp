#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить два числа. Визначити, чи рівні ці числа, і якщо ні, вивести їх на екран за зростанням


int main()
{
	double n_1, n_2, res;

	cout << "Enter a number #1: ";
	cin >> n_1;
	cout << "Enter a number #2: ";
	cin >> n_2;
	
	if (n_1 > n_2)
	{
		cout << "\t" << n_2 << "\t" << n_1;
	}
	else if (n_1 < n_2)
	{
		cout << "\t" << n_1 << "\t" << n_2;
	}
	else
	{
		cout << "Numbers are the same";
	}

	_getch();
	return 0;
}