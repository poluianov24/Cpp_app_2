#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


//�������� ��������� ��������� 200$ + �������
//�� �������, ������ �� 500$ � 3 %, �� 500 �� 1000 �
//5 %, ����� 1000 � 8 % .���������� ������� � ���������
//����� ������� ��� ����� ���������.��������� ����
//��������, ��������� ���������� ���������, ����������
//���� ����� 200$, ������� ������� �� �����.


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int prodaz_1, prodaz_2, prodaz_3, res_1, res_2, res_3, prime = 200, zp = 200, procent_1, procent_2, procent_3;

    cout << "������ ����� ������� ��� ����� ���������: \n\t�������� �1: ";
    cin >> prodaz_1;
    cout << "\n\t�������� �2: ";
    cin >> prodaz_2;
    cout << "\n\t�������� �3: ";
    cin >> prodaz_3;

    if (prodaz_1 < 0)
    {
        procent_1 == 0;
    }

    else if (prodaz_1 < 500)
    {
        procent_1 = prodaz_1 * 0.03;
    }

    else if (prodaz_1 < 1000)
    {
        procent_1 = prodaz_1 * 0.05;
    }

    else if (prodaz_1 >= 1000)
    {
        procent_1 = prodaz_1 * 0.08;
    }


    if (prodaz_2 < 0)
    {
        procent_2 = 0;
    }

    else if (prodaz_2 < 500)
    {
        procent_2 = prodaz_2 * 0.03;
    }

    else if (prodaz_2 < 1000)
    {
        procent_2 = prodaz_2 * 0.05;
    }

    else if (prodaz_2 >= 1000)
    {
        procent_2 = prodaz_2 * 0.08;
    }


    if (prodaz_2 < 0)
    {
        procent_3 = 0;
    }

    else if (prodaz_3 < 500)
    {
        procent_3 = prodaz_3 * 0.03;
    }

    else if (prodaz_3 < 1000)
    {
        procent_3 = prodaz_3 * 0.05;
    }

    else if (prodaz_3 >= 1000)
    {
        procent_3 = prodaz_3 * 0.08;
    }


    res_1 = zp + procent_1;
    res_2 = zp + procent_2;
    res_3 = zp + procent_3;


    if (prodaz_1 == prodaz_2 == prodaz_3)
    {
        res_1 += prime;
        res_2 += prime;
        res_3 += prime;
    }

    else if (prodaz_1 == prodaz_2)
    {
        res_1 += prime;
        res_2 += prime;
    }

    else if (prodaz_1 == prodaz_3)
    {
        res_1 += prime;
        res_3 += prime;
    }

    else if (prodaz_2 == prodaz_3)
    {
        res_2 += prime;
        res_3 += prime;
    }

    else if (prodaz_1 > prodaz_2 and prodaz_1 > prodaz_3)
    {
        res_1 += prime;
    }

    else if (prodaz_2 > prodaz_1 and prodaz_2 > prodaz_3)
    {
        res_2 += prime;
    }

    else if (prodaz_3 > prodaz_1 and prodaz_3 > prodaz_2)
    {
        res_3 += prime;
    }

    cout << "�������� ����� ��������� ������: \n\t�������� �1: " << res_1 << "$\n\t�������� �2: " << res_2 << "$\n\t�������� �3: " << res_3 << "$";

	_getch();
	return 0;
}