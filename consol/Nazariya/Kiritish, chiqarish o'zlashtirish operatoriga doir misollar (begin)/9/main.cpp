// Muallif : Ro'ziyev Shohzod
// Sana : 10.11.2012
//Maqsad : Ikkita manfiy bo'lmagan son berilgan.Ularning o'rta arifmetigini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, geometrigi;

    cout << " Ikkita manfiy bo'lmagan son kiriting\n";

    cout << "a = " ; cin >> a;

    cout << "b = " ; cin >> b;

    geometrigi = sqrtf(a * b);

    cout << "O'rta geometrigi = " << geometrigi << endl;
    return EXIT_SUCCESS;
}
