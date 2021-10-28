// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan.(n > 1).N sonini tub yoki tub emasligini
// aniqovchi programma tuzilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i = 2, ildiz;

    cout << "n = "; cin >> n;

    ildiz = sqrt(n);

    while(ildiz >= i)
{
    if(n % i == 0)
{
    cout << "Tub son emas" << endl;
    return 0;
}
    i++;
}
    cout << "Tub son!!!" << endl;
    return 0;
}
