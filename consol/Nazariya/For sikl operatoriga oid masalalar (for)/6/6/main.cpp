// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: bir kg konfetning narxi berilgan (haqiqiy son).1.2,1.4,...,2 kg konfetni
// narxini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    float a, i;

    cout << "bir kg konfet narxini kiriting = "; cin >> a;


    for(i = 1.2; i < 2.1; i+=0.2)
{
    cout << a * i << endl;
}
    return 0;
}
