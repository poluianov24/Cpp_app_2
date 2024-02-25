#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


//Зарплата менеджера становить 200$ + відсоток
//від продажів, продажі до 500$ — 3 %, від 500 до 1000 —
//5 %, понад 1000 — 8 % .Користувач вводить з клавіатури
//рівень продажів для трьох менеджерів.Визначити їхню
//зарплату, визначити найкращого менеджера, нарахувати
//йому премію 200$, вивести підсумки на екран.


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int prodaz_1, prodaz_2, prodaz_3, res_1, res_2, res_3, prime = 200, zp = 200, procent_1, procent_2, procent_3;

    cout << "Введіть рівень продажів для трьох менеджерів: \n\tМенеджер №1: ";
    cin >> prodaz_1;
    cout << "\n\tМенеджер №2: ";
    cin >> prodaz_2;
    cout << "\n\tМенеджер №3: ";
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

    cout << "Заробітня плата менеджерів складає: \n\tМенеджер №1: " << res_1 << "$\n\tМенеджер №2: " << res_2 << "$\n\tМенеджер №3: " << res_3 << "$";

	_getch();
	return 0;
}