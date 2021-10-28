// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Uchta butun son berilgan.Shulardan nechtasi musbatligini aniqlovchi programma tuzing.
#include <iostream>

using namespace std;

int main()
{
   int a, b, c, n = 0;
   cout << "a = "; cin >> a;
   cout << "b = "; cin >> b;
   cout << "c = "; cin >> c;

   if(a > 0) n++;
   if(b > 0) n++;
   if(c > 0) n++;

   if(n == 0) cout << "Musbat son kiritilmadi" << endl;
   else cout << n << " ta musbat son kiritildi" << endl;

    return 0;
}
