// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: Markazi bir nuqtada bo'lgan, R1 va R2 radiusga ega 2 ta
// aylananing ustma-ust tushmaydigan (kesishmaydigan) qismining yuzasini
// topuvchi RingS nomli funksiya hosil qiling. Doiraning yuzini hisoblash
// formulasidan foydalaning. S = Pi * R * R. Pi = 3.1415 ni o'zgarmas deb
// qabul qiling.

#include <iostream>
#include <math.h>

using namespace std;

float aylana_yuzi (float *, float *);

int main()
{
    float R1, R2, R3;

    cout << "Bir - biriga teng bo'lmagan ikkita aylananing radiusini kiriting" << endl;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    R3 = aylana_yuzi(&R1, &R2);

    cout << R3 << endl;

    return 0;
}
    float aylana_yuzi (float *a, float *b)
{
    float const pi = 3.1415;
    float natija;

    natija = fabs(pi * (*a * *a - *b * *b));

    return natija;
}
