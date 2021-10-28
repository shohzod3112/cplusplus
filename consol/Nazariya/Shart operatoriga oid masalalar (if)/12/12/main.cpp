// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta son berilgan. Shu sonlarni kichigini toping.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, kichigi;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if(a < b && a < c) kichigi = a;

    else if(b < a && b < c) kichigi = b;

    else kichigi = c;

   cout << "Kichigi = " << kichigi << endl;

   return 0;
}
