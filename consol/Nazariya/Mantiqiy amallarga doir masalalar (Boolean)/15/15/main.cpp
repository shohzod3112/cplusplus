//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Uchta butun A, B va C butun sonlari berilgan.Jumlani rostlikka tekshiring: A, B va C sonlarning faqat ikkitasi musbat".

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    g = (a > 0 && b > 0 && c <= 0)
     || (a > 0 && b <= 0 && c > 0)
     || (a <= 0 && b > 0 && c > 0);

    cout << g << endl;

    return 0;
}
