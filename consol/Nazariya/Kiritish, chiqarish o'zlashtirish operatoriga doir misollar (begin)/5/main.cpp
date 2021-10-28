// Muallifi : Ro'ziyev Shohzod
// Sana : 10.11.2012
// Maqsad : Kubning yon tomoni berilgan.V va To'la sirtini toping.

#include <iostream>

using namespace std;

int main()
{
    int a, V, S;

    cout << "Kub tomonini kiriting = "  cin >> a;

    V = a * a * a;

    S = 6 * a * a;

    cout << "Hajmi = " << V << endl;
    cout << "To'la sirti = " << S << endl;

    system("PAUSE");

    return EXIT_SUCCESS;
}
