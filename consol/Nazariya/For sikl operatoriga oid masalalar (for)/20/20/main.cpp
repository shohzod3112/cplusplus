// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni va a haqiqiy soni berilgan.(n > 0).Birdan n gacha
// bo'lgan barcha sonlar faktorialini yig'indisini aniqlovchi programma tuzing.
// Birdan n gacha bo'lgan barcha sonlar ko'paytmasi n faktorial deyiladi.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i;
    float a = 1, S = 0;

    cout << "n = "; cin >> n;

    if(n > 0)
{
    for(i = 1; i <= n; i++)
{
    a *= i;

    S += a;

    cout << i << "! faktorial " << a << endl;
}
    cout << "Yig'indisi  S = " << S << endl;
}
    return 0;
}
