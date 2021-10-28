// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Qaysidir yil berilgan.Berilgan yil qaysi yuz yillikka kirishini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int Asr, yil;

    cout << "Yilni kiriting \n";
    cout << "A = " ; cin >> yil;

    Asr = yil / 100 + 1;

    cout << yil << " yil " << Asr << " inchi yuz yillikka kiradi!" << endl;

    return 0;
}
