// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : Temperatura Farengeytda berilgan.Gradus celziyga o'tkazing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     float T;

    cout << "Temperaturani farangeytda kiriting = "; cin >> T;

    cout << "\nGradus celsiyda = " << (T-32) * 5 / 9 << endl;

    return 0;
}
