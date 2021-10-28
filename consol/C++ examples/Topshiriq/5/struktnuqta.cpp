#include <bits/stdc++.h>

using namespace std;

struct nuqta
{
    float kor1, kor2;
};

float point(nuqta, nuqta);

int main ()
{
    nuqta x, y;

    cout << "x nuqtaning koordinatalarini kiriting" << endl;
    cin >> x.kor1;
    cin >> x.kor2;

    cout << "y nuqtaning koordinatalarini kiriting" << endl;
    cin >> y.kor1;
    cin >> y.kor2;

    cout << point(x, y) << endl;

    return 0;
}

float point(nuqta x1, nuqta y1)
{
    return sqrt(pow((x1.kor2 - x1.kor1),2) + pow((y1.kor2 - y1.kor1),2));
}
