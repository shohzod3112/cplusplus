// Muallif: Ro'ziyev Shohzod
// Sana: 19.12.2014
// Maqsad: Butun qiymat qaytaruvchi DigitCount(K) funksiyasini hosil
// qiling. (K > 0). Funksiya K ning raqamlari sonini qaytarsin.
// Shu funksiya orqali 5 ta sonning raqamlari soni aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int DigitCount (int *);

int main()
{
    int a, b, c, d, e;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    cout << DigitCount (&a) << endl;
    cout << DigitCount (&b) << endl;
    cout << DigitCount (&c) << endl;
    cout << DigitCount (&d) << endl;
    cout << DigitCount (&e) << endl;

    return 0;
}
    int DigitCount (int *n)
{
    int k = 0;
    while(*n > 0)
{
    k++;
    *n /= 10;
}
    return k;
}
