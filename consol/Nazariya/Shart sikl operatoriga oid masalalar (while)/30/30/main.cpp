// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad:A, B, C musbat butun sonlari berilgan.A x B to'rtburchak ichida tomoni
// C bo'lgan kvadratdan nechtasi sig'ishini aniqlovchi programma tuzing.
// Ko'paytirish va bo'lish amallarini ishlatmang.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C, k = 0;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    while(A >= C && B >= C)
{
    A -= C;
    B -= C;
    k++;
}
    k *= 2;
    cout << "A x B to'rtburchakka " << k << " ta kvadrat joylashtirish mumkin!!!" << endl;
    return 0;
}
