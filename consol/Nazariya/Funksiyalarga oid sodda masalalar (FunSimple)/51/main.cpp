// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: IncTime(H, M, S, T) funksiyasini hosil qiling. Funksiya berilgan H-soat, M-minut, S-sekundni T-sekendga  oshirsin.
// Funksiya orqali berilgan soat, minut va sekundni T sekundga oshiruvchi progreamma tuzilsin.

#include <iostream>
#include <iomanip> // formatlab chiqarish uchun

using namespace std;

void IncTime(int *, int *, int *, int );

int main()
{
    int t, h, m, s;
    cout << "t = "; cin >> t;
    cout << "h = "; cin >> h;
    cout << "m = "; cin >> m;
    cout << "s = "; cin >> s;

    IncTime(&h, &m, &s, t);

    cout << setfill('0') << setw(2) << h << ":";
    cout << setfill('0') << setw(2) << m << ":";
    cout << setfill('0') << setw(2) << s << endl;

    return 0;
}
    void IncTime(int *h, int *m, int *s, int t)
    {
         t = *h * 3600 + *m * 60 + *s + t;
        *h = t / 3600;
        *m = (t - (*h * 3600)) / 60;
        *s = ((t - (*h * 3600)) - (*m * 60));
    }
