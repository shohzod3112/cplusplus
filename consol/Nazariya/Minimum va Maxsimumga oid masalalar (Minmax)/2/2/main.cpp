// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta to'g'ri burchakli to'rtburchak tomonlarining (a,b)
// to'plami berilgan. Kiritilgan to'plamdagi eng kichik yuzali to'rtburchakni
// topuvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, b, s;

    cout << "n = "; cin >> n;

    cout << "1 - to'rtburchak tomonlarini kiriting" << endl;
    cin >> a >> b;

    s = a * b;

    for(int i = 2; i <= n; i++)
{
    cout << i << " - to'rtburchak tomonlarini kiriting" << endl;
    cin >> a; cin >> b;

    if(s > (a * b)) s = a * b;
}
    cout << endl;

    cout << "s = " << s << endl;
    return 0;
}
