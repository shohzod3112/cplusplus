// Muallif: Ro'ziyev Shohzod
// Sana: 24.02.2013
// Maqsad: n butun soni va x haqiqiy soni berilgan.(n > 0).
// Quyidagi yig'indini aniqlovchi programma tuzing.
// Olingan natija taxminan pow(e,x) ga yaqinlashadi.

#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    int n, i, S2 = 1;
    float x, S1 = 1;

    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;

    if(n > 0)
{
    for(i = 1; i <= n; i++)
{
    S2 *= i;
    S1 += pow(x,i) / S2;
}}
    cout << "S = " << S1 << endl;

    return 0;
}
