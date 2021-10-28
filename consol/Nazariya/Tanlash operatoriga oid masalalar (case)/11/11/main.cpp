// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: Lokator faqat dunyoning bir tomoniga qaratilgan.("s"-shimol,"j"-janub,"q"-sharq,"g"-g'arb)
// va uchta raqamli komanda:0-o'ngga buril,1-chapga buril,2-burilish 180.
// C lokatrning boshlang'ich holati va k1, k2 - kamandalar berilgan.Berilgan komanda
// bajarilgandan keyingi lokart holatini topuvchi programma.

#include <iostream>

using namespace std;

int main()
{
  int  k1, k2;
  char c;

  cout << "------------------Yo'nalishlar-------------------";
  cout << "\n's'-shimol\n'j'-janub\n'q'-sharq\n'g'-g'arb\n";
  cout << "Yo'nalishni kiriting: "; cin >> c;

  cout << "-------------------Komandalar--------------------";
  cout << "\n0-harakatni davom ettir\n1-chapga buril\n2-o'ngga buril\n";

  cout << "birinchi komandani kiriting: ";  cin >> k1;
  cout << "ikkinchi komandani kiriting: ";  cin >> k2;

  switch(c)
{
 case  's': cout << "shimolga"; break;
 case  'j': cout << "janubga" ; break;
 case  'q': cout << "sharqga" ; break;
 case  'g': cout << "g'arbga" ; break;

 default: cout << "xato" << endl;
}
  switch(k1)
{
 case  0: cout << " harakatni davom ettir"; break;
 case  1: cout << " chapga buril"; break;
 case  2: cout << " o'ngga buril"; break;


 default: cout << "xato" << endl;
}

  switch(k2)
{
 case  0: cout << " harakatni davom ettir" << endl; break;
 case  1: cout << " chapga buril" << endl; break;
 case  2: cout << " o'ngga buril" << endl; break;


 default: cout << "xato" << endl;
}
    return 0;
}
