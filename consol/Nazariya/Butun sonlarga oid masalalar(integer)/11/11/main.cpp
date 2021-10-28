// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Uch xonali son berilgan.Uning raqamlari yig'indisini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D, E;

    cout << "Uch xonali son kiriting:\n";

    cout << "A = "; cin >> A;

    if (99 < A && A < 1000)
{
    B = A / 100;
    C = (A % 100) / 10;
    D = A % 10;
    E = B + C + D;
    cout << "Raqamlari yig'indisi = " << E << endl;
}
    else cout << "Uch xonali son kiriting!!!\n";

    return 0;
}
