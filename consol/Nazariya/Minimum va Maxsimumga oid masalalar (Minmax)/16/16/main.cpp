// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.Birinchi
// uchragan eng kichik elementgacha bo'lgan elementlar sonini chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, indeks = 0;

    cout << "n = "; cin >> n;

    cin >> a;

    min = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(min > a)
{
    min = a;
    indeks = i - 1;
}}
    cout << "Min = " << min << endl;
    cout << min << " dan oldin " << indeks << " ta element bor" << endl;

    return 0;
}
