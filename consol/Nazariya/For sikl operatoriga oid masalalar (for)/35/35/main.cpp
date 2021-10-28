// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:n butun soni berilgan (n > 2).Quyidagi ketma-ketlikning dastlabki n ta hadini
// chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n;
    float A, A1, A2, A3;

    cout << "n = "; cin >> n;

    for(int k = 1; k <= n; k++)
{
    if(k == 1) A = 1;
    else
    if(k == 2) A = 2;
    else
    if(k == 3) A = 3;
    else A = A3 + A2 - 2 * A1;
    cout << k << "\t" << A << endl;

    //yangi qiymatlarni o'zlashtiramiz

    A1 = A2;
    A2 = A3;
    A3 = A;
}
    return 0;
}
