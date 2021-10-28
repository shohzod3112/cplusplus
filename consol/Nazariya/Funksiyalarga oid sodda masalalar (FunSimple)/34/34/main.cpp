// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Butun qiymat qaytaruvchi Fact(N) funksiyasini hosil qiling. (N > 0)
// Funksiya N! qiymatni qaytarsin. Shu funksiya orqali 3 ta sonlarning
// faktoriali qiymati aniqlansin.

#include <iostream>

using namespace std;

int Fakt (int *);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << a << " faktorial = " << Fakt(&a) << " ga teng" << endl;
    cout << b << " faktorial = " << Fakt(&b) << " ga teng" << endl;
    cout << c << " faktorial = " << Fakt(&c) << " ga teng" << endl;

    return 0;
}
    int Fakt(int *a)
{
    int n = 1;

    for(int i = 1; i <= *a; i++)
        n *= i;
    return n;
}
