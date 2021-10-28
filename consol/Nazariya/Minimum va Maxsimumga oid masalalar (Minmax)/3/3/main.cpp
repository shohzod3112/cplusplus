// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta to'g'ri burchakli to'rtburchak tomonlarining (a,b)
// to'plami berilgan. To'plamga kiritilgan to'plamdagi eng katta perimetrli
// to'rtburchakni topuvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, b, p;

    cout << "n = "; cin >> n;

    cout << "1 - to'rtburchak tomonlarini kiriting" << endl;
    cin >> a >> b;

    p = 2 * (a + b);

    for(int i = 2; i <= n; i++)
{
    cout << i << " - to'rtburchak tomonlarini kiriting" << endl;
    cin >> a; cin >> b;

    if(p < 2 * (a + b)) p = 2 * (a + b);
}
    cout << endl;

    cout << "P = " << p << endl;
    return 0;
}
