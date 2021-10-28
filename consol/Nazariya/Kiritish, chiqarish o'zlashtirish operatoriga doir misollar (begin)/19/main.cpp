// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : To'g'ri to'rtburchakning qarama-qarshi uchlari koordinatalari berilgan.Uning tomonlari koordinata o'qiga parallel.To'g'ri to'rtburchakning P va S ni toping.

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
    cout << "\nPerimetri=" << 2 * (fabs(x2 - x1) + fabs(y2 - y1)) << endl;
    cout << "\nYuzasi=" << fabs((x2 - x1) * fabs(y2 - y1)) << endl;
}
    system("pause");
    return 0;
}
