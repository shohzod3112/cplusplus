//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Ikkita butun A va B sonlari berilgan.Jumlani rostlikka tekshiring: "A >= 0 va B < -2".

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    g = ((a >= 0) && b < -2);
    cout << "((a >= 0) && b < -2)=> " << g << endl;

    return 0;
}
