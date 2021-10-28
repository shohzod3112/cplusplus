//Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
//Maqsad: Teng yonli uchburchakning elementlari quyidagi tartibda nomerlangan.
//1-katet a, 2-gipotenuza, 3-gipotenuzaga tushirilgan balandlik, 4-yuzasi.
//Shu elementlardan bittasi berilganda qolganlarini topuvchi programma tuzing.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, c, h, S;
    int  i;

    cout << "-----------------------Yo'llanmalar-------------------------" << endl;
    cout << "\n1-katet\n2-gipotenuza\n3-gipotenuzaga tushirilgan balandlik\n4-yuzasi\n\n";
    cin >> i;

    switch(i)
{
    case 1: cout << "\na = "; cin >> a; c = sqrt(2) * a; h = c / 2; S = (c * h) / 2;
    cout << "c = " << c << "\nh = " << h << "\nS = " << S << endl; break;
    case 2: cout << "\nc = "; cin >> c; a = c / sqrt(2); h = c / 2; S = (c * h) / 2;
    cout << "a = " << a << "\nh = " << h << "\nS = " << S << endl; break;
    case 3: cout << "\nh = "; cin >> h; c = h / 2; a = c / sqrt(2); S = (c * h) / 2;
    cout << "c = " << c << "\na = " << a << "\nS = " << S << endl; break;
    case 4: cout << "\nS = "; cin >> S; c = 2 * sqrt(S); h = c / 2; a = c / sqrt(2);
    cout << "c = " << c << "\nh = " << h << "\na = " << a << endl; break;

    default: cout << "xato" << endl;
}
    return 0;
}
