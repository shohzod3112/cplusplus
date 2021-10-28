// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Butun son berilgan.Berilgan son musbat bo'lsa, birga oshirilsin,
// aks holda 2 ga kamaytiring.Hosil bo'lgan sonni ekranga chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{ int a;

   cout << "a = "; cin >> a;

   if(a > 0) a++;
   else  a-=2;

   cout << "a = " << a << endl;

    return 0;
}
