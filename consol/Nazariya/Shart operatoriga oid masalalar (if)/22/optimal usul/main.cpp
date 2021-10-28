// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: OX va OY o'qlarida joylashmagan nuqta berilgan.
// Nuqta joylashgan koordinata choragi chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int x, y, chorak = 0;

    cout << "Nuqtaning koordinatalarini kiriting" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if(x > 0 && y > 0) chorak = 1;
    if(x < 0 && y > 0) chorak = 2;
    if(x < 0 && y < 0) chorak = 3;
    if(x > 0 && y < 0) chorak = 4;

    if(chorak == 0) cout << "Nuqta koordinatalar o'qida yotadi!!!\n";
    else cout << "\n" << chorak << " - chorakka tegishli\n";

    return 0;
}
