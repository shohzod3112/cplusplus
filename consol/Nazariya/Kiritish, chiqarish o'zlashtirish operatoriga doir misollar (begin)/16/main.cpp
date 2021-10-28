// Muallif : Ro'ziyev Shohzod
// Sana : 10.11.2012
// Maqsad : Sonlar o'qida ikkita nuqta orasidagi masofa aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, a;

    cout << "Birinchi nuqtani kiriting = " ; cin >> x1;
    cout << "Ikkinchi nuqtani kiriting = " ; cin >> x2;

    a = fabs(x2 - x1);

    cout << a << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
