// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : A , B va C koiffitsientlari berilgan, A * x^2 + Bx + C = 0 kvadrat tenglamaning diskrimenanti noldan katta bo'lsa yechimini (x1, x2 ni) toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, d, x1, x2;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    d = B * B - 4 * A * C;

    cout << "x1 = " << (-B + sqrt(d)) / 2 << endl;
    cout << "x2 = " << (-B - sqrt(d)) / 2 << endl;

    return 0;
}
