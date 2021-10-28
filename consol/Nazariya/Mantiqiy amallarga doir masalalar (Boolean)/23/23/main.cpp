//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : Uch xonali son berilgan.Jumlani rostlikka tekshiring: "Ushbu sonni chapdan o'qiganda ham o'ngdan o'qiganda ham bir-xil".

#include <iostream>

using namespace std;

int main()
{
    int a, a1, a2, a3;
    bool g;

    cout << "a = "; cin >> a;

    a1 = a / 100;
    a2 = (a % 100) / 10;
    a3 = a % 10;

    g = (a > 99 && a1 == a3 && a <= 1000);

    cout << g << endl;

    return 0;
}
