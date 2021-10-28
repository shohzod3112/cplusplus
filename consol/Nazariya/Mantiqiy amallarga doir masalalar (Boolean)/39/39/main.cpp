// Muallif : Ro'ziyev Shohzod
// Sana : 14.02.2013
// Maqsad : Shaxmat doskasining ikkita turli (x1,y1), (x2,y2) koordinatalari
// berilgan (1 - 8 oraliqda yotuvchi butun sonlar).Doskaning chap pastki
// maydoni (1,1) qoraligini hisobga olib jumlani rostlikka tekshiring:
// "Farzin bir yurishda bir maydondan ikkinchisiga o'ta oladi".

#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2, k1, k2;
    bool g;

    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    k1 = x1 + y1;
    k2 = x2 + y2;

    g = ((k1 == k2) ||
         (k1 == (k2 + 2)  || k1 == k2 - 2)   ||
         (k1 == (k2 + 4)  || k1 == k2 - 4)   ||
         (k1 == (k2 + 6)  || k1 == k2 - 6)   ||
         (k1 == (k2 + 8)  || k1 == k2 - 8)   ||
         (k1 == (k2 + 10) || k1 == k2 - 10)  ||
         (k1 == (k2 + 12) || k1 == k2 - 12)  ||
         (k1 == (k2 + 14) || k1 == k2 - 14)  ||
         //Rux(to'raga o'xshab yurish)
         (x1 == x2 || y1 == y2)||
         //Shoxga o'xshab yurish
         ((x1 == x2 - 1) && (y1 == y2)) ||
         ((x1 == x2 - 1) && (y1 == y2 - 1)) ||
         ((x1 == x2 - 1) && (y1 == y2 + 1)) ||
         ((x1 == x2) && y1 == y2 + 1) ||
         ((x1 == x2) && y1 == y2 - 1) ||
         ((x1 == x2 + 1) && y1 == y2) ||
         ((x1 == x2 + 1) && y1 == y2 - 1) ||
         ((x1 == x2 + 1) && y1 == y2 + 1));

    cout << g << endl;

    system("pause");
    return 0;
}
