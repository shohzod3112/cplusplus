// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Parallilepipedning tomonlari a, b, c berilgan.
// Uning hajmi V=a*b*c va to'la sirti S=2(a*b+b*c+a*c) aniqlansin.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, S, V;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    V=a*b*c;
    S=2*(a*c+b*c+a*c);

    cout << "V=" << V << endl;
    cout << "S=" << S << endl;
    return 0;
}
