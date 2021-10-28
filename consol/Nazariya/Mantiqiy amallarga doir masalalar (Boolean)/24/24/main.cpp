//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : A, B, C sonlar berilgan(A soni noldan farqli).D = B^2 - 4 * A * C diskemenantdan foydalanib
//jumlani rostlikka tekshiring: "Ax^2 + Bx + C = 0 tenglama ildizga ega".

#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    bool g;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    D = (-B) * (-B) - 4 * A * C;

    g = (A > 0 && D >= 0);

    cout << g << endl;

    return 0;
}
