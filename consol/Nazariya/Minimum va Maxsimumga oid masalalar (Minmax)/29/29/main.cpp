// Muallif: Ro'ziyev Shohzod
// Sana: 09.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// To'plamdagi ketma - ket keladigan eng kichik elementlarning maksimal
// sonini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, sonimax = 1, soni;

    cout << "n = "; cin >> n;

    cin >> min;

    soni = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(min > a)
{
    min = a;
    soni = 1;
}
   else
    if(min == a) soni++;
   else
    if(min < a) soni = 0;

    if(sonimax < soni)
       sonimax = soni;
}   cout << endl;

    cout << "Ketma - ket kelgan minlarning soni = " << sonimax << endl;
    cout << "Min = " << min << endl;

    return 0;
}
