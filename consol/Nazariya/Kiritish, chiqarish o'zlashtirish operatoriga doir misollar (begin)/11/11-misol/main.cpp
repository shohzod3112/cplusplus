// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Ikkita nolga teng bo'lmagan a va b sonlar berilgan.Ularning yig'indisi, ko'paytmasi, har birining moduli topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, S, k, c, d;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    if(a != 0 && b != 0)
{
    S = a + b;

    k = a * b;

    c = fabs(a);

    d = fabs(b);

    cout << "Yig'indisi=" << S << endl;
    cout << "Ko'paytmasi=" << k << endl;
    cout << "Moduli \n a=" << c << endl;
    cout << "Moduli \n b=" << d << endl;
}
    else cout << "Nolga teng bo'lmagan son kiriting" << endl;

    return 0;
}
