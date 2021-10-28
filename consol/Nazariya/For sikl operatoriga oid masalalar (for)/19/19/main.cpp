// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni va a haqiqiy soni berilgan.(n > 0).Birdan n gacha
// bo'lgan barcha sonlar ko'paytmasini aniqlovchi programma tuzing.
// Birdan n gacha bo'lgan barcha sonlar ko'paytmasi n faktorial deyiladi.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, S = 1;

    cout << "n = "; cin >> n;

    if(n > 0)
{
    for(i = 1; i <= n; i++)
{
    S *= i;
}
    cout << "S = " << S << endl;
}
    return 0;
}
