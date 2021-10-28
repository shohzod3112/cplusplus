// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: Arifmetik amallarni bajaruvchi Calc(a, B, Op) funksiyani hosil
// qiling. A va B haqiqiy sonlar. Op O'zgaruvchisi orqali bajariladigan
// arifmetik amal aniqlanadi. 1-ayirish, 2-ko'paytirish, 3-bo'lish,
// boshqalari qo'shish. Shu funksiya orqali A va B sonlari N1, N2, N3, N4
// amallari bajarilsin. (N1-N4 butun sonlar).

#include <iostream>
#include <math.h>

using namespace std;

float Calc(float *, float *, int *);

int main()
{
    float a, b;
    int N1, N2, N3, N4;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << endl;
    cout << "1-ayirish, 2-ko'paytirish, 3-bo'lish, boshqalari qo'shish." << endl;

    cout << "N1 = "; cin >> N1;
    cout << "N2 = "; cin >> N2;
    cout << "N3 = "; cin >> N3;
    cout << "N4 = "; cin >> N4;

    cout << Calc(&a, &b, &N1) << endl;
    cout << Calc(&a, &b, &N2) << endl;
    cout << Calc(&a, &b, &N3) << endl;
    cout << Calc(&a, &b, &N4) << endl;

    return 0;
}
    float Calc (float *a, float *b, int *Op)
{
    float c;

    switch(*Op)
{
    case 1:  c = *a - *b;   break;
    case 2:  c = *a * *b;   break;
    case 3:  c = *a / *b;   break;
    default: c = *a + *b;
}
    return c;
}
