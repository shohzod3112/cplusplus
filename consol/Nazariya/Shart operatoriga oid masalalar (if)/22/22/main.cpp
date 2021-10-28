// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: OX va OY o'qlarida joylashmagan nuqta berilgan.
// Nuqta joylashgan koordinata choragi chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Nuqtaning koordinatalarini kiriting" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if(x != 0 && y != 0)
{
    if(x > 0 && y > 0) cout << "\n1 - chorakda joylashgan" << endl;
    if(x < 0 && y > 0) cout << "\n2 - chorakda joylashgan" << endl;
    if(x < 0 && y < 0) cout << "\n3 - chorakda joylashgan" << endl;
    if(x > 0 && y < 0) cout << "\n4 - chorakda joylashgan" << endl;
}
    return 0;
}
