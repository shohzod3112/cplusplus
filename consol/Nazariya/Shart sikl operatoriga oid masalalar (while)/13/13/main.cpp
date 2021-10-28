// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: a soni berilgan(a > 1). (1 + 1 / 2 + 1 / 3 + ... + 1 / k) >= a
// shart bajariladigan eng kichik k sonini aniqlovchi programma tuzilsin.
// yig'indi ham ekranga chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    float a, s = 0, k = 0;
    cout << "a = "; cin >> a;

    while(s < a)
{
    k++;
    s += 1 / k;
}
    cout << "k = " << k << endl;
    cout << "s = " << s << endl;

    return 0;
}
