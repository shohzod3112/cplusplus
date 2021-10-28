// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Birinchi va
// oxirgi uchragan eng kichik element tartib raqamini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, minn, mintr, indeksmin;

    cout << "n = "; cin >> n;

    // Birinchi sonni min ga o'zlashtiramiz.
    // Birinchi sonni kiritamiz.

    cin >> a;

    min = minn = a;
    mintr = indeksmin = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    // Birinchi uchragan min topish uchun tenglik qo'yilmaydi

    if(min > a)
{
    min = a;
    indeksmin = i;
}
   // Oxirgi uchragan min topish uchun tenglik qo'yiladi

    if(minn >= a)
{
    minn = a;
    mintr = i;
}
}
    cout << "Eng birinchi min element indeksi = " << indeksmin << endl;
    cout << "Eng oxirgi min element indeksi = " << mintr << endl;

    return 0;
}
