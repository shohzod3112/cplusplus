// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: A, B, C haqiqiy sonlari berilgan.Agar berilgan sonlar o'sish
// tartibida berilgan bo'lsa, sonlarni ikkilantiring, aks holda sonlarning
// ishorasi o'zgartirilsin.A, B, C ning qiymati ekranga chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (a <= b && b <= c)
        {
            a = 2 * a;
            b = 2 * b;
            c = 2 * c;
        }
    else
       {
           a *= -1;
           b *= -1;
           c *= -1;
        }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
