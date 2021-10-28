// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Butun son berilgan.Berilgan son musbat bo'lsa, birga oshirilsin,
// Agar manfiy bol'sa 2 ga kamaytiring, agar 0 ga teng bo'lsa 10 ni o'zlashtirsin.Hosil bo'lgan sonni ekranga chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{ int a;

   cout << "a = "; cin >> a;

   if(a > 0) a++;
   if(a == 0) a = 10;
   if(a < 0)  a-=2;

   cout << "a = " << a << endl;

    return 0;
}
