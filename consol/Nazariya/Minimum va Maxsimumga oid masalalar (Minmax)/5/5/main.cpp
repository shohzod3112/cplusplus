// Muallif: Ro'ziyev Shohzod
// Sana: 03.11.2014
// Maqsad: N natural soni va n ta (m,v) sonlar juftligi to'plami berilgan.
// (m - og'irlik, v - hajm). Kiritilgan to'plamdagi eng katta zichlikni aniqlovchi
// programma tuzilsin. Zichlik og'irlikni hajmga nisbatiga teng.

#include <iostream>

using namespace std;

int main()
{
    int n, m, v, z;

    cout << "n = "; cin >> n;

    cout << "1 - og'irlik va hajm juftligini kiriting" << endl;
    cin >> m >> v;

    z = m / v;

    for(int i = 2; i <= n; i++)
{
    cout << i << " - og'irlik va hajm juftligini kiriting" << endl;
    cin >> m >> v;

    if(z < m / v) z = m / v;
}
    cout << endl;

    cout << "Eng katta zichlik = " << z << endl;
    return 0;
}
