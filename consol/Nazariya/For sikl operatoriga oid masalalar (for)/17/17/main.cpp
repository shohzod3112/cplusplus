// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni va a haqiqiy soni berilgan.(n > 0).Bir sikldan foydalanib
//a ning 1 dan n gacha bo'lgan barcha darajasini va yig'indisini aniqlovchi programma tuzing.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    float a, S = 0;

    cout << "a = "; cin >> a;
    cout << "n = "; cin >> n;

    if(n > 0)
{
    for(i = 0; i < n; i++)
{
    S = S + pow(a,i);
}
    cout << "S = " << S << endl;
}
    return 0;
}
