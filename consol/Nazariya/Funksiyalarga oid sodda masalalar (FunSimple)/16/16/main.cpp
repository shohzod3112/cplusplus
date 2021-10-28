// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: Haqiqiy sonning ishorasini aniqlovchi ishora nomli funksiya
// hosil qiling. Funksiya argumenti noldan kichik bo'lsa -1, noldan
// katta bo'lsa 1,nolga teng bo'lsa 0 qiymat qaytarsin. Haqiqiy a va b
// sonlari uchun ishora(a) + ishora(b) ifodasi hisoblansin.

#include <iostream>

using namespace std;

int ishora (float);

int main()
{
    float a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << ishora(a) + ishora(b) << endl;

    return 0;
}
    int ishora (float k)
{
    int natija = 0;

    if(k > 0) natija = 1;
    if(k < 0) natija = -1;
    return natija;
}
