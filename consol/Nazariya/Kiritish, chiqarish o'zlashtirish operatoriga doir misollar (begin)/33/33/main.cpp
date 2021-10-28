// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : X kg kanfet A so'm turadi.1 kg va Y kg konfet qancha turishini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     float X, A, Y;

    cout << "Qancha konfet oldingiz = "; cin >> X;
    cout << "Necha so'mga oldingiz = "; cin >> A;
    cout << "1 kg konfet narxi = " << A / X << endl;
    cout << "Yana qancha konfet olmoqchisiz = "; cin >> Y;
    cout << Y << " kg konfet narxi = " << Y * A / X << endl;

    return 0;
}
