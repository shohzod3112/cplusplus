// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni berilgan.(n > 0). yig'indini toping.

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float j = 1.1, S = 1;

    cout << "n = "; cin >> n;

    for(i = 1; i <= n; i ++)

{
    S *= j; j += 0.1;
}
    cout << "S = " << S << endl;

    return 0;
}
