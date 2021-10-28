// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n natural soni berilgan(n > 1). (1 + 2 + 3 + ... + k) <= n
// shart bajariladigan eng katta k sonini aniqlovchi programma tuzilsin.
// 1 dan k gacha bo'lgan yig'indi ham ekranga chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, k = 0, s = 0;
    cout << "n = "; cin >> n;

    while(s < n)
{
    k++;
    s += k;
}
    if(s > n)
{
    s -= k--;
}
    cout << "k = " << k << endl;
    cout << "s = " << s << endl;

    return 0;
}
