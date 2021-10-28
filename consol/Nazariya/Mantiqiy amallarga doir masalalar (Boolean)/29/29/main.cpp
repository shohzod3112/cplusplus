//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : (x,y), (x1,y1), (x2,y2) sonlari berilgan.Jumlani rostlikka tekshiring:
//"Koordinatalari (x,y) bo'lgan nuqta,chap yuqori cho'qqisi (x1,y1) koordinatalarga ega bo'lgan,
//o'ng pastkisi (x2,y2) bo'lgan, tomonlari esa koordinata o'qlariga parallel bo'lgan to'rtburchak ichida yotadi".

#include <iostream>

using namespace std;

int main()
{
    int x, x1, x2, y, y1, y2;
    bool g;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    g = (x > x1 && x < x2 && y > y2 && y < y1);

    cout << "\n" << g << endl;

    return 0;
}
