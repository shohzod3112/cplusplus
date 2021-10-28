// Muallif: Ro'ziyev Shohzod
// Sana: 23.12.2014
// Maqsad: Butun qiymat qaytaruvchi DigitN(K, N) funksiyasini hosil
// qiling. (K > 0). Funksiya K sonining N - raqamini qaytarsin.
// Agar k soni raqamlari N sonidan kichik bo'lsa, -1 qaytarilsin.
// Shu funksiya orqali (K1,K2,K3) sonlarining N-raqami aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int DigitN (int *, int *);
int DigitCount (int *);

int main()
{
    int a, b, c, n;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "n = "; cin >> n;

    cout << DigitN (&a,&n) << endl;
    cout << DigitN (&b,&n) << endl;
    cout << DigitN (&c,&n) << endl;

    return 0;
}
    int DigitN (int *k, int *n)
{
    int soni = DigitCount(&*k);

    if(soni < *n)  return -1;

    for(int i = soni; i > 0; i--)

    if(i == *n)
        return (*k % 10);
    else *k /= 10;
}
int DigitCount (int *d)
{
    int a = *d, soni = 0;

    while(a > 0)
{
    soni++;
    a /= 10;
}
    return soni;
}
