// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:n butun soni berilgan. (n > 1). Quyidagi ketma-ketlikning dastlabki n ta hadini
// chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n;
    float A, A1 = 1, A2 = 2;

    cout << "n = "; cin >> n;

    for(int k = 1; k <= n; k++)
{
    if(k == 1)
    A = 1;
    else if(k == 2) A = 2;
    else A = (A1+2 * A2) / 3;
    cout << "A" << k << " = " << A << endl;

    //yangi qiymatlarni o'zlashtiramiz

    A2 = A1;
    A1 = A;
}
    return 0;
}
