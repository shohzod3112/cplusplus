// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad: n butun soni berilgan (n > 1). n sonini Fibonachchi sonlari orasida
// bor-yoqligni aniqovchi programma tuzilsin. Fibonachchi sonlar quyidagi
// qonuniyat asosida topiladi. F1 = 1, F2 = 1, Fk = Fk-1 + Fk-2; k = 3,4,...

#include <iostream>

using namespace std;

int main()
{
    int n, F1 = 1, F2 = 1, F = 1;
    bool bor = false;

    cout << "n = "; cin >> n;

    if(n == 1)
{
    cout << "Bor" << endl;
    return 0;
}
    while(F < n)
{
    F = F2 + F1;
    F1 = F2;
    F2 = F;

    if(n == F)
        bor = true;

    cout << F << endl;
}
    if(bor)
        cout << "Bor!!!" << endl;
    else
        cout << "Yo'q!!!" << endl;

    return 0;
}
