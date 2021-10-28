// Muallif: Ro'ziyev Shohzod
// Sana: 09.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// To'plamdagi ketma - ket keladigan eng katta elementlarning minimal
// sonini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, sonimin, soni1;

    cout << "n = "; cin >> n;

    sonimin = n;

    cin >> max;

    soni1 = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(max < a)
{
    max = a;
    soni1 = 1;
}
    else if(max == a) soni1++;
    else
{
    if((sonimin > soni1) && (soni1 != 0))
        sonimin = soni1;
        soni1 = 0;
}
}   // max qiymat oxirida bitta kiritilishi mumkin

    if(sonimin > soni1 && a == max)
        sonimin = soni1;
   cout << endl;

    cout << "Ketma - ket kelgan maxlarning min soni = " << sonimin << endl;
    cout << "Max = " << max << endl;

    return 0;
}
