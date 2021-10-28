// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta sonlar to'plami berilgan.Kiritilgan to'plamdagi eng
// katta va eng kichik sonni topuvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, min, max;

    cout << "n = "; cin >> n;

    // Birinchi sonni max va min ga o'zlashtiramiz
    // Birinchi sonni kiritish

    cin >> a;

    max = min = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(max < a) max = a;
    if(min > a) min = a;
}
    cout << endl;

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

    return 0;
}
