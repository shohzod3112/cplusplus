// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : X kg Shkalat A so'm turadi va Y kg konfet B so'm turadi.1 kg shkalat 1 kg konfetdan qancha qimmat turishini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     float X, A, B, Y;

    cout << "Qancha shkalat oldingiz = "; cin >> X;
    cout << "Necha so'mga oldingiz = "; cin >> A;
    cout << "Qancha konfet oldingiz = "; cin >> Y;
    cout << "Necha so'mga oldingiz = "; cin >> B;
    cout << "1 kg shkalat narxi = " << A / X << endl;
    cout << "1 kg konfet narxi = " << B / Y << endl;
    cout << " 1 kg shkalat 1 kg konfetdan = " << A / X - B / Y << "ga qimmat" << endl;

    return 0;
}
