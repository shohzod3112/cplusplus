//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : x va y sonlar berilgan.Jumlani rostlikka tekshiring:"Koordinatalari (x,y) bo'lgan nuqta, koordinata choragining Birinchisida yoki uchinchisida yotadi".

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool g;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    g = (x > 0 && y > 0)
     || (x < 0 && y < 0);

    cout << g << endl;

    return 0;
}
