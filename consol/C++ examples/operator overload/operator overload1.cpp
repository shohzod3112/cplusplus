#include <bits/stdc++.h>

using namespace std;

struct talaba
{
    string ism, familya, ota;
    int yosh, ball;

/// Talaba strukturasiga konstruktor yozilyapti
/// Konstruktor bir marta(struktura yaralishida) ishga tushadi ya'ni bir marta murojaat bo'ladi.
/// Vazifasi musor qiymatdan qutilish uchun default qiymat berish
/// This ko'rsatgichi nimada ya'ni struktura, class ishlatiladigan joyiga qarab otasini aniqlab beradi.
/// Struktura classda e'lon qilingan o'zgaruvchi ko'rsatchich
/// bo'lsa, "->" belgisi ishlatiladi.
/// Oddiy o'zgaruvchi uchun "." ishlatiladi.
 /**   talaba (string ota, int ball)
    {
        this->ism = "Shohzod";
        this->familya = "Ro'ziyev";
        this->ota = ota;
        this->ball = ball;
    } */
};

bool cmp(talaba a, talaba b)
{
    if(a.ball != b.ball) return a.ball > b.ball;
    return a.familya < b.familya;
}

istream &operator >> (istream &in, talaba &a)
{
    in >> a.familya >> a.ism >> a.ota >> a.ball >> a.yosh;
    return in;
}
/**
istream &operator >> (istream &in, talaba &a)
{
    in >> a.ota >> a.ball;
    return in;
}

istream &operator >> (istream &in, talaba *a)
{
    in >> a->familya >> a->ism >> a->ota >> a->ball;
    return in;
}
*/

ostream &operator << (ostream &cout, talaba &a)
{
    cout << a.familya << " " <<  a.ism  << " " << a.ota << " " << a.ball << " " << a.yosh << endl;
    return cout;
}
/**
ostream &operator << (ostream &cout, talaba *a)
{
    cout << a->familya << " " <<  a->ism  << " " << a->ota << " " << a->ball << endl;
    return cout;
}

ostream &operator << (ostream &cout, talaba &a)
{
    cout << a.familya << " " <<  a.ism  << " " << a.ota << " " << a.ball << endl;
    return cout;
}
*/
int main()
{
    int n;
 /**   talaba a("Dilmurodovich", 174), c("",0);
    talaba *b[10];

    for(int i = 0; i < 10; i++)
    {
        b[i] = new talaba("Dilmurod o'g'li", i);
    }

    for(int i = 0; i < 10; i++)
    {
        cout << b[i]->familya << " " << b[i]->ism << " " << b[i]->ball << "\n";
        cout << b[i];
    }

    cout << "\n" << a;
    cin >> c;
    cout << c;
    cout << endl;
*/
    cin >> n;
    talaba d[n];
    for(int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    cout << endl;
    sort(d, d + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << d[i] << endl;
    }

    return 0;
}
