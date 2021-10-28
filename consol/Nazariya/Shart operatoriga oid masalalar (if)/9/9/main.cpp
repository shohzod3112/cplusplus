// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: A va B haqiqiy son berilgan.Shu sonlarni shunday o'zlashtirish kerakki,A son kichik, B son katta bo'lsin. A va B son ekranga chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;

            cout << "Kichigi a = " << a << endl;
            cout << "Kattasi b = " << b << endl;
        }
    else if(a < b)
        {
            cout << "Kichigi a = " << a << endl;
            cout << "Kattasi b = " << b << endl;
        }

    return 0;
}
