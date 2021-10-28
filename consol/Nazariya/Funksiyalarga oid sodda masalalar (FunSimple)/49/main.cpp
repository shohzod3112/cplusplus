// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: EKUB funksiyasidan foydalangan xolda butun qiymat qaytaruvchi EKUB3(A, B, C) funksiyasini hosil qiling.
// Funksiya A, B va C sonlarining eng kichik umumiy bo'luvchisini qaytarsin.
// A, B, C, D sonlari berilgan.
// (A, B, C), (A, C, D), (A, B, D) sonlari uchun EKUB hisoblansin.

#include <iostream>

using namespace std;

int EKUB(int, int);
int EKUB3(int *, int *, int *);

int main()
{
    int a, b, c, d;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    cout << "ekub(a,b,c) = " << EKUB3(&a, &b, &c) << endl;
    cout << "ekub(a,c,d) = " << EKUB3(&a, &c, &d) << endl;
    cout << "ekub(a,b,d) = " << EKUB3(&a, &b, &d) << endl;

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
    int EKUB3(int *s, int *r, int *f)
    {
        int k = EKUB(*s,EKUB(*r, *f));
        return k;;
    }
