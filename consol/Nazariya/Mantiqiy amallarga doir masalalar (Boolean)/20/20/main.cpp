//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : Uch xonali son berilgan.Jumlani rostlikka tekshiring: "Ushbu sonning barcha raqamlari xar-xil".

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    bool g;

    cout << "a = "; cin >> a;

    b = a % 10;
    c = a / 100;
    d = (a % 100) / 10;

    g = (a > 99 && b != c && b != d && c != d && a <= 999);

    cout << g << endl;

    return 0;
}
