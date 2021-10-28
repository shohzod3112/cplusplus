#include <bits/stdc++.h>

using namespace std;

struct talaba
{
    string fam, ism;
};

bool cmp (talaba a, talaba b)
{
    if(a.fam != b.fam)
        return a.fam < b.fam;
    return a.ism < b.ism;
}

int main()
{
    int n;

    cout << "n = "; cin >> n;

    talaba a[n];

    for (int  i = 0; i < n; i ++)
    {
        cin >> a[i].fam >> a[i].ism;
    }

    cout << endl;

    sort (a, a + n, cmp);

    for (int i = 0; i < n; i ++)
    {
        cout << a[i].fam << " " << a[i].ism << endl;
    }

    return 0;
}
