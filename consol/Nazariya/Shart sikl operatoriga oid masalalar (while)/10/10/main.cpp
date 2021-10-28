// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n natural soni berilgan(n > 1). pow(3,k) <= n shartni qanoatlantiruvchi
// eng katta butun k sonini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, k = 0;
    cout << "n = "; cin >> n;

    while(3 <= n)
{
    n /= 3;
    k++;
}
    cout << "k = " << k << endl;
    return 0;
}
