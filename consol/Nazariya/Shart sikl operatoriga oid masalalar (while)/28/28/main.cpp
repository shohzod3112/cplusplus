// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad:e haqiqiy musbat soni berilgan.Ketma-ketlik hadlari quyidagicha aniqlanadi.
// a1 = 2, ak = 2 + 1 / ak - 1, k = 2,3,...
// |ak - (ak - 1)| < e shartni qanoatlantiruvchi eng kichik k sonini aniqlovchi
// programma tuzilsin. ak va ak - 1 ham ekranga chiqarilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float e, a1 = 2, a = 0, k = 1;

    cout << "e = "; cin >> e;

    while( 1 )
{
    a += 2 + 1 / a1;

    k++;

    if(fabs(a - a1) < e)
    {
        cout << k << endl;
        cout << a1 << endl;
        cout << a << endl;
            break;
    }
    a1 = a;
}
    return 0;
}
