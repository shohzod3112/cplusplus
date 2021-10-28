// Muallif: Ro'ziyev Shohzod
// Sana: 06.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 1).
// Ko'paytmasi eng kichik bo'ladigan ikkita qo'shni element indeksini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a1, a2, min, indeksi1 = 1, indeksi2 = 2;

    cout << "n = "; cin >> n;

    cin >> a1;
    cin >> a2;

    min = a1 * a2;

    for(int i = 3; i <= n; i++)
{
    cin >> a1;

    if(min > a1 * a2)
{
    min = a1 * a2;

    indeksi1 = i;
    indeksi2 = i - 1;
}
    a2 = a1;
}
    cout << "Natija = ";

    cout << min << endl;

    cout << indeksi2 << endl;
    cout << indeksi1 << endl;

    return 0;
}
