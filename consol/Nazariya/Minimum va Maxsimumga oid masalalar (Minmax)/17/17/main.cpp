// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// Oxirgi uchragan eng katta elementdan keyin turgan elementlar sonini
// chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, indeks;

    cout << "n = "; cin >> n;

    cin >> a;

    max = a;
    indeks = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(max <= a)
{
    max = a;
    indeks = i;
}}
    cout << "Max = " << max << endl;
    cout << max << " dan keyin " << n - indeks << " ta element bor" << endl;

    return 0;
}
