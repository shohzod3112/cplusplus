// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan (n > 1). n sonidan katta bo'lgan birinchi Fibonachchi
// sonini aniqovchi programma tuzilsin. Fibonachchi sonlar quyidagi
// qonuniyat asosida topiladi. F1 = 1, F2 = 1, Fk = Fk-1 + Fk-2; k = 3,4,...

#include <iostream>

using namespace std;

int main()
{
    int n, F1 = 1, F2 = 1, F = 1;

    cout << "n = "; cin >> n;

    while(F <= n)
{
    F = F2 + F1;
    F1 = F2;
    F2 = F;
}
    cout << F << endl;

    return 0;
}
