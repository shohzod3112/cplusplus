// Muallif: Ro'ziyev Shohzod
// Sana: 07.02.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Ln1(x, e) funksiyasini hosil qiling.
// (|x| < 1, e > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// Ln1(1 + x) = x - pow(x,2) / 2! + pow(x,3) / 3! - ... + pow(-1, n) * pow(x, (n + 1)) / ((n + 1)!) + ...
// Yig'indida e dan moduli katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, e1, e2, e3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>

using namespace std;

float Ln1 (float , float );

int main()
{
    float x, e1, e2, e3;
    float const pi = 3.1415;

    cout << "x = ";  cin >> x;
    cout << "e1 = "; cin >> e1;
    cout << "e2 = "; cin >> e2;
    cout << "e3 = "; cin >> e3;

    x *= pi / 180;

    cout << Ln1(x, e1) << endl;
    cout << Ln1(x, e2) << endl;
    cout << Ln1(x, e3) << endl;

    return 0;
}
    float Ln1(float x, float e)
{
    float s = 0, hadi = x;
    int ishora = 1, i = 2;

    while(fabs(hadi) >= e)
{
    s += hadi;
    ishora *= -1;
    hadi = ishora * pow(x, i) / i;
    i++;
}
    return s;
}
