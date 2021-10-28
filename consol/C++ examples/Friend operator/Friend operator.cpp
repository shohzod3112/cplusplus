#include <bits/stdc++.h>

using namespace std;

struct nuqta
{
    float x;
    float y;
/// friend operatorlar "+", "-", "*", "/", "<", ">"
    nuqta friend operator + (nuqta &a, nuqta &b)
    {
        nuqta c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        return c;
    }

    nuqta friend operator * (nuqta &a, nuqta &b)
    {
        nuqta c;
        c.x = a.x * b.x;
        c.y = a.y * b.y;
        return c;
    }

    bool friend operator < (nuqta &a, nuqta &b)
    {
        if(a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    }

    bool friend operator > (nuqta &a, nuqta &b)
    {
        if(a.x != b.x) return a.x > b.x;
        return a.y > b.y;
    }
};

bool cmp(nuqta a, nuqta b)
{
    return a < b;
}

istream &operator >> (istream &in, nuqta &a)
{
    in >> a.x >> a.y;
    return in;
}

ostream &operator << (ostream &out, nuqta &a)
{
    out << '(' << a.x << ';' << a.y << ')';
    return out;
}

int main()
{
    nuqta a[10];

    for(int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 6, cmp);

    for(int i = 0; i < 6; i++)
    {
        cout << a[i] << endl;
    }
    /**c = a + b;
    d = a * b;
    cout << c << endl << d;
    */
    return 0;
}
