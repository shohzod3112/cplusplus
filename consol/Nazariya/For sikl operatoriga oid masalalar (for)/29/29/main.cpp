// Muallif: Ro'ziyev Shohzod
// Sana: 07.03.2013
// Maqsad: n butun soni va sonlar o'qida ikkita A va B nuqta berilgan.(A va B haqqiqiy son)
// [A,B] kesmani teng n ta bo'lakka bo'ling.[A,B] kesmada ajratilgan barcha nuqtalarni chiqaring.

#include <iostream>

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
    cout << "B = " << B << endl;
    B += qadam;
}}
    else
{
    qadam = (B - A) / n;
    for(float i = 1; i <= n + 1; i++)
{
    cout << "A = " << A << endl;
    A += qadam;
}}
    return 0;
}
