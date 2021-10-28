// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Ikkita manfiy bo'lmagan a va b sonlar berilgan.O'rta geometrigini toping.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, orta;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    if(a > 0 && b > 0)
{
    orta = sqrt(a * b);

    cout << "O'rta geometigi=" << orta << endl;
}
    else cout << "Noldan katta son kiriting" << endl;

    return 0;
}
