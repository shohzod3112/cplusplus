// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni va a haqiqiy soni berilgan.(n > 0).a ning n-inchi
// darajasini aniqlovchi programma tuzing.

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
    for(i = 1; i <= n; i++)
{
    S = pow(a,i);
}
    cout << "S = " << S << endl;
}
    return 0;
}
