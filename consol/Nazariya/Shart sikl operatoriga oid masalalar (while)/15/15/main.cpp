// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: Bankka boshlang'ich S summa qo'yildi.Har oyda bor bo'lgan summa p foizga oshadi
// (0 < p < 25). Necha oydan keyin boshlang'ich qiymat 2 martadan ko'p
// bo'lishini bo'lishini hisoblovchi programma tuzilsin. Necha oy k - butun son.
// Bankda hosil bo'lgan summa haqiqiy son ekranga chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    float p, s, s1;
    cout << "Bankka qo'yilgan summani kiriting!!!" << endl;
    cout << "s = "; cin >> s;
    cout << "0 < p < 25 oraliqda foizni kiriting" << endl;
    cout << "p = "; cin >> p;

    s1 = 2 * s;
    p /= 100;

    while(s < s1)
{
    k++;
    s += s * p;
    cout << k << " - oy " << s << endl;
}
    cout << "oy = " << k << endl;
    cout << "summa = " << s << endl;
    return 0;
}
