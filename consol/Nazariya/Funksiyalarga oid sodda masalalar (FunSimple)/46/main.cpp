// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: Butun qiymat qaytaruvchi EKUB(A, B) funksiyasini hosil qiling.
// Funksiya A va B sonlarining eng katta umumiy bo'luvchisini qaytarsin.
// A, B, C, D sonlari berilgan. A, B, C, D sonlari berilgan.
// (A, B), (A, C), (A, D) juftliklari uchun EKUB hisoblansin.

#include <iostream>

using namespace std;

int EKUB(int *, int *);

int main()
{
    int a, b, c, d;

    cout << "a = ";  cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    cout << EKUB(&a, &b) << endl;
    cout << EKUB(&a, &c) << endl;
    cout << EKUB(&a, &d) << endl;

    return 0;
}
    int EKUB(int *a, int *b)
{
    while(*a != *b)
    {
        if(*a > *b) *a -= *b;
        else *b -= *a;
    }

    return *a;
}
