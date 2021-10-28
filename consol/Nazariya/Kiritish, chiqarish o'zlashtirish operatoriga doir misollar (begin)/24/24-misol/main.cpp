// Muallif : Ro'ziev Shohzod
// Sana : 21.12.2012
// Maqsad :  A, B, C berilgan. A ni qiymatini C ga, C ni qiymatini B ga, B ni qiymatini A ga o'zlashtirilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, D;

    cout << "\nA = "; cin >> A;
    cout << "\nB = "; cin >> B;
    cout << "\nC = "; cin >> C;
{
    D = A;
    A = C;
    C = B;
    B = D;
    }
    cout << "\nA = " << A << "\n" << "\nB = " << B << "\n" << "\nC = " << C << "\n" << endl;

    return 0;
}
