// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Kun boshidan boshlab N sekund vaqt o'tdi.Kun boshidan boshlab qancha soat to'la otganligini hisoblovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Kun boshidan boshlan necha sekunt vaqt o'tganligini kiriting = "; cin >> A;

    B = A / 3600;

    cout << "Kun boshidan boshlab " << B << " soat o'tdi" << endl;

    return 0;
}
