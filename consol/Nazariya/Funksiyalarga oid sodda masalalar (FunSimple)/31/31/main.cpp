// Muallif: Ro'ziyev Shohzod
// Sana: 23.12.2014
// Maqsad: IsPalindrom(N) funksiyasini hosil qiling. (N > 0).
// Agar N soni Palindrom bo'lsa - true,aks holda false qiymat qaytarilsin.
// Shu funksiya orqali 5 ta sondan nechtasi palindrom ekanini aniqlovchi
// programma tuzilsin. IsPalindrom funksiyasida DigitCount va DigitN
// funksiyalaridan foydalanish mumkin.

#include <iostream>

using namespace std;

int IsPalindrom(int );
int DigitN (int , int );
int DigitCount (int );

int main()
{
    int a, b, c, d, e, n;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    cout << IsPalindrom(a) << endl;
    cout << IsPalindrom(b) << endl;
    cout << IsPalindrom(c) << endl;
    cout << IsPalindrom(d) << endl;
    cout << IsPalindrom(e) << endl;

    return 0;
}
    int IsPalindrom(int a)
{
    int soni = DigitCount(a), d = DigitN(a, soni);

    if(a / d == a % 10)
        return 1;
    else
        return 0;
}
    int DigitN (int k, int n)
{
    int i = 1, a = 1;
    while(i <= n)
{
    k /= 10;
    if(k > 0)
        a *= 10;
    i++;
}
    return a;
}
    int DigitCount (int d)
{
    int a = d, soni = 0;

    while(a > 0)
{
    soni++;
    a /= 10;
}
    return soni;
}
