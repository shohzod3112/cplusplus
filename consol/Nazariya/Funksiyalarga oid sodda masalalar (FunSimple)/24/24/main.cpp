// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: Butun sonning juft - toqligini aniqlovchi Even(K) funksiyasini
// hosil qiling. Funksiya K juft son bo'lsa - true, aks holda false qiymat
// qaytarsin. Bu funksiya yordamida 3 ta sonning juft yoki toqligi aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

bool Even(int *);

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if(Even(&a))
        cout << a << " soni juft" << endl;
    else
        cout << a << " soni toq" << endl;

    if(Even(&b))
        cout << b << " soni juft" << endl;
    else
        cout << b << " soni toq" << endl;

    if(Even(&c))
        cout << c << " soni juft" << endl;
    else
        cout << c << " soni toq" << endl;

    return 0;
}
    bool Even(int *k)
{
    return (*k % 2 == 0);
}
