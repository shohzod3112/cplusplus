// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n natural soni berilgan(n > 1). pow(3,k) > n shartni qanoatlantiruvchi eng
// kichik butun k sonini aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int N, k = 0, daraja = 1;

    cout << "N = "; cin >> N;

    while(! (daraja > N))
{
    daraja *= 3;
    k++;
}
    cout << "k = " << k << endl;
    return 0;
}
