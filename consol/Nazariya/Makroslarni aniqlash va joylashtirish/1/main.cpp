#include <iostream>

#define KOPAYTMA(a, b) (a) * (b)

using namespace std;
int main ()
{
    int a = 3, b = 2, c;

    c = KOPAYTMA(a, b);
    cout << "c = " << c << endl;

    c = KOPAYTMA(a + b, b);
    cout << "c = " << c << endl;
}
