// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: B, C sonlari va 10 ta butun sondan tashkil topgan musbat sonlar to'plami
// berilgan(0 < B < C).Shu to'plamda (B,C) oraliqdagi eng katta elementni tartib
// raqamini chiqaruvchi programma tuzilsin. Agar berilgan to'plamda (B,C) oraliqda
// son topilmasa, ikkita 0 chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, B, C, a, max = 0, indeks = 0;

    cout << "n = "; cin >> n;
    do
{
    cout << "0 < B < C oraliqda son kiriting" << endl;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;
}   while(!(0 < B && B < C));

    for(int i = 1; i <= n; i++)
{
    cin >> a;

    if(a > B && max == 0 && a < C)
{
    max = a;
    indeks = i;
}
    // Sonlar to'plamida B dan katta C dan kichik eng katta sonni topish

    if(C > a && max < a && a > B)
{
    max = a;
    indeks = i;
}}
    cout << "Max = " << max << endl;
    cout << "Indeksi = " << indeks << endl;

    return 0;
}
