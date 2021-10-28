// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : Qayiqning tezligi V km/soat.Daryo oqimining tezligi U km / soat,(V > U).Qayiqning daryo oqimi bo'yicha tezligi T1, oqimga qarshi T2.Qayiqning yurgan S yo'lini tpouvchi programma tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float V, U, T1, T2, S;

    cout << "V = "; cin >> V;
    cout << "U = "; cin >> U;
    cout << "T1 = "; cin >> T1;
    cout << "T2 = "; cin >> T2;

    if(V > U) cout << "S = " << T1 * (V + U) + T2 * (V - U) << endl;

    return 0;
}
