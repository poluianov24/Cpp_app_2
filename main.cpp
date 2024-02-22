#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить з клавіатури ціле шестизначне число.Написати програму, яка визначає, 
//  чи є введене число щасливим(щасливим вважається шестизначне
//  число, у якого сума перших 3 цифр дорівнює сумі других
//  трьох цифр).Якщо користувач ввів НЕ шестизначне число — повідомлення про помилку.


int main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (number < 100000 or number > 999999) 
    {
        cout << "You did not enter a six-digit number." << endl;
        _getch();
        return 1;
    }

    int n_1 = number / 100000;
    int n_2 = (number / 10000) % 10;
    int n_3 = (number / 1000) % 10;
    int n_4 = (number / 100) % 10;
    int n_5 = (number / 10) % 10;
    int n_6 = number % 10;

    if (n_1 + n_2 + n_3 == n_4 + n_5 + n_6)
    {
        cout << "Number " << number << " is lucky." << endl;
    }
    else
    {
        cout << "Number " << number << " is unlucky." << endl;
    }

    _getch();
    return 0;
}