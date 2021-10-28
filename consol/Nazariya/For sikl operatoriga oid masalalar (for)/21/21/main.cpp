// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni berilgan.(n > 0). Bir sikldan foydalanib, quyidagi dasturni tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, i;

    float S1 = 1, S2 = 1;

    cout << "n = "; cin >> n;

    if(n > 0)
{
    for(i = 1; i <= n; i++)
{
    S2 *= i;
    S1 += 1 / S2;
}}
    cout << "S = " << S1 << endl;

    return 0;
}
