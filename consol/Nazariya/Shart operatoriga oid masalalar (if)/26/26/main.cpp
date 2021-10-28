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

    if(x <= 0) y = -x;
    else if(0 < x < 2) y = pow(x,2);
    else if(x >= 2) y = 4;

    cout << "f(x) = " << y;

    return 0;
}
