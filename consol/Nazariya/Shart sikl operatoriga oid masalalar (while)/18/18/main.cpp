// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan.(n > 0).Bo'lib butun va qoldiq qismlarini
// aniqlash orqali, berilgan son raqamlarini teskari tartibda chiqaruvchi programma tuzilsin.

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
    cout << x;
}
    return 0;
}
