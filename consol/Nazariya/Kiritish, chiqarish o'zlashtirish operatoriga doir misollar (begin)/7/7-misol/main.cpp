// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Doiraning Radiusi R berilgan.Uning uzunligi L va yuzasi S aniqlansin.

#include <iostream>

using namespace std;

int main()
{
    int const Pi=3.14;

    int R, S, L;

    cout << "R="; cin >> R;

    L=2*Pi*R;
    S=Pi*R*R;

    cout << "L=" << L << endl;
    cout << "S=" << S << endl;
    return 0;
}
