//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : Shaxmat doskasining ikkita turli (x1,y1), (x2,y2) koordinatalari  berilgan (1 - 8 oraliqda yotuvchi butun sonlar).
//Doskaning chap pastki maydoni (1,1) qoraligini hisobga olib jumlani rostlikka tekshiring:
//"Rux (to'ra) bir yurishda bir maydondan ikkinchisiga o'ta oladi".

#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    bool g;

    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    g = ((x2 == x1) || (y2 == y1));

    cout << g << endl;

    return 0;
}
