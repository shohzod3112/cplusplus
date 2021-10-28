// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Uch xonali son berilgan.Oldin uning birlar xonasidagi raqamini, so'ng o'nlar xonasidagi raqamini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "Uch xonali son kiriting\n";

    cout << "A = "; cin >> A;

    if(99 < A && A < 1000)

{
    B = A % 10;

    C = (A / 10) % 10;

    cout << "Birlar xonasidagi raqam = " << B << "\nO'nlar xonasidagi raqam = " << C << endl;
}
    else cout << "Uch xonali son kiriting!!!\n";

    return 0;
}
