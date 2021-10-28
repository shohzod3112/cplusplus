// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Eng kichik
// musbat sonni aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min;

    cout << "n = "; cin >> n;

    min = 0;

    for(int i = 1; i <= n; i++)
{
    cin >> a;

    if(min == 0 && a > 0) min = a;
    if(min > a && a > 0) min = a;
}
    cout << "min = " << min << endl;

    return 0;
}
