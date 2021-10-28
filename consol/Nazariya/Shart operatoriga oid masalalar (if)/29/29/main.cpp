// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Butun son berilgan. Berilgan sonni "musbat toq son", "manfiy toq son",
// "musbat juft son", "manfiy juft son", "son nolga teng" va hokazolarni ekrahgan chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Sonni kiriting = "; cin >> x;

    if(x % 2 == 0 && x > 0) cout << "musbat juft son" << endl;
    if(x % 2 == 0 && x < 0) cout << "manfiy juft son" << endl;
    if(x % 2 != 0 && x > 0) cout << "musbat toq son" << endl;
    if(x % 2 != 0 && x < 0) cout << "manfiy toq son" << endl;
    if(x == 0) cout << "Son nolga teng" << endl;

    return 0;
}
