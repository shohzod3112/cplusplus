// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: TimeToHMS funksiyasini hosil qiling. Funksiya berilgan T-sekendni H-soat, M-minut, S-sekundlarga ajratsin.
// Funksiya orqali berilgan T1, T2, T3 sekundlar soat, minut va sekundlarga aylantirsin.
// Masalan: T = 400
// Natija: 00:06:40

#include <iostream>
#include <iomanip> // formatlab chiqarish uchun


using namespace std;

void TimeToHMS(int, int *, int *, int *);

int main()
{
    int t, h, m, s;
    cout << "t = "; cin >> t;

    TimeToHMS(t, &h, &m, &s);

    cout << setfill('0') << setw(2) << h << ":";
    cout << setfill('0') << setw(2) << m << ":";
    cout << setfill('0') << setw(2) << s << endl;

    return 0;
}
    void TimeToHMS(int t, int *h, int *m, int *s)
    {
        *h = t / 3600;
        *m = (t - (*h * 3600)) / 60;
        *s = ((t - (*h * 3600)) - (*m * 60));
    }
