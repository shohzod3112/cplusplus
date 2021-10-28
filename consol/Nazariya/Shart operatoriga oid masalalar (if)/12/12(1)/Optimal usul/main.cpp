// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta son berilgan. Shu sonlarni kichigini toping.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max, min;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    max = (a > b) ? b : a;
    min = (c < max) ? c : max;

    cout << "Kichigi = " << min << endl;

   return 0;
}
