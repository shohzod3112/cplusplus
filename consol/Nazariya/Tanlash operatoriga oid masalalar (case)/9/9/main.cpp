// Muallif: Ro'ziyev Shohzod
// Sana: 19.02.2013
// Maqsad: Ikkita butun son berilgan.D(kun) va M(oy).(kabisa bo'lmagan yil sanasi kiritiladi).
// Berilgan sanadan keyingi sanani topuvchi programma.

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
 case  1: cout << D + 1 << " - yanvar" << endl; break;
 case  2: cout << D + 1<< " - fevral" << endl; break;
 case  3: cout << D + 1<< " - mart" << endl; break;
 case  4: cout << D + 1<< " - aprel" << endl; break;
 case  5: cout << D + 1<< " - may" << endl; break;
 case  6: cout << D + 1<< " - iyun" << endl; break;
 case  7: cout << D + 1<< " - iyul" << endl; break;
 case  8: cout << D + 1<< " - avgust" << endl; break;
 case  9: cout << D + 1<< " - sentabr" << endl; break;
 case  10:cout << D + 1<< " - oktabr" << endl; break;
 case  11:cout << D + 1<< " - noyabr" << endl; break;
 case  12:cout << D + 1<< " - dekabr" << endl; break;

 default: cout << "Oyni yoki kunni xato kirittingiz" << endl;
}
    return 0;
}
