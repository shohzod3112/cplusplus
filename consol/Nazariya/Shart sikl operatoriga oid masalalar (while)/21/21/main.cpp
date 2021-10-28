// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan.(n > 0).Bo'lib butun va qoldiq qismlarini
// aniqlash orqali, berilgan son raqamlarining orasida toq raqamlar
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
    if(x % 2 != 0)
    {
        cout << "Bu sonda toq raqam bor" << endl;
        return 0;
    }
}
    cout << "Bu sonda toq raqam yoq!!!" << endl;

    return 0;
}
