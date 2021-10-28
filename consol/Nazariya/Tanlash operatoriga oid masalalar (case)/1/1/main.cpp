// Muallif: Ro'ziyev Shohzod
// Sana: 17.02.2013
// Maqsad: 1-7 gacha bo'lgan butun sonlar berilgan.Kiritlgan songa mos ravishda hafta
// kunlarini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "Son kiriting:"; cin >> n;

  switch(n)
{
 case 1: cout << "Dushanba";   break;
 case 2: cout << "Seshanba";   break;
 case 3: cout << "Chorshanba"; break;
 case 4: cout << "Payshanba";  break;
 case 5: cout << "Juma";       break;
 case 6: cout << "Shanba";     break;
 case 7: cout << "Yakshanba";  break;
 default: cout << "Bunday hafta kuni yo'q";
}

    return 0;
}
