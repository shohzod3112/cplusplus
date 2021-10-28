// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Uch xonali son berilgan.Uning yuzlar xonasidagi raqamini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Uch xonali son kiriting: a = ";
    cin >> a;

    if(99 < a && a < 1000)
{
    d = a / 100;

    cout << a << " sonini yuzliklar xonasidagi son : " << d << endl;
}
    else cout << "Uch xonali son kiriting!!!\n";

    return 0;
}
