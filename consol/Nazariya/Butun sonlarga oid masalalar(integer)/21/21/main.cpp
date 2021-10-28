// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Kun boshidan boshlab N sekund vaqt o'tdi.Kun boshidan boshlab qancha minut va sekunt o'tganligini hisoblovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Kun boshidan boshlan necha sekunt vaqt o'tganligini kiriting = "; cin >> A;

    B = A / 60;
    A = A % 60;

    cout << "Kun boshidan boshlab " << B << " minut " << A << " sekunt vaqt o'tdi" << endl;

    return 0;
}
