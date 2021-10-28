// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : Temperatura celziyda berilgan.Gradus Farengeytga o'tkazing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     float T;

    cout << "Temperaturani celziyda kiriting = "; cin >> T;

    cout << "\nGradus Farengeytda = " << (9 * T +160) / 5 << endl;

    return 0;
}
