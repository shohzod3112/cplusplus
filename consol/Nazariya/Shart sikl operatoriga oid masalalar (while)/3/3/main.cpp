// Muallif: Ro'ziyev Shohzod
// Sana:02.03.2013
// Maqsad: N va K butun musbat sonlari berilgan.Faqat ayirish va qo'shish
// amallarini ishlatib N sonini K soniga bo'lgandagi qoldiq va butun qismini
// aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int N, K, i = 0;

    cout << "N = "; cin >> N;
    cout << "K = "; cin >> K;

    while(N > 0 && K > 0 && N >= K)
{
    N -= K;
    i++;
}
    cout << "Butun qismi = " << i << endl;
    cout << "Qoldiq = " << N << endl;

    return 0;
}
