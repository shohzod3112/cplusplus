#include <bits/stdc++.h>

using namespace std;

int f[100];

int main()
{
    int n;
    cin >> n;

    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        cout << f[i] << " ";
    }
    return 0;
}
