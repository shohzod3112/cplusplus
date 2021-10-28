// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad:e haqiqiy musbat soni berilgan.Ketma-ketlik hadlari quyidagicha aniqlanadi.
// a1 = 1, a2 = 2, ak = (ak - 2 + 2 * ak - 1) / 3, k = 3,4,...
// |ak - (ak - 1)| < e shartni qanoatlantiruvchi eng kichik k sonini aniqlovchi
// programma tuzilsin. ak va ak - 1 ham ekranga chiqarilsin.

#include <iostream>
#include <math.h>
#include <iomanip.h>

using namespace std;

int main()
{
    float e, a1 = 1, a2 = 2, a, k = 2;

    cout << "e = "; cin >> e;

    while( 1 )
{
    a += (a1 + 2 * a2) / 3;

    k++;

    if(fabs(a - a1) < e)
    {
        cout << k << endl;
        cout << setprecision (5) << fixed << a1 << endl;
        cout << setprecision (5) << fixed << a2 << endl;
        cout << fabs(a - a1) << endl;
            break;
    }
        a1 = a2;
        a2 = a;
}
    return 0;
}
