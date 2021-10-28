// Muallif: Ro'ziyev Shohzod
// Sana: 19.01.2015
// Maqsad: Haqiqiy qiymat qaytaruvchi DegToRad(D) funksiyasini hosil qiling.
// (360 > D > 0). Funksiya D gradusning radian qiymatini qaytarsin.
// Shu funksiya orqali 3 ta berilgan burchakning radianga qiymati aniqlansin.

#include <iostream>

using namespace std;

float DegToRad(float );

int main()
{
    float a, b, c;

    cout << "1 - burchak = "; cin >> a;
    cout << "2 - burchak = "; cin >> b;
    cout << "3 - burchak = "; cin >> c;

    cout << a << " gradus = " << DegToRad(a) << " radianga teng" << endl;
    cout << b << " gradus = " << DegToRad(b) << " radianga teng" << endl;
    cout << c << " gradus = " << DegToRad(c) << " radianga teng" << endl;

    return 0;
}
    float DegToRad (float a)
{
    const float pi = 3.1415;

    a *= pi / 180;

    return a;
}
