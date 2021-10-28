#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *a;

    a = new int(5);

    cout << "*a = " << *a << endl;
    cout << "a = " << a << endl;

    for (int i = 0; i < 5; i ++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
