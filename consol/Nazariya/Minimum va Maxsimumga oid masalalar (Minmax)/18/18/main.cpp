// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// Birinchi va oxirgi uchragan eng katta element orasida turgan elementlar
// sonini aniqlovchi programma tuzilsin.Agar to'plamda faqat bitta eng
// katta element bo'lsa nol chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, soni, birinchi = 1, oxirgi = 1;

    cout << "n = "; cin >> n;

    cin >> a;

    max = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;
    //Birinchi uchragan max ni olish uchun shartda tenglik qo'yilmaydi

    if(max < a)
{
    max = a;
    // birinchi max gacha nechta element kiritilganligini eslab qolamiz
    birinchi = i;
}
    // oxirgi uchragan max ni olish uchun tenglik qo'yiladi

    if(max <= a)
{
    max = a;
    //max gacha nechta element kiritilganligini eslab qolamiz
    oxirgi = i;
}
}   cout << endl;

    soni = oxirgi - birinchi;

    if(soni != 0) soni--;

    cout << "max = " << max << endl;
    cout << "Birinchi va oxirgi maxlar orasidagi sonlar soni = " << soni << endl;

    return 0;
}
