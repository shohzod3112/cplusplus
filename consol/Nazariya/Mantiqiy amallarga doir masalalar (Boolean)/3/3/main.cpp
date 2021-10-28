//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : A butun soni berilgan.Jumlani rostlikka tekshiring: "A soni juft son".

#include <iostream>

using namespace std;

int main()
{
    int a;
    bool b;

    cout << "a = "; cin >> a;

    // a ni 2 ga bo'lganda qoldiq nolga teng bo'lsa,
    // demak juft son

    b = ((a % 2) == 0);
    cout << "((a % 2) == 0) => " << b << endl;

    return 0;
}
