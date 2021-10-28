#include <bits/stdc++.h>

using namespace std;

bool cmp(pair <string, int> a, pair <string, int> b)
{
    return a.second > b.second;
}
pair <string, int> p[100];

int n;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n, cmp);

    cout << "\n";

    for(int i = 0; i < n; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}
