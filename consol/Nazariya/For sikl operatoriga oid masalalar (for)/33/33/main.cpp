// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:n butun soni berilgan. (n > 1). Fibonachchi ketma-ketlikning dastlabki n ta hadini
// chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, F, F1 = 1, F2 = 1;

    cout << "n = "; cin >> n;

    for(int k = 1; k <= n; k++)
{
    if((k == 1) || (k == 2))

    F = 1;
    else
    F = F1 + F2;
    cout << F << " ";
    //yangi qiymatlarni o'zlashtiramiz
    F1 = F2;
    F2 = F;
}
    return 0;
}
