// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: N butun musbat soni berilgan(n > 0).Agar n soni 3 ning darajasi
// bo'lsa, "3 ning darajasi", aks holda "3 ning darajasi emas" degan natija
// chiqaruvchi programma tuzilsin.Qoldiqli bo'lish va bo'lish amallarini ishlatmang.

#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "N = "; cin >> N;

    while(N > 0)
{
    N -= 3;
}
    if(N == 0)
        cout << "3 ning darajasi" << endl;
    else
        cout << "3 ning darajasi emas" << endl;

    return 0;
}
