// Muallif: Ro'ziyev Shohzod
// Sana: 07.03.2013
// Maqsad: n butun soni va x haqiqiy soni berilgan.(n > 0,|x| < 1)
//Quyidagi ko'paytmani aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, surat = 1, maxraj = 1;
    float x, s, daraja;

    cout << "n = "; cin >> n;
    cout << "-1 < x < 1 bo'lgan son kiriting\nx = "; cin >> x;

    s = x; // boshlang'ich qiymat
	daraja = x;

    for(int i = 1; i <= n; i++)
{
    daraja *= x * x;
    maxraj = 2 * i;
	surat *= 2 * i - 1;

    s += surat * daraja / (maxraj * (2 * i + 1));

    cout << i << ") " << surat << " / " << maxraj * (2 * i + 1) << endl;
}
    cout << "natija = " << s << endl;

    return 0;
}
