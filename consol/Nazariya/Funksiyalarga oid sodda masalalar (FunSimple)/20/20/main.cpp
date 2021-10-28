// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: To'g'ri burchakli uchburchakning katetlari A va B berilganda,
// uning perimetrini hisoblovchi TriangleP nomli funksiya hosil qiling.

#include <iostream>
#include <math.h>

using namespace std;

float TriangleP (float *, float *);

int main()
{
    float a, b, Perimetr;

    cout << "To'g'ri burchakli uchburchakning katetlari A va B ni kiriting" << endl;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    Perimetr = TriangleP(&a, &b);

    cout << "Perimetr = " << Perimetr << endl;

    return 0;
}
    float TriangleP(float *a, float *b)
{
    float c;

    c = sqrtf(*a * *a + *b * *b);

    return *a + *b + c;
}
