// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta son berilgan. Shu sonlarni o'rtasidagi sonni toping.
#include <iostream>

using namespace std;

int main()
{
    int a, b, max, min, orta;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    max = (a > b) ? a : b;
    min = (a < b) ? a : b;

    orta = (max + min) / 2;

    cout << "O'rtasidagi son = " << orta << endl;

   return 0;
}
