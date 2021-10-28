// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: To'rtta butun son berilgan.Shu sonlarning uchtasi
// o'zaro teng.Qolgam bittasini tartib raqami aniqlansin.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, orni = 0;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    if (b == c && c == d) orni = 1;
    if (a == c && c == d) orni = 2;
    if (a == b && b == d) orni = 3;
    if (a == b && b == c) orni = 4;

    if(orni == 0) cout << "O'zaro teng sonlar yoq" << endl;
    else cout << orni << " - son boshqalaridan farqli" << endl;

    return 0;
}
