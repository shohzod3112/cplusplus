// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Aylana uzunligi L berilgan.Uning radiusi R va S aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float const Pi = 3.14;
    float L, S, R;

    cout << "L="; cin >> L;

    if(L > 0)
{
    R = L / (2 * Pi);
    S = Pi * R * R;

    cout << "R=" << R << endl;
    cout << "S=" << S << endl;
}

    else cout << "L > 0 shartni qanoatlantiruvchi son kiriting" << endl;

    system("pause");
    return 0;
}
