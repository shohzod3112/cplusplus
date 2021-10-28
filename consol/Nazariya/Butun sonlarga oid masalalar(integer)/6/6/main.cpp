// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Ikki xonali son berilgan.Oldin uning o'nliklar xonasidagi qismini, so'ng birlar xonasidagi sonni chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A;

    cout << "Ikki xonali son kiriting...\n";
    cout << "A = "; cin >> A;
    if(10 < A && A < 99)
{
    cout << "A sonni o'nliklar xonasidagi qismi " << A / 10 << "\nA sonni birliklar xonasidagi qismi " << A % 10 << endl;
}
    return 0;
}
