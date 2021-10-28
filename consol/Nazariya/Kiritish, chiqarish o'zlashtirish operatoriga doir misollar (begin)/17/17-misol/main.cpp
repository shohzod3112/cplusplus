// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad :  Sonlar o'qida A, B, C nuqtalar berilgan.AC va BC kesmalar uzunligini va yig'indisini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C;


    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    cout << "AC = " << fabs(C - A) << endl;
    cout << "BC = " << fabs(C - B) << endl;
    cout << "AC + BC = " << fabs(C - A) + fabs(C - B) << endl;

    system("pause");
    return 0;
}
