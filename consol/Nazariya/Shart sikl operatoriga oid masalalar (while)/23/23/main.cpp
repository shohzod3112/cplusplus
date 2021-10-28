// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: a va b butun musbat sonlari berilgan.Berilgan sonlarning eng katta
// umumiy bo'luvchisini aniqovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    while(a != b)
{
    if(a > b)
        a -= b;
    else
        b -= a;
}
    cout << "EKUB = " << a << endl;
    return 0;
}
