//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : A butun soni berilgan.Jumlani rostlikka tekshiring: "A soni toq son".

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool g;

    cout << "a = "; cin >> a;

    // a ni 2 ga bo'lganda qoldiq nolga teng bo'lmasa,
    // demak toq son

    if(a % 2 != 0)
{
    g = true;
    cout << g << endl;

    // yoki quyidagicha yozish mumkin.
    // qoldiq bir bo'lsa, b = 1, true bo'ladi

    g = a % 2;

    cout << "a % 2 => " << g << endl;

    return 0;
}
