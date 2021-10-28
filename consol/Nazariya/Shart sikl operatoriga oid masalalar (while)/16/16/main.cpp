// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: Sportsimen birinchi kuni 10 km yugurib boshladi.Keyingi kunlari
// bir oldingi kunga nisbatan p foizga ko'p yugurdi (0 < p < 50).Sportsimenning
// necha kundan keyin jami yugurgan masofasi 200 km dan oshadi? Jami kunlar
// soni va masofani (butun son) chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    float masofa = 10, k = 0, p;

    cout << "Sportsimen oldingi kunga nisbatan necha foiz ko'p yugurgan 0 < p < 50 oraliqda foizni kiriting" << endl;
    cout << "p = "; cin >> p;

    p /= 100;

    while(masofa <= 200)
{
    k++;
    masofa += masofa * p;
    cout << k << " - kun " << masofa << endl;
}
    cout << "kun = " << k << endl;
    cout << "masofa = " << masofa << endl;
    return 0;
}
