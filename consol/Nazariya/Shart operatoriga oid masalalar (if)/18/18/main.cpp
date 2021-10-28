// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta butun son berilgan.Shu sonlarning ikkitasi
// o'zaro teng.Qolgam bittasini tartib raqami aniqlansin.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, orni = 0;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (b == c) orni = 1;
    if (a == c) orni = 2;
    if (a == b) orni = 3;

    if(orni == 0) cout << "O'zaro teng sonlar yoq" << endl;
    else cout << orni << " - son boshqalaridan farqli" << endl;

    return 0;
}
