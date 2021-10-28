// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni berilgan.(n>0). yig'indini toping.

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float S = 0;

    cout << "n = "; cin >> n;

    for(i = 1; i <= n; i++)
    S += 1.0 / i;
    cout << "S = " << S <<  endl;

    return 0;
}
