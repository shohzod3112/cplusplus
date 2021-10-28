// Muallif: Ro'ziyev Shohzod
// Sana: 06.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 2).
// To'plamdagi eng kichik 2 ta qiymatni aniqlovchi programma tuzilsin.
// Masalan: N = 5; 1, 2, 3, 4, 5    Natija = 1 2

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, minn;

    cout << "n = "; cin >> n;

    cin >> min;
    cin >> minn;

    if(min > minn)
{
    int k;
    k = min;
    min = minn;
    minn = k;
}
    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(min > a)
{
    minn = min;
    min = a;
}
    if(minn > a && min < a)
{
    minn = a;
}
}   cout << "Natija = ";
    cout << min << " " << minn << endl;

    return 0;
}
