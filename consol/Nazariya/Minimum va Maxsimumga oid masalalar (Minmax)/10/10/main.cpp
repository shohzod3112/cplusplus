// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va N ta butun sondan iborat to'plam berilgan.Birinchi
// uchragan ekstremal element tartib raqamini aniqlovchi programma tuzilsin.
// Ekstremal element deb eng katta yoki eng kichik elementga aytiladi.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, maxtr, min, mintr;

    cout << "n = "; cin >> n;

    cin >> a;

    max = min = a;

    maxtr = mintr = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    // Birinchi uchragan max topish uchun tenglik qo'yilmaydi

    if(max < a)
{
    max = a;
    maxtr = i;
}
   // Birinchi uchragan min topish uchun tenglik qo'yilmaydi

    if(min > a)
{
    min = a;
    mintr = i;
}
}
    cout << "Ekstremal element"<< endl;

    if(maxtr < mintr)
        cout << "max = " << max << " tartib raqami = " << maxtr << endl;
    else
        cout << "min = " << min << " tartib raqami = " << mintr << endl;

    return 0;
}
