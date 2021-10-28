// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Butun qiymat qaytaruvchi Fib(N) funksiyasini hosil qiling.(N > 0)
// Fibonachchi sonlarining N-elementini qaytarsin.

#include <iostream>

using namespace std;

int Fib (int *);

int main()
{
    int n;

    cout << "n = "; cin >> n;

    cout << Fib (&n) << endl;

    return 0;
}
    int Fib (int *a)
{
    int a1 = 1, a2 = 2, a3, i = 3;

    while(i <= *a)
{
    a3 = a1 + a2;

    a1 = a2;
    a2 = a3;
    i++;
}
    return a3;
}
