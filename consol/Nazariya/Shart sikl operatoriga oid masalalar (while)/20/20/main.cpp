// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan.(n > 0).Bo'lib butun va qoldiq qismlarini
// aniqlash orqali, berilgan son raqamlarining orasida 2 raqami
// bor - yo'qligini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cout << "n = "; cin >> n;

    while(n > 0)
{
    x = n % 10;
    n /= 10;
    if(x == 2)
    {
        cout << "Bu sonda 2 raqami bor" << endl;
        return 0;
    }
}
    cout << "Bu sonda 2 raqami yoq!!!" << endl;

    return 0;
}
