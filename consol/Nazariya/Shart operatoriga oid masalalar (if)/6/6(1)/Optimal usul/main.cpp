// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Ikkita butun son berilgan.Shu sonlardan kattasini toping.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    c = (a > b) ? a : b;
    cout << "Kattasi " << c << endl;

    return 0;
}
