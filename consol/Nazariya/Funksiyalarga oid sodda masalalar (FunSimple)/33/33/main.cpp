// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi RadToDeg(R) funksiyasini hosil qiling.
// Funksiya R Radianning gradus qiymatini qaytarsin. Shu funksiya orqali
// 3 ta berilgan burchakning gradusdagi qiymati aniqlansin.

#include <iostream>

using namespace std;

float RadToDeg (float );

int main()
{
    float a, b, c;

    cout << "1 - radian = "; cin >> a;
    cout << "2 - radian = "; cin >> b;
    cout << "3 - radian = "; cin >> c;

    cout << a << " radian = " << RadToDeg(a) << " gradusga teng" << endl;
    cout << b << " radian = " << RadToDeg(b) << " gradusga teng" << endl;
    cout << c << " radian = " << RadToDeg(c) << " gradusga teng" << endl;

    return 0;
}
    float RadToDeg(float a)
{
    const float pi = 3.1415;

    a *= 180 / pi;

    return a;
}
