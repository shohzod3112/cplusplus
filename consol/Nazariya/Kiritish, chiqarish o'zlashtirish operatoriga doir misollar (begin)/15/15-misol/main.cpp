// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Aylana yuzasi S berilgan.Uning radiusi R va d aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float const Pi = 3.14;
    float d, S, R;

    cout << "S="; cin >> S;

    if(S > 0)
{
    R = sqrt(S / Pi);
    d = 2 * R;

    cout << "R=" << R << endl;
    cout << "d=" << d << endl;
}

    else cout << "d > 0 shartni qanoatlantiruvchi son kiriting" << endl;

    system("pause");
    return 0;
}
