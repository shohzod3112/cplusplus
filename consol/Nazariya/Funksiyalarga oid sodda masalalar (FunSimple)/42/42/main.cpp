// Muallif: Ro'ziyev Shohzod
// Sana: 07.02.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Cos1(x, e) funksiyasini hosil qiling.
// (x - haqiqiy son, e > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// Cos1(x) = 1 - pow(x,2) / 2! + pow(x,4) / 4! - ... + pow(-1, n) * pow(x, (2 * n)) / ((2 * n)!) + ...
// Yig'indida e dan moduli katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, e1, e2, e3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>

using namespace std;

float Cos1 (float , float );

int main()
{
    float x, e1, e2, e3;
    float const pi = 3.1415;

    cout << "x = ";  cin >> x;
    cout << "e1 = "; cin >> e1;
    cout << "e2 = "; cin >> e2;
    cout << "e3 = "; cin >> e3;

    x *= pi / 180;

    cout << Cos1(x, e1) << endl;
    cout << Cos1(x, e2) << endl;
    cout << Cos1(x, e3) << endl;

    return 0;
}
    float Cos1(float x, float e)
{
    float s = 0, hadi = 1, surat = 1, maxraj = 1;
    int ishora = 1, i = 1;

    while(fabs(hadi) >= e)
{
    s += hadi;
    ishora *= -1;
    surat  *= x * x;
    maxraj *= 2 * i - 1 * 2 * i;
    hadi = ishora * surat / maxraj;
    i++;
}
    return s;
}
