// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Ikkita butun son berilgan.Shu sonlardan avval kichigini, so'ngra kattasini ekranga chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a > b)
        {
            cout << "Kattasi " << a << endl;
            cout << "Kichigi " << b << endl;
        }
    else if(a < b)
        {
            cout << "Kattasi " << b << endl;
            cout << "Kichigi " << a << endl;
        }

    return 0;
}
