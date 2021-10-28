// Muallif: Ro'ziyev Shohzod
// Sana:02.03.2013
// Maqsad: A va B musbat sonlari berilgan (A > B).A uzunlikdagi kesmada maksimal darajada B kesma joylashtirilgan.
// A kesmaning bo'sh qismini aniqlovchi programma tuzing.Ko'paytirish va bo'lish amallarini ishlatmasdan toping.

#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;

    while(A > 0 && B > 0 && A >= B)
{
    A -= B;
}
    cout << "Qoldiq = " << A << endl;

    return 0;
}
