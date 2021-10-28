// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta sonlar to'plami berilgan. Kiritilgan to'plamdagi
// eng kichik element o'rnini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, indeks;

    cout << "n = "; cin >> n;

    cin >> a;

    min = a;
    indeks = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(min > a)
{
    min = a;
    indeks = i;
}
}
    cout << endl;

    cout << "Turgan o'rni = " << indeks << endl;
    return 0;
}
