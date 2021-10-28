// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: a va b butun sonlari berilgan(a < b).a va bsonlari orasidagi barcha butun
// sonlarni ( a va b ni ham ) chiqaruvchi va chiqarilgan sonlar sonini chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, b, i;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a < b)
{
    for(i = a; i <= b; i++)

    cout << i << endl;
}
    cout << "\n" << b - a + 1 << endl;
    return 0;
}
