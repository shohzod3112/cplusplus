// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : To'g'ri burchakli uchburchak katetlari a va b berilgan.Gipotenuzasi c va Primetri P aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, P;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    if(a > 0 && b > 0)
{
    c = sqrt (a * a + b * b);
    P = a + b + c;

    cout << "gipotenuzasi=" << c << endl;
    cout << "Perimetri=" << P << endl;
}

    else cout << "Noldan katta son kiriting" << endl;

    system("pause");
    return 0;
}
