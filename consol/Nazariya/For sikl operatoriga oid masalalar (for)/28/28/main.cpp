// Muallif: Ro'ziyev Shohzod
// Sana: 07.03.2013
// Maqsad: n butun soni va x haqiqiy soni berilgan.(n > 0,|x| < 1)
//Quyidagi ko'paytmani aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, surat = 1, maxraj = 2;
    float x, s, daraja;

    cout << "n = "; cin >> n;
    cout << "-1 < x < 1 bo'lgan son kiriting\nx = "; cin >> x;

    s = 1 + x / 2; // boshlang'ich qiymat
	daraja = x;

    for(int i = 2; i <= n; i++)
{
    daraja *= (-1) * x;
    maxraj *= 2 * i;
	surat *= 2 * i - 3;

    s += daraja * surat / maxraj;

    cout << i << ") " << surat << " / " << maxraj * (2 * i + 1) << endl;
}
    cout << "natija = " << s << endl;

    return 0;
}
