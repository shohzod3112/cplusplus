// Muallif: Ro'ziyev Shohzod
// Sana: 24.02.2013
// Maqsad: n butun soni va x haqiqiy soni berilgan.(n > 0).
// Quyidagi yig'indini aniqlovchi programma tuzing.
// Olingan natija taxminan sin(x) ga yaqinlashadi.

#include <iostream>

using namespace std;

int main()
{
    int n, ishora = 1;
    float x, maxraj, surat, s = 0;
    float const pi = 3.1415;

    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;

    x = x * pi / 180;

    surat = x;
    maxraj = 1;
    s = x; // yig'indisining boshlang'ich qiymati

    for(int i = 1; i <= n; i++)
{
    ishora *= -1;
    surat *= x * x;
    maxraj *= 2 * i * (2 * i + 1);

    s += ishora * surat / maxraj;
    cout << surat << " / " << maxraj << endl;
}
    cout << "natija = " << s << endl;
    return 0;
}
