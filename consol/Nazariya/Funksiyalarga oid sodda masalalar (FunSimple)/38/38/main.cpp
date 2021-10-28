// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Power2(A,N) funksiyasini hosil qiling.
// Funksiyada pow(A,N) darajasi qiymati quyidagi formula asosida topilsin.
// Shu funksiya orqali berilgan A sonining N, M, K darajalari topilsin.
// pow(A,0) = 1; Agar N > 0 bo'lsa, pow(A,N) = A * A * ... * A (N ta ko'payuvchi).
// Agar A < 0 bo'lsa, pow(A,N) = 1 / (A * A * ... * A)(|N| ta ko'payuvchi).
// A haqiqiy, N, M, K butun sonlar.

#include <iostream>
#include <math.h>

using namespace std;

float Power2(float *, int *);

int main()
{
    float a;
    int n, m, k;

    cout << "a = "; cin >> a;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    cout << "k = "; cin >> k;

    cout << Power2(&a, &n) << endl;
    cout << Power2(&a, &m) << endl;
    cout << Power2(&a, &k) << endl;

    return 0;
}
    float Power2 (float *a, int *n)
{
    float p = 1;

    if(n == 0)
        *a = 1;

    for(int i = 1; i <= abs(*n); i++)
        p *= *a;

    if(n > 0)
        return p;
    else
        return 1 / p;
}
