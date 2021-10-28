#include <bits/stdc++.h>

using namespace std;

bool camparator(pair <int, int> a, pair <int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;

}
pair <int, int> p[0];

int main ()
{
    int n;
    cout << "n = "; cin >> n;
    for (int i = 0; i < n; i ++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n, camparator);

    cout << endl;

    for (int i = 0; i < n; i ++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}
