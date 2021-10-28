// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : Birinchi avtomobilning tezligi V1, ikkinchisiniki V2. Ular orasidagi masofa S.Ular bir-biri tomonga harakatlana boshlasa,T vaqtdan keyin ular orasidadi masofani topuvchi programma tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float V1, V2, T, S;

    cout << "V1 = "; cin >> V1;
    cout << "V2 = "; cin >> V2;
    cout << "T = ";  cin >> T;
    cout << "Ular orasidagi boshlang'ich masofa = "; cin >> S;

    cout << "S = " << S - (V1 * T + V2 * T) << endl;

    return 0;
}
