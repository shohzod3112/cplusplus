//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Musbat son berilgan.Jumlani rostlikka tekshiring: "Berilgan son uch xonali toq musbat".

#include <iostream>

using namespace std;

int main()
{
    int a;
    bool g;

    cout << "a = "; cin >> a;

    g = ((a > 99) && (a % 2 != 0) && (a <= 999));

    cout << g << endl;

    return 0;
}
