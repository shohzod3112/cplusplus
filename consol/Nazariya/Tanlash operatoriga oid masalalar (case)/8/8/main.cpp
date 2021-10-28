// Muallif: Ro'ziyev Shohzod
// Sana: 19.02.2013
// Maqsad: Sanani bildiruvchi ikkita butun son berilgan.D(kun) va M(oy).
// (Kabisa bo'lmagan yil sanasi kiritiladi.)Berilgan sanani ifodalovchi programma tuzing.
// Kabisa yilida 366 kun, Kabisa bo'lmagan yilda 365 kun bor bo'ladi.

#include <iostream>

using namespace std;

int main()
{
  int D, M;
  float a;

  cout << "Kunni kiriting: "; cin >> D;
  cout << "Oyni kiriting: ";  cin >> M;

  switch(M)
{
 case  1: cout << D << " - yanvar" << endl; break;
 case  2: cout << D << " - fevral" << endl; break;
 case  3: cout << D << " - mart" << endl; break;
 case  4: cout << D << " - aprel" << endl; break;
 case  5: cout << D << " - may" << endl; break;
 case  6: cout << D << " - iyun" << endl; break;
 case  7: cout << D << " - iyul" << endl; break;
 case  8: cout << D << " - avgust" << endl; break;
 case  9: cout << D << " - sentabr" << endl; break;
 case  10:cout << D << " - oktabr" << endl; break;
 case  11:cout << D << " - noyabr" << endl; break;
 case  12:cout << D << " - dekabr" << endl; break;

 default: cout << "Oyni yoki kunni xato kirittingiz" << endl;
}
    return 0;
}
