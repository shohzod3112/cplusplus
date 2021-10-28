// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : A1, B1, C1, A2, B2, C2, koiffitsientlari berilgan.
// Chiziqli tenglamalar sistemasi yechimlarini (x, y ni) toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A1, B1, C1, A2, B2, C2, d, x, y;

    cout << "A1 = "; cin >> A1;
    cout << "B1 = "; cin >> B1;
    cout << "C1 = "; cin >> C1;
    cout << "A2 = "; cin >> A2;
    cout << "B2 = "; cin >> B2;
    cout << "C2 = "; cin >> C2;

    d = A1 * B2 - A2 * B1;

    cout << "x = " << (C1 * B2 - C2 * B1) / d << endl;
    cout << "y = " << (A1 * C2 - A2 * C1) / d << endl;

    return 0;
}
