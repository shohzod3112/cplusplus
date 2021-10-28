// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Birinchi
// uchragan eng katta toq element tartib raqamini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, indeks = 0;

    cout << "n = "; cin >> n;

    // Agar toq son bo'lmasa 0 chiqariladi.

    max = 0;

    for(int i = 1; i <= n; i++)
{
    cin >> a;

    // Birinchi uchragan toq sonni aniqlash

    if(a % 2 == 1 && max == 0)
{
    max = a;
    indeks = i;
}
    // Toq sonlarni kattasini aniqlash

    if(max < a && a % 2 == 1)
{
    max = a;
    indeks = i;
}
}
    cout << "Birinchi uchragan toq son" << endl;
    cout << "Max = " << max << endl;
    cout << "Indeksi = " << indeks << endl;

    return 0;
}
