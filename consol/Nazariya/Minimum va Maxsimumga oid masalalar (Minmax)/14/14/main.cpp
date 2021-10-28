// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: B soni va 10 ta butun sondan tashkil topgan musbat sonlar to'plami
// berilgan.Shu to'plamda B sonidan katta bo'lgan, eng kichik elementni tartib
// raqamini chiqaruvchi programma tuzilsin. Agar berilgan to'plamda B sonidan
// katta son topilmasa, ikkita 0 chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, B, a, min = 0, indeks = 0;

    cout << "n = "; cin >> n;
    cout << "B = "; cin >> B;

    for(int i = 1; i <= n; i++)
{
    cin >> a;

    // B dan katta birinchi sonni topish

    if(a > B && min == 0)
{
    min = a;
    indeks = i;
}
    // Sonlar to'plamida B dan katta eng kichik sonni topish

    if(min > a && a > B)
{
    min = a;
    indeks = i;
}
}
    cout << "Min = " << min << endl;
    cout << "Indeksi = " << indeks << endl;

    return 0;
}
