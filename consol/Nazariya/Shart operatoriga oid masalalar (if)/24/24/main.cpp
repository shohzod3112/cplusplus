// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: X haqiqiy soni berilgan.ifodani hisoblang.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    cout << "x = "; cin >> x;

    if(x > 0) y = 2 * sin(x);
    y = x - 6;

    cout << "f(x) = " << y;

    return 0;
}
