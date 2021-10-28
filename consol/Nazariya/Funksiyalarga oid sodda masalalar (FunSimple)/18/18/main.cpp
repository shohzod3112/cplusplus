// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: Doiraning yuzini hisoblovchi funksiya hosil qiling. Bu funksiya
// yordamida 3 ta doira yuzini hisoblang. Doiraning yuzi S = Pi * R * R
// orqali hisoblanadi. Pi = 3.1415 ni o'zgarmas dab qabul qiling.

#include <iostream>

using namespace std;

float doira_yuzi (float *);

int main()
{
    float R1, R2, R3;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "R3 = "; cin >> R3;

    cout << doira_yuzi(&R1) << endl;
    cout << doira_yuzi(&R2) << endl;
    cout << doira_yuzi(&R3) << endl;

    return 0;
}
    float doira_yuzi (float *a)
{
    float const pi = 3.1415;
    *a = pi * *a * *a;

    return *a;
}
