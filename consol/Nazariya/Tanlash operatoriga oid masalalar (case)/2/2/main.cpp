// Muallif: Ro'ziyev Shohzod
// Sana: 17.02.2013
// Maqsad: K butun soni berilgan.Baxo natijalarini chiqaruvchi programma tuzing.
// 1-yomon, 2-qoniqarsiz, 3-qoniqarli, 4-yaxshi, 5-a'lo.k bu oraliqda bo'lmasa "xato" deb chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "Son kiriting:"; cin >> n;

  switch(n)
{
 case 1: cout << "yomon";      break;
 case 2: cout << "qoniqarsiz"; break;
 case 3: cout << "qoniqarli";  break;
 case 4: cout << "yaxshi";     break;
 case 5: cout << "a'lo";       break;

 default: cout << "xato";
}

    return 0;
}
