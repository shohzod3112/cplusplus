#include <bits/stdc++.h>

using namespace std;

struct nuqta
{
    float kor1, kor2;
};

float point(nuqta, nuqta);

istream &operator >> (istream &in, nuqta &a)
{
    in >> a.kor1 >> a.kor2;
    return in;
}

int main ()
{
    nuqta x, y;

    cout << "x nuqtaning koordinatalarini kiriting" << endl;
    cin >> x;

    cout << "y nuqtaning koordinatalarini kiriting" << endl;
    cin >> y;

    cout << point(x, y) << endl;

    return 0;
}

float point(nuqta x1, nuqta y1)
{
    return sqrt(pow((x1.kor2 - x1.kor1),2) + pow((y1.kor2 - y1.kor1),2));
}
