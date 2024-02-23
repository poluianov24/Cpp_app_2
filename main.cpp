#include <iostream>
#include <conio.h>

using namespace std;


//Вантажний літак має пролетіти з вантажем
//із пункту А в пункт С через пункт В.Ємність бака для
//палива в літака — 300 літрів.Споживання палива на 1 км
//залежно від ваги вантажу в літака наступне :
// до 500 кг : 1 літрів / км;
// до 1000 кг: 4 літрів / км;
// до 1500 кг: 7 літрів / км;
// до 2000 кг: 9 літрів / км;
// більше ніж 2000 кг літак не піднімає.
//Користувач вводить відстань між пунктами А і В,
//і відстань між пунктами В і С, а також вагу вантажу.Програма має розрахувати, яка мінімальну кількість палива
//необхідна для дозаправки літака в пункті В, щоб долетіти
//з пункту А в пункт С.У разі неможливості подолати будьяку з відстаней, програма має вивести повідомлення про
//неможливість польоту за введеним маршрутом.

int main() {

    double AB, BC, weight;
    int fuel;
    const int plane_tank = 300;

    cout << "Enter the weight: ";
    cin >> weight;
    if (weight < 0)
    {
        cout << "Invalid input." << endl;
        return 0;
    }
    if (weight <= 500) {
        fuel = 1;
    }
    else if (weight <= 1000) {
        fuel = 4;
    }
    else if (weight <= 1500) {
        fuel = 7;
    }
    else if (weight <= 2000) {
        fuel = 9;
    }
    else {
        cout << "The weight is too heavy to be transported." << endl;
        return 0;
    }
    cout << "Formula: fuel = " << fuel << endl;
    cout << "Enter the length of AB: ";
    cin >> AB;
    double AB_result = (plane_tank - (AB * fuel));
    cout << AB_result << " is AB_result" << endl;
    if (AB_result < 0) {
        cout << "The plane cannot reach the destination." << endl;
        return 0;
    }
    int gasUsage = AB_result;
    cout << "Enter the length of BC: ";
    cin >> BC;
    double BC_result = (BC * fuel);
    int gasUsage2 = BC_result;

    double res = gasUsage2 - gasUsage;
    if (res < 0)
        cout << "No need to refuel!" << endl;
    else if (res > 300)
        cout << "The plane cannot reach the destination." << endl;
    else
        cout << res << endl;


    _getch();
    return 0;
}