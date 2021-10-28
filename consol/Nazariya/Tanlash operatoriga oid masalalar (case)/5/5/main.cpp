// Muallif: Ro'ziyev Shohzod
// Sana: 18.02.2013
// Maqsad: A vs B haqiqiy va amal butun soni berilgan.A va B sonlari ustida arifmetik amallar bajaruvchi programma tuzing.
// 1-qo'shish, 2-
#include <iostream>

using namespace std;

int main()
{
  int A, B, n;

  cout << "A = "; cin >> A;
  cout << "B = "; cin >> B;
  cout << "n = "; cin >> n;

  switch(n)
{
 case  1: cout << "A + B = " << A + B << endl;     break;
 case  2: cout << "A - B = " << A - B << endl;     break;
 case  3: cout << "A / B = " << A / B << endl;     break;
 case  4: cout << "A * B = " << A * B << endl;     break;

 default: cout << "Bunday amal yo'q";
}
    return 0;
}
