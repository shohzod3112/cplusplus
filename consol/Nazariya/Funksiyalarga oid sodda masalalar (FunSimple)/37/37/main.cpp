// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi Power(A,N) funksiyasini hosil qiling.
// Funksiya pow(A,B) darajasi qiymatini qaytarsin. Shu funksiya orqali
// berilgan A1, A2, A3 sonlarining B darajasi topilsin. A, A1, A2, A3, B
// haqiqiy sonlar.

#include <iostream>
#include <math.h>

using namespace std;

float Power(float *, float *);

int main()
{
    float a1, a2, a3, b;

    cout << "a1 = "; cin >> a1;
    cout << "a2 = "; cin >> a2;
    cout << "a3 = "; cin >> a3;
    cout << "b = ";  cin >> b;

    cout << Power(&a1, &b) << endl;
    cout << Power(&a2, &b) << endl;
    cout << Power(&a3, &b) << endl;

    return 0;
}
    float Power (float *a, float *b)
{
    return pow(*a,*b);
}
