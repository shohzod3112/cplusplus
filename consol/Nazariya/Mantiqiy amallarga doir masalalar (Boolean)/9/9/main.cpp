//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Ikkita butun A va B soni berilgan.Jumlani rostlikka tekshiring: "A va B sonlarning hech bo'lmaganda bittasi toq sonlar".

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    // a va b ni 2 ga bo'lganda qoldiq nolga teng bo'lmasa,
    // demak toq son

    g = ((a % 2) != 0 || (b % 2) != 0);
    cout << "((a % 2) != 0 || (b % 2) != 0) => " << g << endl;

    return 0;
}
