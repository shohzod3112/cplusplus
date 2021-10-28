// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: k va n butun sonlari berilgan(n > 0).k sonini n marta chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, k, i;

    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;

    for(i = 0; i < k; i++)
    cout << "n = " << n << endl;

    return 0;
}
