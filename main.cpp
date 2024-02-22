#include <iostream>
#include <conio.h>
using namespace std;


//Написати програму - калькулятор.Користувач
//вводить два числа і вибирає арифметичну дію.Вивести
//на екран результат.


int main()
{
    char operation;
    double n_1, n_2;

    cout << "Enter the number #1: ";
    cin >> n_1;
    cout << "Enter the number #1: ";
    cin >> n_2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Result: " << n_1 + n_2;
        break;
    case '-':
        cout << "Result: " << n_1 - n_2;
        break;
    case '*':
        cout << "Result: " << n_1 * n_2;
        break;
    case '/':
        if (n_2 != 0)
        {
            cout << "Result: " << n_1 / n_2;
        }
        else
        {
            cout << "Division by 0 is impossible";
        }
        break;
    default:
        cout << "Incorrect operation";
    }

    _getch();
    return 0;
}
