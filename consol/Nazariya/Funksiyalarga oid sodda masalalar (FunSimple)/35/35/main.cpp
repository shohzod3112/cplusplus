// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Butun qiymat qaytaruvchi Fact2(N) funksiyasini hosil qiling.(N > 0)
// Funksiya N!! ikkilangan faktorial qiymatni qaytarsin. Shu funksiya orqali
// 3 ta sonlarning faktoriali qiymati aniqlansin.

#include <iostream>

using namespace std;

int Fakt2 (int *);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << a << "!! faktorial = ";
    cout << Fakt2(&a) << " ga teng" << endl;
    cout << b << "!! faktorial = ";
    cout << Fakt2(&b) << " ga teng" << endl;
    cout << c << "!! faktorial = ";
    cout << Fakt2(&c) << " ga teng" << endl;

    return 0;
}
    int Fakt2(int *a)
{
    int p = 1;

    while(*a >= 2)
{
    p *= *a;
    *a -= 2;
}
    return p;
}
