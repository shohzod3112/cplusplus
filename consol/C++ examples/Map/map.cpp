#include <bits/stdc++.h>

using namespace std;

map <string, int> a;

map <__int64, int> q;

int n, ball;

string s[10];

int arr[100000000];

int main()
{
    q[-1000000000000000] = 5;

    cout << q[-1000000000000000];

    cin >> n;

    /**
    a[10000000] = 5;
    cout << a[10000000];
    */

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> ball;
        a[s[i]] = ball;
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << s[i] << " " << a[s[i]] << endl;
    }

    cout << endl;
    cout << a["abbos"];

    return 0;
}
