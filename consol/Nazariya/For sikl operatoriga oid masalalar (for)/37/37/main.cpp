// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:N butun sonlari berilgan.Quyidagi yig'indini chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int N, K, s = 0;

    cout << "N = "; cin >> N;

    for(int i = 1; i <= N; i++)
{
    int p = 1;

    for(int j = 1; j <= i; j++)
        p *= i;
        s += p;
}
    cout << s << endl;
    return 0;
}
