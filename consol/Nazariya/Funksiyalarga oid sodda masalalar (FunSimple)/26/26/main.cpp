// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: IsPower5(K) mantiqiy funksiyasini hosil qiling. (K > 0).
// Agar K soni 5 ning biror darajasi bo'lsa true, aks holda false qiymat
// qaytarilsin. Shu funksiya orqali 5 ta sondan nechtasi 5 ning darajasi
// ekanini aniqlovchi programma tuzilsin.

#include <iostream>
#include <math.h>

using namespace std;

bool IsPower5 (int *);

int main()
{
    int a, b, c, d, e;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    if(IsPower5(&a))
        cout << a << endl;

    if(IsPower5(&b))
        cout << b << endl;

    if(IsPower5(&c))
        cout << c << endl;

    if(IsPower5(&d))
        cout << d << endl;

    if(IsPower5(&e))
        cout << e << endl;

    return 0;
}
    bool IsPower5(int *k)
{
     int natija = 1;

    if(*k == 1) return true;

    while(*k > natija)
{
    natija *= 5;
}
    if(natija == *k)
        return true;
    else
        return false;
}
