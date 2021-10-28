// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: X haqiqiy soni berilgan.ifodani hisoblang.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x;
    cout << "x = "; cin >> x;

    if(x < 0) cout << 0 << endl;
    // (int) x - oshkor holda butun songa aylantiramiz
    else if(((int)x) % 2 == 0) cout << 1 << endl;
    else cout << -1 << endl;

    return 0;
}
