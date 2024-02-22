#include <iostream>
#include <conio.h>
using namespace std;


//Користувач з клавіатури вводить 5 оцінок
//студента.Визначити, чи допущений студент до іспиту.
//Студент отримує допуск, якщо його середній бал 4 і вище


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