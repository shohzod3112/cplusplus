// Muallif: Ro'ziyev Shohzod
// Sana: 19.02.2013
// Maqsad: Og'irlik birliklari quyidagi tartibda berilgan.
// 1 - kilogramm, 2 - milligramm, 3 - gramm, 4 - tonna, 5 - sentner.
// Og'irlik birligini bildiruvchi son berilgan va shu birlikdagi kesma uzunligi berilgan(haqiqiy son).Kesmaning uzunligini
// kilogrammlarda ifodalovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
  int n;
  float a;

  cout << "og'irlikni kiriting: "; cin >> a;
  cout << "\n1.kilogramm\n2.milligramm\n3.gramm.\n4.tonna\n5.sentner\n" << endl;
  cout << "Birlikni kiriting\nn= "; cin >> n;

  switch(n)
{
 case  1: cout << a << " kilogramm = " << a << " kilogramm" << endl; break;
 case  2: cout << a << " milligramm = " << a / 100000 << " kilogramm" << endl; break;
 case  3: cout << a << " gramm = " << a / 1000 << " kilogramm" << endl; break;
 case  4: cout << a << " tonna = " << a * 1000 << " kilogramm" << endl; break;
 case  5: cout << a << " sentner = " << a * 100 << " kilogramm" << endl; break;

 default: cout << "xato" << endl; break;
}
    return 0;
}
