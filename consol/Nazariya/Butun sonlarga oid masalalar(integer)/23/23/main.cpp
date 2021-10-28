// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Kun boshidan boshlab N sekund vaqt o'tdi.Kun boshidan boshlab qancha soat, minut va sekunt o'tganligini hisoblovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "Kun boshidan boshlan necha sekunt vaqt o'tganligini kiriting = "; cin >> A;

    B = A / 3600;
    A = A % 3600;
    C = A / 60;
    A = A % 60;

    cout << "Kun boshidan boshlab " << B << " soat " << C << " Minut " << A << " \sekunt vaqt o'tdi" << endl;
    return 0;
}
