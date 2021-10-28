// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: 1 - 999 oraliqda butun son berilgan. Berilgan sonni "Ikki xonali juft son",
// "Uch xonali juft son", "Ikki xonali toq son","Uch xonali toq son" chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Sonni kiriting = "; cin >> x;

    if(1 <= x && x <= 9)   cout << "bir xonali";

    else if(10 <= x && x <= 99) cout << "ikki xonali";

    else if(100 <= x && x <= 999) cout << "uch xonali";

    if(x % 2 == 0) cout << " juft son" << endl;

    else cout << " toq son" << endl;

    return 0;
}
