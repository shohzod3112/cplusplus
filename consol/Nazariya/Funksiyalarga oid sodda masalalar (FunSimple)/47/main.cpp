// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: EKUB funksiyasidan foydalangan xolda Frac1(a, b, p, q) funksiyasini hosil qiling.
// Funksiya (a / b) kasrini qisqarmaydigan (p / q) ko'rinishini qaytarsin.
// a, b, c, d sonlari berilgan.
// (a / b), (a / c), (a / d) kasrlarini qisqartiring.

#include <iostream>

using namespace std;

int EKUB(int, int);
void Frac1(int, int, int *, int *);

int main()
{
    int a, b, c, d, s, r;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    Frac1(a, b, &s, &r);
    cout << "(a / b) = " << s << " / " << r << endl;
    Frac1(a, c, &s, &r);
    cout << "(a / c) = " << s << " / " << r << endl;
    Frac1(a, d, &s, &r);
    cout << "(a / d) = " << s << " / " << r << endl;

    return 0;
}
    int EKUB(int a, int b)
{
    while(a != b)
    {
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}
    void Frac1(int a, int b, int *s, int *r)
    {
        int k = EKUB(a, b);
        *s = a / k;
        *r = b / k;
    }
