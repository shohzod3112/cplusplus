#include <bits/stdc++.h>

using namespace std;

struct talaba
{
    string ism, familya, ota;
    int yosh, ball;
};

bool cmp(talaba a, talaba b)
{
    if(a.ball != b.ball) return a.ball > b.ball;
    return a.familya < b.familya;
}

int main()
{
    int n;

    cin >> n;

    talaba a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].familya >> a[i].ism >> a[i].ota >> a[i].ball;
    }
    cout << endl;

    sort(a, a + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << a[i].familya << " " << a[i].ism << " " << a[i].ota << " " << a[i].ball <<endl;
    }

    return 0;
}
