#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, ishora = 1;
    float x, i, s, s1, s2 = 1;

    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;

    s1 = x;
    s = x;

    for(i = 1; i <= n; i++)
{
    ishora *= -1;
    s1 *= x * x;
    s2 *= 2 * i * (2 * i + 1);

    s += ishora * s1 / s2;

    cout << s1 << " / " << s2 << endl;
}
    cout << s << endl;

    return 0;
}
