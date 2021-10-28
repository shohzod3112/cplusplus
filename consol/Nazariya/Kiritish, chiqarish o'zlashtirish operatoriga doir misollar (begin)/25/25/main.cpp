// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : X ni berilganda.Y ni qiymati topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y;

    cout << "x="; cin >> x;

    y = 3 * pow(x,6) - 6 * pow(x,2) - 7;

    cout << "y = " << y << endl;

    return 0;
}
