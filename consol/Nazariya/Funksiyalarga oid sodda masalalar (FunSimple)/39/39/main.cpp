// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Power3(A, N) funksiyasini hosil qiling.
// Funksiyada pow(A,N) darajasi qiymati quyidagicha topilsin. Agar N sonining
// kasr qismi noldan farqli bo'lsa, Power (A, B) funksiyasi chaqirilsin.
// Aks holda Power2 (A, N) funksiyasi chaqirilsin. Shu funksiya orqali
// berilgan A sonining N, M, K darajalari topilsin.
// A, N, M, K butun sonlar.

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

float Power (float, float);
float Power2(float, int);
float Power3(float, float);

int main()
{
    float a, n, m, k;

    cout << "a = "; cin >> a;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    cout << "k = "; cin >> k;

    cout << Power3(a, n) << endl;
    cout << Power3(a, m) << endl;
    cout << Power3(a, k) << endl;

    return 0;
}
    float Power(float a, float n)
{
    return pow(a, n);
}
    float Power2(float a, int n)
{
    float p = 1;

    if(n == 0)
        return 1;

    for (int i = 1; i <= abs(n); i++)
        p *= a;
    if(n > 0)
        return p;
    else
        return 1 / p;
}
    float Power3(float a, float n)
{
    float natija, c = a, b = n;

    if(ceil(b) == (int) b)
    {
        // Power2 funksiyasiga n sonini butun songa aylantirib jo'natamiz.
        natija = Power2(c, (int)b);
    }
    else
        natija = Power(c, b);

    return natija;
}
