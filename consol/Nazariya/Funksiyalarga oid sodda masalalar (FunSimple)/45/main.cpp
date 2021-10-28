// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: Haqiqiy qiymat qaytaruvchi Power4(x, a, e) funksiyasini hosil qiling.
// (|x| < 1, a, e > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// (1 + x)a = 1 + a * x +a * (a - 1) * pow(x,2) / 2! + ... + a * (a - 1) * pow(x, (2 * n + 1)) / ((2 * n + 1)) + ... (a - n + 1) * pow(x,n)/(n!)+...
// Yig'indida e dan moduli katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, a, e1, e2, e3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

float power4(float, float , float );

int main()
{
    float x, a, e1, e2, e3;
    float const pi = 3.1415;

    cout << "x = ";  cin >> x;
    cout << "a = ";  cin >> a;
    cout << "e1 = "; cin >> e1;
    cout << "e2 = "; cin >> e2;
    cout << "e3 = "; cin >> e3;

    cout << power4(x, a, e1) << endl;
    cout << power4(x, a, e2) << endl;
    cout << power4(x, a, e3) << endl;

    return 0;
}
    float power4(float x, float a, float e)
{
    int i = 1;
    float p = 1, s = 1, k = 1;

    // Doimiy sikl
    for ( ; ; )
{
    p *= (a - i + 1) * x;
    k *= i;

    if((p / k) < e)
        break;
    i++;
}
    return s;
}
