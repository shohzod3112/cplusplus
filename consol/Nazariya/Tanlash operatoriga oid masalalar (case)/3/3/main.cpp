// Muallif: Ro'ziyev Shohzod
// Sana: 17.02.2013
// Maqsad: Oy raqamini berilgan.Kiritilgan oy qaysi faslga tegishlini chiqaruvchi programma tuzing.
// Masalan: 2-oy "qish".

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "Oy kiriting:)"; cin >> n;

  switch(n)
{
 case  1:
 case  2:
 case 12: cout << "qish";     break;

 case  3:
 case  4:
 case  5: cout << "bahor";    break;
 case  6:
 case  7:
 case  8: cout << "yoz";      break;
 case  9:
 case 10:
 case 11: cout << "kuz";      break;

 default: cout << "Bunday oy yo'q";
}

    return 0;
}
