// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:n butun soni berilgan. (n > 0). Quyidagi ketma-ketlikning dastlabki n ta hadini
// chiqaruvchi programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n;
    double A = 2;

    cout << "n = "; cin >> n;

    for(int k = 1; k <= n; k++)
{
    A = 2 + 1 / A;
    cout << k << ") " << A << endl;
}
    return 0;
}
