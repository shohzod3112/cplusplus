// Muallif: Ro'ziyev Shohzod
// Sana: 06.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 3).
// To'plamdagi eng katta 3 ta qiymatni aniqlovchi programma tuzilsin.
// Masalan: N = 5; 1, 2, 3, 4, 5    Natija = 5, 4, 3

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, maxx, maxxx;

    cout << "n = "; cin >> n;

    cin >> max;
    cin >> maxx;
    cin >> maxxx;

    if((max < maxx) && ( maxx > maxxx))
{
    int k;
    k = max;
    max = maxx;
    maxx = k;
}
    if((max < maxxx) && (maxxx > maxx))
{
    int k;
    k = max;
    max = maxxx;
    maxxx = k;
}
    if(maxx < maxxx)
{
    int k;
    k = maxx;
    maxx = maxxx;
    maxxx = k;
}
    for(int i = 4; i <= n; i++)
{
    cin >> a;

    if(max < a)
{
    maxxx = maxx;
    maxx = max;
    max = a;
}
    if(max > a && maxx < a)
{
    maxxx = maxx;
    maxx = a;
}
    if(maxx > a && maxxx < a)
{
    maxxx = a;
}

}   cout << "Natija = ";
    cout << maxxx << " " << maxx << " " << max << endl;

    return 0;
}
