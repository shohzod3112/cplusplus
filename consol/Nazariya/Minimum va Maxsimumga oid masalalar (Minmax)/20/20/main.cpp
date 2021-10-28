// Muallif: Ro'ziyev Shohzod
// Sana: 05.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// To'plamdagi ekstremal elementlar sonini aniqlovchi programma tuzilsin.
// Ekstremal element deb eng katta yoki eng kichik elementga aytiladi.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, min, maxtr = 1, mintr = 1, soni;

    cout << "n = "; cin >> n;

    cin >> a;

    max = min = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(max == a) maxtr++;
    if(min == a) mintr++;

    if(max < a)
{
    max = a;
    maxtr = 1;
}
    if(min > a)
{
    min = a;
    mintr = 1;
}
}   soni = maxtr + mintr;

    cout << "Soni = " << soni << endl;

    return 0;
}
