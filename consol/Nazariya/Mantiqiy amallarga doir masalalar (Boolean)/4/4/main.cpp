//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Ikkita butun A va B sonlari berilgan.Jumlani rostlikka tekshiring: "A > 2 va B <=3".

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    g = ((a > 2) && b <= 3);
    cout << "((a > 2) && b <= 3) => " << g << endl;

    return 0;
}
