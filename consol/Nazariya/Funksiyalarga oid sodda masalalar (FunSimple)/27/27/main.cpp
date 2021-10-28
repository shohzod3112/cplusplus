// Muallif: Ro'ziyev Shohzod
// Sana: 19.12.2014
// Maqsad: IsPowerN(K,N) mantiqiy funksiyasini hosil qiling. (K > 0).
// Agar K soni N sonining biror darajasi bo'lsa true, aks holda false qiymat
// qaytarilsin. Shu funksiya orqali 5 ta sondan nechtasi N ning darajasi
// ekanini aniqlovchi programma tuzilsin.

#include <iostream>
#include <math.h>

using namespace std;

bool IsPowerN (int *, int *);

int main()
{
    int n, a, b, c, d, e;

    cout << "n = "; cin >> n;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    if(IsPowerN(&a, &n))
        cout << a << endl;

    if(IsPowerN(&b, &n))
        cout << b << endl;

    if(IsPowerN(&c, &n))
        cout << c << endl;

    if(IsPowerN(&d, &n))
        cout << d << endl;

    if(IsPowerN(&e, &n))
        cout << e << endl;

    return 0;
}
    bool IsPowerN(int *k, int *n)
{
    int s = *n;

    if(*k == 1) return true;

    while(*k > s)
{
    s *= *n;
}
    if(s == *k)
        return true;
    else
        return false;
}
