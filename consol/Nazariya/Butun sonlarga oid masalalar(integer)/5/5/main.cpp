// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: A va B (A > B) musbat sonlari berilgan.A kesmada B kesmani necha marta joylashtirish mumkinligini va A kesmada B kesmaning joylashmagan qismini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    float D;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    do
{   C = A / B;
    D = A % B;
}   while(A < B);
    cout << "A kesmada B kesmani " << C << "marta joylashtirsa bo'ladi" << "\nA kesmada B kesmaning " << D << "qismi joylashmagan" << endl;
    return 0;
}
