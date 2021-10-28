// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: bir kg konfetning narxi berilgan (haqiqiy son).1,2,...,10 kg konfetni
// narxini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    float a;
    int i;

    cout << "bir kg konfet narxini kiriting = "; cin >> a;


    for(i = 1; i < 11; i++)
{
    cout << a * i << endl;
}
    return 0;
}
