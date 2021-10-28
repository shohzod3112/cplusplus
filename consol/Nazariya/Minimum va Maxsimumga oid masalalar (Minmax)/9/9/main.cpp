// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Birinchi va
// oxirgi uchragan eng katta element tartib raqamini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, maxx, maxtr, indeksmax;

    cout << "n = "; cin >> n;

    // Birinchi sonni max va maxx ga o'zlashtiramiz.
    // Birinchi sonni kiritamiz.

    cin >> a;

    max = maxx = a;
    maxtr = indeksmax = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    // Birinchi uchragan max topish uchun tenglik qo'yilmaydi

    if(max < a)
{
    max = a;
    indeksmax = i;
}
   // Oxirgi uchragan max topish uchun tenglik qo'yiladi

    if(maxx <= a)
{
    maxx = a;
    maxtr = i;
}
}
    cout << "Eng birinchi min element indeksi = " << indeksmax << endl;
    cout << "Eng oxirgi max element indeksi = " << maxtr << endl;

    return 0;
}
