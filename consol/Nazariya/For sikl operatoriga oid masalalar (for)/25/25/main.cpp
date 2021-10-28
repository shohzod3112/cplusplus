// Muallif: Ro'ziyev Shohzod
// Sana: 24.02.2013
// Maqsad: n butun soni va x haqiqiy soni berilgan.(n > 0, |x| < 1).
// Quyidagi yig'indini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, ishora = -1;
    float x, daraja = 1, s = 0;

    cout << "n > 0 shartni qanoatlantiradigan son kiriting\nn = "; cin >> n;
    cout << "|x| < 1 shartni qanoatlantiradigan son kiriting\nx = "; cin >> x;

    for(int i = 1; i <= n; i++)
{
    daraja *= x;
    ishora *= -1;

    s += ishora * daraja / i;
}
    cout << "natija = " << s << endl;
    return 0;
}
