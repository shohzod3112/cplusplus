// Muallif: Ro'ziyev Shohzod
// Sana: 06.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 1).
// Ikkita qo'shni son yig'indisining eng katta qiymatini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a1, a2, max;

    cout << "n = "; cin >> n;

    cin >> a1;
    cin >> a2;

    max = a1 + a2;

    for(int i = 3; i <= n; i++)
{
    cin >> a1;

    if(max < a1 + a2)
{
        max = a1 + a2;
}
    a2 = a1;
}
    cout << "Natija = ";
    cout << max << endl;

    return 0;
}
