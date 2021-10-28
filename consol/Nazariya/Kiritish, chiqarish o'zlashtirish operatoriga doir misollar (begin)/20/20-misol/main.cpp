// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Tekislikda berilgan ikkita nuqta (x1,y1) va (x2,y2) Orasidagi masofa topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2;

    cout << "Birinchi uchi koordinatasini kiriting A(x1,y1)";

    cout << "\nx1="; cin >> x1;
    cout << "\ny1="; cin >> y1;

    cout << "Ikkinchi uchi koordinatasini kiriting A(x2,y2)";

    cout << "\nx2="; cin >> x2;
    cout << "\ny2="; cin >> y2;
{
    cout << "\n Orasidagi masofa L=";
    cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;
}
    system("pause");
    return 0;
}
