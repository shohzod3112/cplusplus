#include <bits/stdc++.h>

using namespace std;

struct odam
{
    string ism;
    int yosh;

    odam(string name, int yosh)
    {
        ism = name;
        this->yosh = yosh;
    }
};

string IntToStr(int a)
{
    string s;

    while(a)
    {
        int n = a % 10;
        s = char(n + '0') + s;
        a /= 10;
    }
    return s;
}

ostream &operator << (ostream &b, odam *c)
{
    b << c->ism << " " << c->yosh;
    return b;
}

int main()
{
    odam *a[100];

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        a[i] = new odam("name" + IntToStr(i+1), i+5);
    }

    for(int i = 0; i < n; i++)
    {
        cout<< a[i] << endl;
    }
    return 0;
}
