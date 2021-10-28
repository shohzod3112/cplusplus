// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n va m butun musbat sonlari berilgan.(n > m). n sonini m soniga bo'lib
// butun va qoldiq qismlarini bo'lish va qoldiqni olish amallarini ishlatmasdan topuvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, m, k = 0;

    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    while(n >= m)
{
    n -= m;
    k++;
}
    cout << "Butun qismi " << k << endl;
    cout << "Qoldiq qismi " << n << endl;

    return 0;
}
