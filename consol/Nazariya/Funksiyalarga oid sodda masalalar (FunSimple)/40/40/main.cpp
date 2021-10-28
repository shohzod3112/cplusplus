// Muallif: Ro'ziyev Shohzod
// Sana: 22.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Exp1(x, n) funksiyasini hosil qiling.
// (x - haqiqiy son, n > 0) Funksiya quyidagi yig'indi qiymatini qaytarsin.
// 1 + x + x * x / 2! + pow(x,3) / 3! + ... + pow(x,n) / (n!) + ...
// Yig'indida n dan katta bo'lgan barcha xadlar qatnashsin.
// Berilgan x, n1, n2, n3 uchun funksiya hisoblansin.

#include <iostream>
#include <math.h>

using namespace std;

float Exp1 (float *, float *);

int main()
{
    float x, n1, n2, n3;

    cout << "x = ";  cin >> x;

    cout << "n1 = "; cin >> n1;
    cout << "n2 = "; cin >> n2;
    cout << "n3 = "; cin >> n3;

    cout << Exp1(&x, &n1) << endl;
    cout << Exp1(&x, &n2) << endl;
    cout << Exp1(&x, &n3) << endl;

    return 0;
}
    float Exp1 (float *x, float *n)
{
    float s = 1, d = 1, a = *x;
    int i = 2;

    while((a / d) > *n)
{
        s += a / d;
        d *= i;
        a *= *x;
        i++;
}
    return s;
}
