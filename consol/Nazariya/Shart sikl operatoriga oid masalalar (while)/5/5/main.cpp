// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: 2 sonini qandaydir darajasini bildiruvci N butun soni berilgan(n > 0).
// k ni aniqlovchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int N, k = 0;

    cout << "2 ning qandaydir darajalaridan birini kiriting" << endl;
    cout << "N = "; cin >> N;

    while(N > 1)
{
    if((N / 2) * 2 != N)
    {
    cout << "Kiritilgan son 2 ning darajasi emas" << endl;
    return 0;
    }
    N /= 2;
    k++;
}
    cout << "2 ning " << k << " - darajasini kiritdingiz!!!" << endl;

    return 0;
}
