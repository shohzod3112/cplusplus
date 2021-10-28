// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : X ni berilganda.Y ni qiymati topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;

    cout << "x="; cin >> x;

    y = 4 * pow((fabs(x-3)),6) - 7 * pow((fabs(x-3)),3) + 2;

    cout << "y = " << y << endl;

    return 0;
}
