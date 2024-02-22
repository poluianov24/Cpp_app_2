#include <iostream>
#include <conio.h>
using namespace std;


// ористувач вводить з клав≥атури число.якщо
//воно парне, помножити його на три, ≥накше Ч под≥лити
//на два.–езультат вивести на екран.


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