// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Birinchi
// uchragan eng kichik va oxirgi uchragan eng katta element tartib raqamini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, max, indeksmax, indeksmin;

    cout << "n = "; cin >> n;

    // Birinchi sonni max va min ga o'zlashtiramiz.
    // Birinchi sonni kiritamiz.

    cin >> a;

    max = min = a;
    indeksmax = indeksmin = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    // oxirgi uchragan max ni olish uchun shartda tenglik qo'yiladi

    if(max <= a)
{
    max = a;
    indeksmax = i;
}
    // Bizga faqat birinchi uchragan min kerak , shuning uchun tenglik qo'yilmaydi

    if(min > a)
{
    min = a;
    indeksmin = i;
}}
    cout << "Eng oxirgi max element = " << max << endl;
    cout << "Eng oxirgi max element indeksi = " << indeksmax << endl;

    cout << "Min = " << min << endl;
    cout << "Min element indeksi = " << indeksmin << endl;

    return 0;
}
