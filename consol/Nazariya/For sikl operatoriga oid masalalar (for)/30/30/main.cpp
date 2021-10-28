// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad: n butun soni va sonlar o'qida ikkita A va B nuqta berilgan.(A va B haqqiqiy son)
// [A,B] kesmani teng n ta bo'lakka bo'ling.[A,B] kesmada ajratilgan barcha nuqtalar uchun
// F(x) =  1 - sin(X) funksiya qiymatini hisoblang.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    float A, B, qadam;

    cout << "n = "; cin >> n;
    cout << "A < B oraliqda son kiriting!!!" << endl;
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;

    // takrorlanishlar soni = [(b - a) / qadam] + 1;
    // qadamning o'zi qadam = (b - a) / n; bo'lgani uchun
    // takrorlanishlar soni n + 1 bo'ladi;

    if(A > B)
{
    qadam = (A - B) / n;
    for(float i = 1; i <= n + 1; i++)
{
    cout << "1 - sin(" << i << ") = " << 1 - sin(B) << endl;
    B += qadam;
}}
    else
{
    qadam = (B - A) / n;
    for(float i = 1; i <= n + 1; i++)
{
    cout << "1 - sin(" << i << ") = " << 1 - sin(A) << endl;
    A += qadam;
}}
    return 0;
}
