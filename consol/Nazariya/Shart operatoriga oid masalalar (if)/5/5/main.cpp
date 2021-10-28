// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// maqsad: Uchta butun son berilgan.Shulardan nechtasi musbat va  nechtasi manfiyligini aniqlovchi programma tuzing.
#include <iostream>

using namespace std;

int main()
{
   int a, b, c, n = 0, m = 0;
   cout << "a = "; cin >> a;
   cout << "b = "; cin >> b;
   cout << "c = "; cin >> c;

   if(a > 0) n++;
   if(b > 0) n++;
   if(c > 0) n++;

   if(a < 0) m--;
   if(b < 0) m--;
   if(c < 0) m--;

   if(n == 0) cout << "Musbat son kiritilmadi" << endl;
   else cout << n << " ta musbat son kiritildi" << endl;

   if(m == 0) cout << "Manfiy son kiritilmadi" << endl;
   else cout << m << " ta manfiy son kiritildi" << endl;

    return 0;
}
