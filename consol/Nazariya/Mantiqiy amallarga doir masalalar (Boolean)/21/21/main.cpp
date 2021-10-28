//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : Uch xonali son berilgan.Jumlani rostlikka tekshiring: "Uning raqamlari ketma-ket o'suvchi bo'lib joylashgan".

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

    g = (a > 99 && (a2 == a1 + 1) && (a3 == a2 + 1) && a <= 999);

    cout << g << endl;

    return 0;
}
