#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить два числа. Визначити, чи рівні ці числа, і якщо ні, вивести їх на екран за зростанням


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