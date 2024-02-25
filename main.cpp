#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


// ористувач вводить дв≥ дати(день, м≥с€ць,
//	р≥к у вигл€д≥ ц≥лих чисел).Ќеобх≥дно визначити ≥ вивести
//	к≥льк≥сть дн≥в м≥ж цими двома датами.ƒл€ розрахунк≥в
//	враховувати високосн≥ роки, а також коректне число дн≥в
//	у м≥с€ц€х(березень Ч 31, вересень Ч 30, лютий невисокосного року Ч 28 ≥ т.д.).


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int day_1, month_1, year_1, day_2, month_2, year_2, res=0;

	cout << "¬изначенн€ к≥лькост≥ дн≥в м≥ж двома датами.\n\t¬вед≥ть данн≥ дати є1: \n\t\tƒень: ";
	cin >> day_1;
	cout << "\n\t\tћ≥с€ць: ";
	cin >> month_1;
	cout << "\n\t\t–≥к: ";
	cin >> year_1;

	cout << "\n\t¬вед≥ть данн≥ дати є2: \n\t\tƒень: ";
	cin >> day_2;
	cout << "\n\t\tћ≥с€ць: ";
	cin >> month_2;
	cout << "\n\t\t–≥к: ";
	cin >> year_2;


    for (int i = year_1; i <= year_2; i++)
    {
        int year = 365, mon_2 = 28, mon = 30;

        if (i % 4 == 0 and (i % 100 != 0 or i % 400 == 0))
        {
            year++;
            mon_2++;
        }

        if(i == year_1)
        {
            for (int i = month_1; i <= 12; i++)
            {
                if(i == 2)
                {
                    res += mon_2;
                }

                else if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12)
                {
                    res += mon + 1;
                }

                else
                {
                    res += mon;
                }
            }
        }

        else if (i == year_2)
        {
            for (int i = 1; i <= month_2; i++)
            {
                if (i == month_2)
                {
                    res += day_2;
                }

                else if (i == 2)
                {
                    res += mon_2;
                }

                else if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12)
                {
                    res += mon + 1;
                }

                else
                {
                    res += mon;
                }
            }
        }

        else
        {
            res += year;
        }
    }

    res -= day_1;


	cout << "ћ≥ж вказаними датами " << res << " дн≥в.";

	_getch();
	return 0;
}