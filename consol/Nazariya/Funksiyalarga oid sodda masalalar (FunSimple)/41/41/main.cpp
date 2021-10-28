// Muallif: Ro'ziyev Shohzod
// Sana: 22.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Sin1(x, e) funksiyasini hosil qiling.
// (x - haqiqiy son, e > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// Sin(x) = x - pow(x,3) / 3! + pow(x,5) / 5! - ... + pow(-1, n) * pow(x, (2 * n + 1)) / ((2 * n + 1)!) + ...
// Yig'indida e dan moduli katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, e1, e2, e3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>

using namespace std;

float Sin1 (float , float );

int main()
{
    float x, e1, e2, e3;
    float const pi = 3.1415;

    cout << "x = ";  cin >> x;
    cout << "e1 = "; cin >> e1;
    cout << "e2 = "; cin >> e2;
    cout << "e3 = "; cin >> e3;

    x *= pi / 180;

    cout << Sin1(x, e1) << endl;
    cout << Sin1(x, e2) << endl;
    cout << Sin1(x, e3) << endl;

    return 0;
}
    float Sin1(float x, float e)
{
    float s = 0, hadi = x, surat = x, maxraj = 1;
    int ishora = 1, i = 1;

    while(fabs(hadi) > e)
{
    s += hadi;
    ishora *= -1;
    surat  *= x * x;
    maxraj *= 2 * i * (2 * i + 1);
    hadi = ishora * surat / maxraj;
    i++;
}
    return s;
}
