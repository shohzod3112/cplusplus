// Muallif: Ro'ziyev Shohzod
// Sana: 07.02.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Arctg1(x, e) funksiyasini hosil qiling.
// (|x| < 1, e > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// arctg(x) = x - pow(x,3) / 3! + pow(x,5) / 5! - ... + pow(-1, n) * pow(x, (2 * n + 1)) / ((2 * n + 1)) + ...
// Yig'indida e dan moduli katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, e1, e2, e3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

float arctg (float , float );

int main()
{
    float x, e1, e2, e3;
    float const pi = 3.1415;

    cout << "x = ";  cin >> x;
    cout << "e1 = "; cin >> e1;
    cout << "e2 = "; cin >> e2;
    cout << "e3 = "; cin >> e3;

    cout << arctg(x, e1) << endl;
    cout << arctg(x, e2) << endl;
    cout << arctg(x, e3) << endl;

    return 0;
}
    float arctg (float x, float e)
{
    float s, daraja = 1;
    int ishora = 1, i = 1;

    s = x;//Boshlang'ich qiymat
    daraja = x;
    // Doimiy sikl
    for ( ; ; )
{
    daraja *= x * x;
    ishora *= -1;
    s += ishora * daraja / (2 * i + 1);
    if((daraja / (float)(2 * i + 1)) < e)
        break;
    i++;
}
    return s;
}
