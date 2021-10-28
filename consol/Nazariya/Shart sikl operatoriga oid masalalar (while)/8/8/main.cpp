// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n natural soni berilgan(n > 0).Kvadrati n dan katta bo'lmagan eng katta
// butun k sonini (k * k > n) aniqlovchi programma tuzilsin.
// Ildizdan chiqaruvchi funksiyadan foydalanmang.

#include <iostream>

using namespace std;

int main()
{
    int N, k = 1;

    cout << "N = "; cin >> N;

    while(!(N <= k * k))
{
    k++;
}
    cout << k - 1 << endl;
    return 0;
}
