// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: A va B (A > B) musbat sonlari berilgan.A kesmada B kesmani necha marta joylashtirish mumkin.
#include <iostream>

using namespace std;

int main()
{
    float A, B;
    int C;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    do
{   C = A / B;
}   while(A < B);
    cout << "A kesmada B kesmani " << C << " marta joylashtirsa bo'ladi" << endl;
    return 0;
}
