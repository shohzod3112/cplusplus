// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: Robort faqat to'rtta tomonga ko'cha oladi("s"-shimol,"j"-janub,"q"-sharq,"g"-g'arb)
// va uchta raqamli komanda:0-harakatni davom ettir,1-chapga buril,2-o'ngga buril.
// y-robort yo'nalishi k komanda berilgan.Berilgan komanda bajarilgandan keyin
// robort holatini topuvchi programma.

#include <iostream>

using namespace std;

int main()
{
  int  k;
  char y;

  cout << "------------------Yo'nalishlar-------------------";
  cout << "\n's'-shimol\n'j'-janub\n'q'-sharq\n'g'-g'arb\n";
  cout << "Yo'nalishni kiriting: "; cin >> y;
  cout << "-------------------Komandalar--------------------";
  cout << "\n0-harakatni davom ettir\n1-chapga buril\n2-o'ngga buril\n";

  cout << "komandani kiriting: ";  cin >> k;

  switch(y)
{
 case  's': cout << "shimolga"; break;
 case  'j': cout << "janubga" ; break;
 case  'q': cout << "sharqga" ; break;
 case  'g': cout << "g'arbga" ; break;

 default: cout << "xato" << endl;
}
  switch(k)
{
 case  0: cout << " - harakatni davom ettir" << endl; break;
 case  1: cout << " - chapga buril" << endl; break;
 case  2: cout << " - o'ngga buril" << endl; break;


 default: cout << "xato" << endl;
}

    return 0;
}
