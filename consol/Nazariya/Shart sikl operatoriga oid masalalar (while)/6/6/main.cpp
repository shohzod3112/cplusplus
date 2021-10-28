// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n natural soni berilgan(n > 0).Quyidagi ifodani hisoblovchi programma tuzilsin.
// Agar n juft bo'lsa oxirgi ko'payuvchi 2, toq bo'lsa 1 bo'ladi.

#include <iostream>

using namespace std;

int main()
{
    int N, p = 1;

    cout << "N = "; cin >> N;

    while(N >= 2)
{
   p *= N;
   N -= 2;
}
    cout << p << endl;
    return 0;
}
