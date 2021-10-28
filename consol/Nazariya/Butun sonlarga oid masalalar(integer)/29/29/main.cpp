// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: A, B, C butun sonlar berilgan.
// Tomonlari A va B bo'lgan to'g'ri to'rtburchakka tomoni C bo'lgan kvadrat eng ko'p joylashtirilsin.
// To'g'ri to'rtburchakka eng ko'p joylashgan kvadratlar soni va joylashmay qolgan qismi yuzasini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "To'g'ri to'rtburchakning tomonlarini kiriting \n";
    cout << "A = " ; cin >> A;
    cout << "B = " ; cin >> B;

    cout << "\nKvadratning tomonlarini kiriting \n";
    cout << "C = "; cin >> C;

    cout << "\nTo'g'ri to'rtburchakka eng ko'p joylashgan kvadratlar soni " << (A / C) * (B / C) << " ga teng!\n";
    cout << "Kvadrat joylashmay qolgan to'g'ri to'rtburchakning yuzi ";
    cout << A * B - (A / C) * ( B / C) * C * C << " ga teng! " << endl;



    return 0;
}
