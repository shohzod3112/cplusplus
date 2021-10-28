// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: n butun soni berilgan.(n>0). yig'indini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, s = 0;

    cout << "n = "; cin >> n;

    for(i = 0; i <= n; i ++)
         s += pow((i + n),2);

    cout << s << endl;

    return 0;
}
