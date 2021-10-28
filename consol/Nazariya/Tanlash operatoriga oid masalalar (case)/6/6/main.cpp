// Muallif: Ro'ziyev Shohzod
// Sana: 18.02.2013
// Maqsad: Uzunlik birliklari quyidagi tartibda berilgan.
// 1 - detsimetr, 2 - kilometr, 3 - metr, 4 - millimetr, 5 - santimetr.
// Uzunlik birligini bildiruvchi son berilgan(1 - 5 oraliqda) va shu
// birlikdagi kesma uzunligi berilgan(haqiqiy son).Kesmaning uzunligini
// metrlarda ifodalovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
  int n;
  float a;

  cout << "Kesma uzunligini kiriting: "; cin >> a;
  cout << "\n1.detsimetr\n2.kilometr\n3.metr.\n4.millimetr\n5.santimetr\n" << endl;
  cout << "Birlikni kiriting\nn= "; cin >> n;

  switch(n)
{
 case  1: cout << a << " detsimetr = " << a /10 << " metr" << endl; break;
 case  2: cout << a << " kilometr = " << a * 1000 << " metr" << endl; break;
 case  3: cout << a << " metr = " << a << " metr" << endl; break;
 case  4: cout << a << " millimetr = " << a / 1000 << " metr" << endl; break;
 case  5: cout << a << " santimetr = " << a / 100 << " metr" << endl; break;

 default: cout << a << " santimetr = " << a / 100 << " metr" << endl; break;
}
    return 0;
}
