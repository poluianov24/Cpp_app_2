#include <iostream>
#include <conio.h>

using namespace std;


//Користувач вводить з клавіатури 7 цілих
//чисел.Напишіть програму, яка визначає максимальне з
//цих 7 чисел(підказка — рішення має бути простим).


int main()
{
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "Enter seven numbers: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    int max_num = n1;

    if (n2 > max_num)
    {
        max_num = n2;
    }
    
    if (n3 > max_num)
    {
        max_num = n3;
    }
    
    if (n4 > max_num)
    {
        max_num = n4;
    }
    
    if (n5 > max_num)
    {
        max_num = n5;
    }
    
    if (n6 > max_num)
    {
        max_num = n6;
    }
    
    if (n7 > max_num) {
        max_num = n7;
    }

    cout << "Max number: " << max_num;


	_getch();
	return 0;
}