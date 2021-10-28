// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: EKUB funksiyasidan foydalangan xolda butun qiymat qaytaruvchi EKUK(A, B) funksiyasini hosil qiling.
// Funksiya A va B sonlarining eng kichik umumiy karralisini qaytarsin.
// A, B, C, D sonlari berilgan.
// (A, B), (A, C), (A, D) juftliklari uchun EKUK hisoblansin.
// EKUK = A * B / EKUB(A, B);

#include <iostream>
using namespace std;

int EKUB(int, int);
int EKUK(int *, int *);

int main()
{
    int a, b, c, d, s, r;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    cout << "ekuk(a,b) = " << EKUK(&a, &b) << endl;
    EKUK(&a, &c);
    cout << "ekuk(a,c) = " << EKUK(&a, &c) << endl;
    EKUK(&a, &d);
    cout << "ekuk(a,d) = " << EKUK(&a, &d) << endl;

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
    int EKUK(int *s, int *r)
    {
        int k = EKUB(*s, *r);
        return (*s * *r) / k;;
    }
