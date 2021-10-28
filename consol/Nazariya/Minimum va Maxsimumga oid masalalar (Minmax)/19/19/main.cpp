// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan.
// To'plamdagi eng kichik elementlar sonini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, soni = 1;

    cout << "n = "; cin >> n;

    cin >> a;

    min = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;
    // Birinchi uchragan min ni olish uchun shartda tenglik qo'yilmaydi

    if(min == a)   soni++;

    if(min > a)
{
    min = a;
    soni = 1;
}
}
    cout << "Min = " << min << endl;
    cout << "Min lar soni = " << soni << endl;

    return 0;
}
