// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Ikki xonali son berilgan.Uning raqamlari yig'indisini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "Ikki xonali son kiriting...\n";

    cout << "A = "; cin >> A;

    if(10 < A && A < 99)
{
    B = A / 10;
    C = A % 10;
    A = B + C;

    cout << "A sonni raqamlari yig'indisi " << A << endl;
}
    else cout << "Ikki xonali son kiriting..." << endl;

    return 0;
}
