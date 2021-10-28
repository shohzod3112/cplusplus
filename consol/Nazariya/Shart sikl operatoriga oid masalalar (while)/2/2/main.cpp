// Muallif: Ro'ziyev Shohzod
// Sana:02.03.2013
// Maqsad: A va B musbat sonlari berilgan (A > B).A uzunlikdagi kesmada B kesmadan nechta joylashtirish
// mumkinligini aniqlovchi programma tuzing.Ko'paytirish va bo'lish amallarini ishlatmasdan toping.

#include <iostream>

using namespace std;

int main()
{
    int A, B, i = 0;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;

    while(A > 0 && B > 0 && A > B)
{
    A -= B;
    i++;
}
    cout << "A kesmada B kesmadan " << i << " ta joylashtirish mumkin!!!" << endl;

    return 0;
}
