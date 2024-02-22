#include <iostream>
#include <conio.h>
using namespace std;


//���������� ������� ������������ �����.
//��������� ������ � ����� ���� 1 � 2 �����, � ����� 3
//� 4 �����.���� ���������� ������� �� ������������
//�����, ������� ����������� ��� �������.


int main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (number < 1000 || number > 9999)
    {
        cout << "You did not enter a four-digit number.";
        _getch();
        return 1;
    }
    
    int n_1 = number / 1000;
    int n_2 = (number / 100) % 10;
    int n_3 = (number / 10) % 10;
    int n_4 = number % 10;
    int res = n_2 * 1000 + n_1 * 100 + n_4 * 10 + n_3;

    cout << "Result: " << res << endl;
    
    _getch();
    return 0;
}
