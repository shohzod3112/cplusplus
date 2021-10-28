// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Sonlar o'qida uchta A, B, C nuqta berilgan.
// A nuqtaga eng yaqin nuqta va ular orasidagi masofa aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, n, m;

    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c;

    n = abs(a - c);
    m = abs(a - b);

    if(n < m) cout << "A nuqtaga eng yaqin nuqta C nuqta " << "\n" << "Orasidagi masofa " << n << endl;
    else cout << "A nuqtaga eng yaqin nuqta B nuqta " << "\n" << "Orasidagi masofa " << m << endl;

    return 0;
}
