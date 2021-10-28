// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan.(n > 0).Bo'lib butun va qoldiq qismlarini
// aniqlash orqali, berilgan son raqamlari yig'indisini va raqamlari sonini chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, x, s = 0, k = 0;

    cout << "n = "; cin >> n;

    while(n > 0)
{
    x = n % 10;
    k++;
    s += x;
    n /= 10;
}
    cout << "Raqamlari yig'indisi = " << s << endl;
    cout << "Raqamlari soni = " << k << endl;

    return 0;
}
