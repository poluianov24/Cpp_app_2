#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить число.Визначити, чи є воно парним

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "Number is even";
	}
	else
	{
		cout << "Number is not even";
	}
	
	_getch();
	return 0;
}