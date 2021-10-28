// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni berilgan.(n > 0).Shu sonning kvadratini toping.

#include <iostream>

using namespace std;

int main()
{
    int n, i, j = 1;
    float S = 0;

    cout << "n = "; cin >> n;

    for(i = 1; i <= n; i++)

{
    S = S + j;
				j += 2;
}
    cout << "S = " << S << endl;

    return 0;
}
