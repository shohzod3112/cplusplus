// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad : Umummiy markazga ega bo'lgan ikkita aylana radiusi berilgan.R1 va R2 (R1 > R2).Ularning yuzasi S1, S2, Ularning ayirmasi S3 aniqlansin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float const Pi = 3.14;
    float R1, R2, S1, S2, S3;

    cout << "R1="; cin >> R1;
    cout << "R2="; cin >> R2;

    if(R1 > R2)
{
    S1 = Pi * R1;
    S2 = Pi * R2;
    S3 = Pi * (R1 - R2);

    cout << "S1=" << S1 << endl;
    cout << "S2=" << S2 << endl;
    cout << "S3=" << S3 << endl;
}

    else cout << "R1 > R2 kiriting" << endl;

    system("pause");
    return 0;
}
