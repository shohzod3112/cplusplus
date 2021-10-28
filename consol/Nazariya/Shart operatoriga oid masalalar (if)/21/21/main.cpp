// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Koordinata tekisigida butun son berilgan.Agar nuqta
// koordinata boshida yotsa, 0 chiqarilsin. Agar nuqta OX yoki OY
// o'qlarida joylashgan bo'lsa mos holda 1 va 2 chiqarilsin.
// Agar nuqta koordinata o'qida joylashmagan bo'lsa, 3 chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Nuqtaning koordinatalarini kiriting" << endl;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if(x == 0 && y == 0) cout << "\n" << 0 << endl;

    else    if (x == 0) cout << "\n" << 1 << endl;

    else    if(y == 0) cout << "\n" << 2 << endl;

    else    cout << "\n" << 3 << endl;

    return 0;
}
