// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Koordinata o'qlariga parallel ravishda to'g'ri
// to'rtburchakning uchta uchi berilgan to'rtinchi uchi koordinatasi aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "\nTo'g'ri to'rtburchak koordinatalarini kiriting" << endl;

    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;

    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    cout << "x3 = "; cin >> x3;
    cout << "y3 = "; cin >> y3;

    if(x1 == x2) x4 = x3;

    else if(x1 == x3) x4 = x2;
    else if(x2 == x3) x4 = x1;

    if(y1 == y2) y4 = y3;

    else if(y1 == y3) y4 = y2;
    else if(y2 == y3) y4 = y1;

    cout << "\nTo'rtinchi uchi koordinatasi " << "(" << x4 << "," << y4 << ")" << endl;

    return 0;
}
