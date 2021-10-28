// Muallif : Ro'ziev Shohzod
// Sana : 21.12.2012
// Maqsad : Uchburchakning uchta tomoni uchlari koordinatalari berilgan.(A,C), (B,D), (x3,y3).
// Yuzasi va Perimetri tomoni tomoni topilsin.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 float AB, BC, AC, D, x1, x2, x3, y1, y2, y3;

    cout << "Birinchi uchi koordinatasini kiriting A(x1,y1)";

    cout << "\nx1="; cin >> x1;
    cout << "\ny1="; cin >> y1;

    cout << "Ikkinchi uchi koordinatasini kiriting B(x2,y2)";

    cout << "\nx2="; cin >> x2;
    cout << "\ny2="; cin >> y2;

    cout << "Uchinchi uchi koordinatasini kiriting C(x3,y3)";

    cout << "\nx3="; cin >> x3;
    cout << "\ny3="; cin >> y3;

    AB = sqrt(pow(fabs(x2-x1),2) + pow(fabs(y2-y1),2));
    BC = sqrt(pow(fabs(x3-x2),2) + pow(fabs(y3-y2),2));
    AC = sqrt(pow(fabs(x3-x1),2) + pow(fabs(y3-y1),2));

    cout << "AC = " << AC << endl;
    cout << "AB = " << AB << endl;
    cout << "BC = " << BC << endl;

    return 0;
}
