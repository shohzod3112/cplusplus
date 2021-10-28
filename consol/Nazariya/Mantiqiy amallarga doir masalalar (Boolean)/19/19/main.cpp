//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Jumlani rostlikka tekshiring: "Berilgan uchta butun sonlarning hech bo'lmaganda bir jufti o'zaro qarama-qarshi".

#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    g = (a == -b || b == -c || a == -c );

    cout << g << endl;

    return 0;
}
