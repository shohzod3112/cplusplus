#include <iostream>
#define PI 3.1415
#define KOPAYTMA(x) (x + 5)
#define AYLANA_YUZI(r) (PI * KOPAYTMA (r) )

using namespace std;
int main ()
{
    int a = 3, b = 2, c;

    c = KOPAYTMA(a);
    cout << "c = " << c << endl;

    c = AYLANA_YUZI(a);
    cout << "c = " << c << endl;
}
