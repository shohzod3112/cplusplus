// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: A va B butun sonlari berilgan.Agar o'zaro teng bo'lmasa, A va B o'zgaruvchilari
// ularning yig'indisini o'zlashtirsin.Agar teng bo'lsa 0 ni o'zlashtirsin.
// A va B nini qiymati ekranga chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a != b)
{
    if(a > b)  b = a;
          else a = b;
}
    else a = b = 0;

   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   return 0;
}
