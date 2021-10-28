// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad:Fibonachchi bo'lgan n soni berilgan (n > 1). n sonidan bir oldin va bir keyin
// bo'lgan Fibonachchi sonini aniqlovchi programma tuzilsin. Fibonachchi sonlar quyidagi
// qonuniyat asosida topiladi. F1 = 1, F2 = 1, Fk = Fk-1 + Fk-2; k = 3,4,...

#include <iostream>

using namespace std;

int main()
{
    int n, F1 = 1, F2 = 1, F = 1;

    cout << "Fibonachchi bo'lgan sonni kiriting!!!" << endl;
    cout << "n = "; cin >> n;

    while(F < n)
{
    F = F2 + F1;
    F1 = F2;
    F2 = F;
    if(F == n)
{
    cout << "Bitta oldingi = " << F1 << endl;
    cout << "Bitta keyingi = " << F1 + F2 << endl;
        break;
}
    cout << F << endl;
}
    return 0;
}
