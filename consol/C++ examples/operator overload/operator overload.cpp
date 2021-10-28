#include <bits/stdc++.h>

using namespace std;

struct talaba
{
    string ism, familya, ota;
    int yosh, ball;

// Talaba strukturasiga konstruktor yozilyapti
// Konstruktor bir marta(struktura yaralishida) ishga tushadi ya'ni bir marta murojaat bo'ladi.
// Vazifasi musor qiymatdan qutilish uchun
// This ko'rsatgichi nimada ya'ni struktura, class ishlatiladigan joyiga qarab otasini aniqlab beradi.
// Struktura classda e'lon qilingan o'zgaruvchi
// ko'rsatchich bo'lsa, "->" belgisi ishlatiladi.
// Oddiy o'zgaruvchi uchun "." ishlatiladi.
    talaba (string familya, string ism, string ota, int ball)
    {
        this->ism = ism;
        this->familya = familya;
        this->ota = ota;
        this->ball = ball;
    }
};

bool cmp(talaba a, talaba b)
{
    if(a.ball != b.ball) return a.ball > b.ball;
    return a.familya < b.familya;
}

istream &operator >> (istream &cin, talaba &a)
{
    cin >> a.familya >> a.ism >> a.ota >> a.ball;
    return cin;
}

ostream &operator << (ostream &cout, talaba &a)
{
    cout << a.familya << " " <<  a.ism  << " " << a.ota << " " << a.ball;
    return cout;
}

int main()
{
    int n;
    talaba b("Kalabaev", "Sharapat", "Janabaevich", 174);

    cout << b;
    cin >> b;
    cout << endl;
    cout << b;

    /*cin >> n;
    talaba a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << endl;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }*/

    return 0;
}
