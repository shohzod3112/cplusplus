// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta son berilgan. Shu sonlarni avval kichigini keyin kattasini ekranga chiqaruvchi programma tuzing.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max, min;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    max = (a > b) ? a : b;
    max = (max < c) ? c : max;

    min = (a < b) ? a : b;
    min = (min > c) ? c : min;

    cout << "min = " << min << "\nmax = " << max << endl;

    return 0;
}
