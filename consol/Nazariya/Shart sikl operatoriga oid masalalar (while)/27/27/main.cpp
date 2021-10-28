// Muallif: Ro'ziyev Shohzod
// Sana:01.11.2014
// Maqsad:Fibonachchi bo'lgan n soni berilgan (n > 1). n soni Fibonachchi ketma-ketligining
// nechanchi hadi ekanligini aniqlovchi programma tuzilsin. Fibonachchi sonlar quyidagi
// qonuniyat asosida topiladi. F1 = 1, F2 = 1, Fk = Fk-1 + Fk-2; k = 3,4,...

#include <iostream>

using namespace std;

int main()
{
    int n, F1 = 1, F2 = 1, F = 1, k = 2;

    cout << "Fibonachchi bo'lgan sonni kiriting!!!" << endl;
    cout << "n = "; cin >> n;

    while(F < n)
{
    F = F2 + F1;
    F1 = F2;
    F2 = F;

    cout << F << endl;
    k++;
}
    if(F == n)
{
    cout << F2 << " Ketma-ketlikning " << k << " - hadi" << endl;
        return 0;
}
    else
        cout << "Kiritilgan son Fibonachchi soni emas" << endl;
    return 0;
}
