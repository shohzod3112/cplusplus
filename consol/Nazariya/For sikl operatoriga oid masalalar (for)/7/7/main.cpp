// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: a va b butun sonlari berilgan(a < b).a dan b gacha bo'lgan barcha butun
// sonlar yig'indisini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, b, s = 0, i;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    for(i = a + 1; i < b; i++)
    s += i;

    cout << "\n" << s << endl;
    return 0;
}
