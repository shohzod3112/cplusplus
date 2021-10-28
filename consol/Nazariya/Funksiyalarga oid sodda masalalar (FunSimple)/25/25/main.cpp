// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: IsSquare(K) mantiqiy funksiyasini hosil qiling. (K > 0).
// Agar K biror butun sonning kvadrati bo'lsa - true, aks holda false
// qiymat qaytarilsin. Shu funksiya orqali 3 ta sonni tekshiring.

#include <iostream>
#include <math.h>

using namespace std;

bool IsSquare (int *);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if(IsSquare(&a))
        cout << a << " butun sonning kvadrati" << endl;
    else
        cout << a << " butun sonning kvadrati EMAS" << endl;

    if(IsSquare(&b))
        cout << b << " butun sonning kvadrati" << endl;
    else
        cout << b << " butun sonning kvadrati EMAS" << endl;

    if(IsSquare(&c))
        cout << c << " butun sonning kvadrati" << endl;
    else
        cout << c << " butun sonning kvadrati EMAS" << endl;

    return 0;
}
    bool IsSquare(int *k)
{
    int ildiz = sqrt(*k);

    if(ildiz * ildiz == *k)
        return true;
    else
        return false;
}
