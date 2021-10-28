// Muallif: Ro'ziyev Shohzod
// Sana: 19.12.2014
// Maqsad: IsPrime(N) mantiqiy funksiyasini hosil qiling.
// (N > 0). Agar N soni tub bo'lsa - true, aks holda false
// qiymat qaytarilsin. Shu funksiya orqali 5 ta sondan
// nechtasi tub ekanini aniqlovchi programma tuzilsin.

#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime (int *);

int main()
{
    int a, b, c, d, e;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    if(IsPrime(&a))
        cout << a << endl;

    if(IsPrime (&b))
        cout << b << endl;

    if(IsPrime(&c))
        cout << c << endl;

    if(IsPrime(&d))
        cout << d << endl;

    if(IsPrime(&e))
        cout << e << endl;

    return 0;
}
    bool IsPrime(int *n)
{
    bool tub = true;

    for(int i = 2; i < *n; i++)
    if(*n % i == 0)
    {
        tub = false;
        break;
    }
    return tub;
}
