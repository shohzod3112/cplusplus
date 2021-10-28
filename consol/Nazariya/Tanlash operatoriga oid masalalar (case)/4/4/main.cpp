// Muallif: Ro'ziyev Shohzod
// Sana: 17.02.2013
// Maqsad: Oy raqami berilgan.Shu oyda necha kun borligini chiqaruvchi programma tuzing.
// Masalan: 2-oy "qish".

#include <iostream>

using namespace std;

int main()
{
  int n;

    cout << "Oy kiriting :) "; cin >> n;

    switch(n)
{
  case  1:
  case  3:
  case  5:
  case  7:
  case  8:
  case 10:
  case 12: cout << "31 kun bor";  break;

  case  4:
  case  6:
  case  9:
  case 11: cout << "30 kun bor";  break;

  case  2: cout << "28 yoki 29 kun bor";  break;

    default: cout << "Bunday oy yo'q";
}
    return 0;
}
